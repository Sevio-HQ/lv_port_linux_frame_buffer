#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/ioctl.h>
#include <math.h>
#include "ui.h"
#include "time.h"
#include "ubus.h"

#define TIMER_1MIN  60000
#define TIMER_1SEC  60*10
#define ADC_CH_VOLTAGE  4
#define ADC_CH_CURRENT  5
#define MAX_FLOAT_STR_SIZE 5
#define PERIODIC_TIMER_UPDATE 5

uint8_t _temp[MAX_FLOAT_STR_SIZE]="0.0";
uint8_t  voltage[MAX_FLOAT_STR_SIZE]="0.0";
uint8_t  current[MAX_FLOAT_STR_SIZE]="0.0";
static bool _ui_updater_init = true;

typedef enum eUiMenuIndex {
    UI_NONE, 
    UI_SPLASH, 
    UI_HOME, 
    UI_VPNSTATUS, 
    UI_WANCONFIG, 
    UI_LANCONFIG, 
    UI_WLANCONFIG, 
    MAX_UI_MENU
} tUiMenuIndex;


typedef struct sUiMenu {  
    tUiMenuIndex left;
    tUiMenuIndex rigth;
    tUiMenuIndex down;
} tUiMenu;


tUiMenu uiMenu[MAX_UI_MENU] = { };
lv_obj_t *  uiMenuMap[MAX_UI_MENU] = { };
tUiMenuIndex menuIndex = UI_SPLASH;

void uiMenu_init()
{
    uiMenuMap[UI_SPLASH] = ui_Splash;
    uiMenuMap[UI_HOME] = ui_Home;
    uiMenuMap[UI_VPNSTATUS] = ui_VPNSTATUS;
    uiMenuMap[UI_WANCONFIG] = ui_WANIPCONFIG;
    uiMenuMap[UI_LANCONFIG] = ui_LANIPCONFIG;
    uiMenuMap[UI_WLANCONFIG] = ui_WLANIPCONFIG;

    uiMenu[UI_SPLASH].left = UI_NONE;
    uiMenu[UI_SPLASH].down = UI_HOME;
    uiMenu[UI_SPLASH].rigth = UI_HOME;

    uiMenu[UI_HOME].left = UI_SPLASH;
    uiMenu[UI_HOME].down = UI_VPNSTATUS;
    uiMenu[UI_HOME].rigth = UI_VPNSTATUS;

    uiMenu[UI_VPNSTATUS].left = UI_HOME;
    uiMenu[UI_VPNSTATUS].down = UI_WANCONFIG;
    uiMenu[UI_VPNSTATUS].rigth = UI_WANCONFIG;

    uiMenu[UI_WANCONFIG].left = UI_VPNSTATUS;
    uiMenu[UI_WANCONFIG].down = UI_LANCONFIG;
    uiMenu[UI_WANCONFIG].rigth = UI_LANCONFIG;

    uiMenu[UI_LANCONFIG].left = UI_WANCONFIG;
    uiMenu[UI_LANCONFIG].down = UI_WLANCONFIG;
    uiMenu[UI_LANCONFIG].rigth = UI_WLANCONFIG;

    uiMenu[UI_WLANCONFIG].left = UI_LANCONFIG;
    uiMenu[UI_WLANCONFIG].down = UI_NONE;
    uiMenu[UI_WLANCONFIG].rigth = UI_NONE;
}

lv_obj_t * uiMenu_getCurrent()
{
    if (menuIndex < MAX_UI_MENU)
        return uiMenuMap[menuIndex];
    return NULL;
}

void uiMenu_right()
{
    if (uiMenu[menuIndex].rigth != UI_NONE){
        menuIndex = uiMenu[menuIndex].rigth;
    }
}

void uiMenu_left()
{
    if (uiMenu[menuIndex].left != UI_NONE){
        menuIndex = uiMenu[menuIndex].left;
    }
}

void uiMenu_down()
{
    if (uiMenu[menuIndex].down != UI_NONE){
        menuIndex = uiMenu[menuIndex].down;
    }
}

void uiMenu_load()
{
    lv_disp_load_scr( uiMenu_getCurrent() );
}

void floatToStr(uint8_t *out, float x,int decimalPoint)
{
    uint16_t absval = fabs(x);
    uint16_t absvalcopy = absval;


    int decimalcount = 0;

    // if first digit is 0
    if (absval == 0)
    {
        decimalcount ++;
    }else{
        while(absvalcopy != 0)
        {

            absvalcopy /= 10;
            decimalcount ++;
        }
    }

    uint8_t *absbuffer = malloc(sizeof(uint8_t) * (decimalcount + decimalPoint + 1));
    int absbufferindex = 0;
    absvalcopy = absval;
    uint8_t temp;

    int i = 0;
    for(i = decimalcount; i > 0; i--)
    {
        uint16_t frst1 = fabs((absvalcopy / pow(10.0, i-1)));
        temp = (frst1 % 10) + 0x30;
        *(absbuffer + absbufferindex) = temp;
        absbufferindex++;
    }

    if(decimalPoint > 0)
    {
        *(absbuffer + absbufferindex) = '.';
        absbufferindex ++;

        //------------------- Decimal Extractor ---------------------//
       for(i = 1; i < decimalPoint + 1; i++)
       {

           uint32_t valueFloat = (x - (float)absval)*pow(10,i);
           *(absbuffer + absbufferindex) = ((valueFloat) % 10) + 0x30;
           absbufferindex++;
       }
    }

   for(i=0; i< (decimalcount + decimalPoint + 1); i++)
   {
       *(out + i) = *(absbuffer + i);
   }

   i=0;
   if(decimalPoint > 0)
       i = 1;
   *(out + decimalcount + decimalPoint + i) = 0;
}

