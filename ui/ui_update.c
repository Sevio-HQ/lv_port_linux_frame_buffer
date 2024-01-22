#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/ioctl.h>
#include <math.h>
#include "ui.h"
#include "ui2.h"
#include "time.h"
#include "ubus.h"
#include "ui_update.h"

#define TIMER_1MIN  60000
#define TIMER_1SEC  60*10
#define TIMER_UPDATE  1*10
#define TIMER_STARTUP  60*100
#define ADC_CH_VOLTAGE  4
#define ADC_CH_CURRENT  5
#define MAX_FLOAT_STR_SIZE 5
#define PERIODIC_TIMER_UPDATE 5

uint8_t _temp[MAX_FLOAT_STR_SIZE]="0.0";
uint8_t  voltage[MAX_FLOAT_STR_SIZE]="0.0";
uint8_t  current[MAX_FLOAT_STR_SIZE]="0.0";
static bool _ui_updater_init = true;
static bool gpsNotFixed = true;
bool wwan_up = false;
lv_timer_t * minTimer = NULL;
lv_timer_t * secTimer = NULL;
lv_timer_t * refreshTimer = NULL;

int refreshGPS();
int refreshGPS_ui();
int ui_gsm_update_ui();
int ui_gsm_update();
void ui_gsm_init();

typedef enum eUiMenuIndex {
    UI_NONE,
    UI_HOME,
    UI_VPNSTATUS,
    UI_WANCONFIG,
    UI_LANCONFIG,
    UI_WLANCONFIG,
    UI_GSMCONFIG,
    UI_GPSCONFIG,
	UI_WIFICONFIG,
	UI_IOCONFIG,
	UI_PORTSCONFIG,
    MAX_UI_MENU
} tUiMenuIndex;

typedef int (*RefreshUI)();

typedef struct sUiMenu {  
    tUiMenuIndex left;
    tUiMenuIndex rigth;
    tUiMenuIndex down;
    RefreshUI refresh;
} tUiMenu;


tUiMenu uiMenu[MAX_UI_MENU] = { };
lv_obj_t *  uiMenuMap[MAX_UI_MENU] = { };
tUiMenuIndex menuIndex = UI_HOME;

void getGpsData();
bool gpsDataInit();

void uiMenu_init()
{
    uiMenuMap[UI_HOME] = ui_Home;
    uiMenuMap[UI_VPNSTATUS] = ui_VPNSTATUS;
    uiMenuMap[UI_WANCONFIG] = ui_WANIPCONFIG;
    uiMenuMap[UI_LANCONFIG] = ui_LANIPCONFIG;
    uiMenuMap[UI_WLANCONFIG] = ui_WLANIPCONFIG;
    uiMenuMap[UI_WIFICONFIG] = ui_WIFI;	
	uiMenuMap[UI_GSMCONFIG] = ui_MOBILE;
    uiMenuMap[UI_GPSCONFIG] = ui_GPS_Screen;
	uiMenuMap[UI_IOCONFIG] = ui_IO;
	uiMenuMap[UI_PORTSCONFIG] = ui_PORTS;

    uiMenu[UI_HOME].left = UI_PORTSCONFIG;
    uiMenu[UI_HOME].down = UI_NONE;
    uiMenu[UI_HOME].rigth = UI_VPNSTATUS;

    uiMenu[UI_VPNSTATUS].left = UI_HOME;
    uiMenu[UI_VPNSTATUS].down = UI_NONE;
    uiMenu[UI_VPNSTATUS].rigth = UI_WANCONFIG;

    uiMenu[UI_WANCONFIG].left = UI_VPNSTATUS;
    uiMenu[UI_WANCONFIG].down = UI_LANCONFIG;
    uiMenu[UI_WANCONFIG].rigth = UI_WIFICONFIG;

    uiMenu[UI_LANCONFIG].left = UI_VPNSTATUS;
    uiMenu[UI_LANCONFIG].down = UI_WLANCONFIG;
    uiMenu[UI_LANCONFIG].rigth = UI_WIFICONFIG;

    uiMenu[UI_WLANCONFIG].left = UI_VPNSTATUS;
    uiMenu[UI_WLANCONFIG].down = UI_WANCONFIG;
    uiMenu[UI_WLANCONFIG].rigth = UI_WIFICONFIG;

    uiMenu[UI_WIFICONFIG].left = UI_WANCONFIG;
    uiMenu[UI_WIFICONFIG].down = UI_NONE;
    uiMenu[UI_WIFICONFIG].rigth = UI_GSMCONFIG;

    uiMenu[UI_GSMCONFIG].left = UI_WIFICONFIG;
    uiMenu[UI_GSMCONFIG].down = UI_GPSCONFIG;
    uiMenu[UI_GSMCONFIG].rigth = UI_IOCONFIG;
    uiMenu[UI_GSMCONFIG].refresh = ui_gsm_update_ui;

    uiMenu[UI_GPSCONFIG].left = UI_WIFICONFIG;
    uiMenu[UI_GPSCONFIG].down = UI_GSMCONFIG;
    uiMenu[UI_GPSCONFIG].rigth = UI_IOCONFIG;
    uiMenu[UI_GPSCONFIG].refresh = refreshGPS_ui;

    uiMenu[UI_IOCONFIG].left = UI_GSMCONFIG;
    uiMenu[UI_IOCONFIG].down = UI_NONE;
    uiMenu[UI_IOCONFIG].rigth = UI_PORTSCONFIG;

    uiMenu[UI_PORTSCONFIG].left = UI_IOCONFIG;
    uiMenu[UI_PORTSCONFIG].down = UI_NONE;
    uiMenu[UI_PORTSCONFIG].rigth = UI_HOME;
}

lv_obj_t * uiMenu_getCurrent()
{
    if (menuIndex < MAX_UI_MENU)
        return uiMenuMap[menuIndex];
    return NULL;
}

void timer_refresh_cb()
{
    if (uiMenu[menuIndex].refresh) uiMenu[menuIndex].refresh();
    lv_timer_del(refreshTimer);
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

void startUiRefresh()
{
    refreshTimer = lv_timer_create(timer_refresh_cb, TIMER_UPDATE, lv_scr_act());
}

void uiMenu_load()
{
    lv_disp_load_scr( uiMenu_getCurrent() );
    startUiRefresh();
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
    lv_label_set_text_fmt(ui_WANIPCONFIG_IP_Values, "IP:  %s/%d", _ip, _mask);
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

void updateWwanConfig(bool _ifup, const char* _ip, unsigned int _mask, const char* _gw)
{
    LV_LOG_INFO("WWAN ip:%s", _ip);
    if (strlen(_ip) > 0) wwan_up = true;
    else wwan_up = false;
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

        if ((menuIndex == UI_GSMCONFIG)||(_ui_updater_init))
        {
            updateInterfaceStatus("wwan", updateWwanConfig);
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

        // Removed the values related to voltage and current
        //readBoardValues();   
        readTempValues();
        //lv_label_set_text_fmt(ui_boardStatusLabel, "%sV / %sA / %s°C", voltage, current, _temp);
        lv_label_set_text_fmt(ui_boardStatusLabel, "%s °C", _temp);
        lv_obj_invalidate(timer->user_data);
    }
    
    if ((menuIndex == UI_GPSCONFIG)||(_ui_updater_init)||(gpsNotFixed==true))
    {
        if (refreshGPS() != 0) 
        {
            gpsNotFixed = true;
            LV_LOG_INFO("GPS NOT fixed");
        }
        else 
        {
            LV_LOG_INFO("GPS fixed");
            gpsNotFixed = false;
        }

    }
    if ((menuIndex == UI_GSMCONFIG)||(_ui_updater_init))
    {
        if (_ui_updater_init) ui_gsm_init();
        ui_gsm_update();
    }

}
    
static void timer_startup_cb(lv_timer_t * timer)
{
    minTimer = lv_timer_create(timer_min_cb, TIMER_1MIN, lv_scr_act());
    secTimer = lv_timer_create(timer_sec_cb, TIMER_1SEC, lv_scr_act());
    timer_min_cb(minTimer);
    timer_sec_cb(secTimer);
    // restart init flag
    if (_ui_updater_init) _ui_updater_init = false;
    lv_timer_del(timer);
}


void ui_updater_init()
{
    lv_timer_t * startUpTimer = lv_timer_create(timer_startup_cb, TIMER_STARTUP, lv_scr_act());
}