void get_uptime()
{
    struct timespec tsv;
    clock_gettime(CLOCK_MONOTONIC, &tsv);
    time_t t = tsv.tv_sec; // just in case types aren't the same
    struct tm tmv;
    localtime_r(&t, &tmv); // populate tmv with local time info
    lv_label_set_text_fmt(ui_uptimeLabel, "%dd %02dh %02d'",
        tmv.tm_mday-1, tmv.tm_hour, tmv.tm_min);

}

void printLocalTime()
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    lv_label_set_text_fmt(ui_dateTimeLabel, "%02d:%02d %02d/%02d/%d UTC", tm.tm_hour + (tm.tm_isdst==1 ? 1:0), tm.tm_min, tm.tm_mday,  tm.tm_mon + 1, tm.tm_year + 1900);
}

int readAdcValues(int _ch)
{
    char buf[255]="";
    char path[255]="";
    int len=snprintf(path, sizeof(path), "/sys/bus/iio/devices/iio:device0/in_voltage%d_raw", _ch);
    int fd = open(path, O_RDONLY);
     if (fd < 0)
    {
        perror("in_voltage");
        return fd;
    }else{
        read(fd, buf, sizeof(buf));
        float value = (float)atoi(buf) * 1.8 / 4096.0;
        if (_ch == ADC_CH_VOLTAGE)
        {
            float _voltage = value * 40.0;
            floatToStr(voltage, _voltage,1);
        }
        if (_ch == ADC_CH_CURRENT)
        {
            float _current = value / 0.2;
            floatToStr(current, _current,1);

        }
        LV_LOG_INFO("fd:%d ch:%d buf:%s value:%s", fd, _ch, buf, (_ch == ADC_CH_VOLTAGE)?voltage : current);
    }
    close(fd);

    return 0;
}

void readBoardValues()
{   
    readAdcValues(ADC_CH_VOLTAGE);
    readAdcValues(ADC_CH_CURRENT);
}

int readTempValues()
{
    char buf[255]="";

    int fd = open("/sys/class/hwmon/hwmon0/temp1_input", O_RDONLY);
     if (fd < 0)
    {
        perror("temp1_input");
        return fd;
    }else{
        read(fd, buf, sizeof(buf));

        float temp = (float)atoi(buf) / 1000.0;
   
        floatToStr(_temp, temp,1);
        LV_LOG_INFO("fd:%d buf:%s temp: %f(%s)", fd, buf, temp, _temp);
    }
    close(fd);
    return 0;
}

void updateWanConfig(bool _ifup, const char* _ip, unsigned int _mask, const char* _gw)
{
    //lv_label_set_text(ui_WANIPCONFIG_Label2,"IP:  192.168.134.27/24");
    //lv_label_set_text(ui_WANIPCONFIG_Label3,"GW:  192.168.1.254");
    lv_label_set_text_fmt(ui_WANIPCONFIG_Label2, "IP:  %s/%d", _ip, _mask);
    lv_label_set_text_fmt(ui_WANIPCONFIG_Label3, "GW:  %s", _gw);
}

void updateLanConfig(bool _ifup, const char* _ip, unsigned int _mask, const char* _gw)
{
    //lv_label_set_text(ui_WANIPCONFIG_Label10,"IP:  192.168.134.27/24");
    lv_label_set_text_fmt(ui_WANIPCONFIG_Label10, "IP:  %s/%d", _ip, _mask);
}

void updateWlanConfig(bool _ifup, const char* _ip, unsigned int _mask, const char* _gw)
{
    //lv_label_set_text(ui_WANIPCONFIG_Label6,"IP:  192.168.134.27/24");
    //lv_label_set_text(ui_WANIPCONFIG_Label7,"GW:  192.168.1.254");
    lv_label_set_text_fmt(ui_WANIPCONFIG_Label6, "IP:  %s/%d", _ip, _mask);
    lv_label_set_text_fmt(ui_WANIPCONFIG_Label7, "GW:  %s", _gw);
}

static int count = 0;

static void timer_sec_cb(lv_timer_t * timer)
{
    if ((++count > PERIODIC_TIMER_UPDATE)||(_ui_updater_init))
    {
        if ((menuIndex == UI_WANCONFIG)||(_ui_updater_init))
        {
            updateInterfaceStatus("wan", updateWanConfig);
        }

        if ((menuIndex == UI_LANCONFIG)||(_ui_updater_init))
        {
            updateInterfaceStatus("lan", updateLanConfig);
        }

        if ((menuIndex == UI_VPNSTATUS)||(_ui_updater_init))
        {
            updateInterfaceStatus("ovpn0", NULL);
        }

        if ((menuIndex == UI_WLANCONFIG)||(_ui_updater_init))
        {
            updateInterfaceStatus("wlan", updateWlanConfig);
        }
        count = 0;
    }

}

static void timer_min_cb(lv_timer_t * timer)
{
    if ((menuIndex == UI_HOME)||(_ui_updater_init))
    {
        printLocalTime();
        get_uptime();

        readBoardValues();   
        readTempValues();
        lv_label_set_text_fmt(ui_boardStatusLabel, "%sV / %sA / %s°C", voltage, current, _temp);
        lv_obj_invalidate(timer->user_data);
    }
}
    
void ui_updater_init()
{
    lv_timer_t * minTimer = lv_timer_create(timer_min_cb, TIMER_1MIN, lv_scr_act());
    lv_timer_t * secTimer = lv_timer_create(timer_sec_cb, TIMER_1SEC, lv_scr_act());
    timer_min_cb(minTimer);
    timer_sec_cb(secTimer);
    // restart init flag
    if (_ui_updater_init) _ui_updater_init = false;
}

