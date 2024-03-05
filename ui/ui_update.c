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
#include "uci_int.h"

#define TIMER_1MIN  60000
#define TIMER_1SEC  60*10
#define TIMER_UPDATE  1*10
#define TIMER_STARTUP  10*100 //60*100
#define ADC_CH_VOLTAGE  4
#define ADC_CH_CURRENT  5
#define MAX_FLOAT_STR_SIZE 5
#define PERIODIC_TIMER_UPDATE 5
#define MAX_NUM_PORTS 5
#define MAX_SERVICE_TAG_LEN 16
#define WIFI_MODE_MAX_LEN 4
#define SSID_MAX_LEN 32

uint8_t _temp[MAX_FLOAT_STR_SIZE]="0.0";
uint8_t  voltage[MAX_FLOAT_STR_SIZE]="0.0";
uint8_t  current[MAX_FLOAT_STR_SIZE]="0.0";
static bool _ui_updater_init = true;
static bool gpsNotFixed = true;
bool wwan_up = false;
lv_timer_t * minTimer = NULL;
lv_timer_t * secTimer = NULL;
lv_timer_t * refreshTimer = NULL;

int DI1_status = 0;
int DI2_status = 0;

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
tUiMenuIndex prev_menuIndex = UI_NONE;

void getGpsData();
bool gpsDataInit();
bool isGpsGsmPresent(void);
extern bool isModemAvail;
extern int ui_gsm_getAvail();

tIfStat ifStats[MAX_IF_DEFINED] = { { .up = false, .name="wan", .ip="", .gw="", .mask=0, .reachable = false },
                                    { .up = false, .name="wlan", .ip="", .gw="", .mask=0, .reachable = false },
                                    { .up = false, .name="wwan", .ip="", .gw="", .mask=0, .reachable = false } 
                                  };

void setIfStatIfChanged(tIfDefined _if, char* name, bool up, char* gw, char* ip, unsigned long mask)
{
	LV_LOG_INFO("%d) name:%s up:%s ip:%s mask:%lu gw:%s", _if, name, up ? "UP" : "DOWN", ip, mask, gw);

    if(up != ifStats[_if].up) {
        ifStats[_if].up = up;
    }
    if(strcmp(gw, ifStats[_if].gw) != 0) {
        strcpy(ifStats[_if].gw, gw);
    }
    if(strcmp(ip, ifStats[_if].ip) != 0) {
        strcpy(ifStats[_if].ip, ip);
    }
    if(mask != ifStats[_if].mask) {
        ifStats[_if].mask = mask;
    }

}

int getIfStatEntry(const char* name, bool* up, char** gw, char** ip, unsigned long* mask)
{
    int index = WAN;
    do {
        //LV_LOG_INFO("%d) name:%s - %s", index, name, ifStats[index].name);
        if (strcmp(name, ifStats[index].name) == 0)
        {
            *up = ifStats[index].up;
            *gw = ifStats[index].gw;
            *ip = ifStats[index].ip;
            *mask = ifStats[index].mask;
	        //LV_LOG_INFO("FOUND name:%s up:%s ip:%s mask:%lu gw:%s", name, *up ? "UP" : "DOWN", *ip, *mask, *gw);

            return 1;
        }else{
            ++index;
        }
    }while( index<MAX_IF_DEFINED );

    LV_LOG_INFO("IF not FOUND name:%s", name);

    return 0;
}

int updateIfStats(char* name, bool up, char* gw, char* ip, unsigned long mask)
{
	LV_LOG_INFO("name:%s up:%s ip:%s mask:%lu gw:%s", name, up ? "UP" : "DOWN", ip, mask, gw);
    if ((strcmp(name, "wan") == 0))
    {
        setIfStatIfChanged(WAN, name, up, gw, ip, mask);
    }
    if ((strcmp(name, "wlan") == 0))
    {
        setIfStatIfChanged(WLAN, name, up, gw, ip, mask);
    }
        if ((strcmp(name, "wwan") == 0))
    {
        setIfStatIfChanged(WWAN, name, up, gw, ip, mask);
    }
}

void updateUiMenuNoGpsGsm(void)
{
    ui_gsm_getAvail();
    if (isModemAvail)
    {
        uiMenu[UI_PORTSCONFIG].rigth = UI_GSMCONFIG;
        uiMenu[UI_HOME].left = UI_GSMCONFIG;
    }else{
        uiMenu[UI_PORTSCONFIG].rigth = UI_HOME;
        uiMenu[UI_HOME].left = UI_PORTSCONFIG;
    }

}

int ui_home_refresh()
{
    updateUiMenuNoGpsGsm(); 
    return 0;
}

static int ports_index = 0;
const char* PORTS_LABEL[] = {"WAN", "LAN1", "LAN2", "LAN3", "LAN4", "LAN5"};
const char* PORTS_NAME[] = {"eth0", "lan1", "lan2", "lan3", "lan4", "lan5"};
void updatePortsStatusUI_def();

int ui_ports_refresh_ui()
{
    if ((prev_menuIndex != UI_PORTSCONFIG) && (menuIndex == UI_PORTSCONFIG))
    {
        // enter in the Prots config menu. Reset to first port
        ports_index = 0;
        updateUiMenuNoGpsGsm();
    }else if (((prev_menuIndex == UI_PORTSCONFIG) && (menuIndex == UI_PORTSCONFIG)))
    {
        if (ports_index < MAX_NUM_PORTS)
            ports_index++;
        else    
            ports_index = 0;
    }
    lv_label_set_text(ui_PORTS_page_label, PORTS_LABEL[ports_index]);
    // update ports status and data
    updatePortsStatusUI_def();
    return 0;
}

// int uci_config_isWifiDisabled(bool* _wifiDis);
int uci_config_isWifiStaMode(bool* _wifiSta);

int ui_wifi_config_refresh()
{
    bool _wifiDis = false;
    bool _wifiStaMode = false;

    uci_config_isWifiDisabled(&_wifiDis);
    uci_config_isWifiStaMode(&_wifiStaMode);
    
    if ((_wifiStaMode)&&(!_wifiDis))
    {
        uiMenu[UI_LANCONFIG].down = UI_WLANCONFIG;
    }else{
        uiMenu[UI_LANCONFIG].down = UI_WANCONFIG;
    }

}

int ui_io_config_refresh()
{
    ui_wifi_config_refresh();
}
int ui_wlan_config_refresh()
{
    ui_wifi_config_refresh();
}
int ui_lan_config_refresh()
{
    ui_wifi_config_refresh();
}
int ui_wan_config_refresh()
{
    ui_wifi_config_refresh();
}

void uiMenu_init()
{
    uiMenuMap[UI_HOME] = ui_HOME;
    uiMenuMap[UI_VPNSTATUS] = ui_VPNSTATUS;
    uiMenuMap[UI_WANCONFIG] = ui_WANIPCONFIG;
    uiMenuMap[UI_LANCONFIG] = ui_LANIPCONFIG;
    uiMenuMap[UI_WLANCONFIG] = ui_WLANIPCONFIG;
    uiMenuMap[UI_WIFICONFIG] = ui_WIFI;
	uiMenuMap[UI_IOCONFIG] = ui_IO;
	uiMenuMap[UI_PORTSCONFIG] = ui_PORTS;
	uiMenuMap[UI_GSMCONFIG] = ui_MOBILE;
    uiMenuMap[UI_GPSCONFIG] = ui_GPS;

    uiMenu[UI_HOME].left = UI_GSMCONFIG;
    uiMenu[UI_HOME].down = UI_NONE;
    uiMenu[UI_HOME].rigth = UI_VPNSTATUS;
    uiMenu[UI_HOME].refresh = ui_home_refresh;

    uiMenu[UI_VPNSTATUS].left = UI_HOME;
    uiMenu[UI_VPNSTATUS].down = UI_NONE;
    uiMenu[UI_VPNSTATUS].rigth = UI_WANCONFIG;

    uiMenu[UI_WANCONFIG].left = UI_VPNSTATUS;
    uiMenu[UI_WANCONFIG].down = UI_LANCONFIG;
    uiMenu[UI_WANCONFIG].rigth = UI_WIFICONFIG;
    uiMenu[UI_WANCONFIG].refresh = ui_wan_config_refresh;

    uiMenu[UI_LANCONFIG].left = UI_VPNSTATUS;
    uiMenu[UI_LANCONFIG].down = UI_WLANCONFIG;
    uiMenu[UI_LANCONFIG].rigth = UI_WIFICONFIG;
    uiMenu[UI_LANCONFIG].refresh = ui_lan_config_refresh;

    uiMenu[UI_WLANCONFIG].left = UI_VPNSTATUS;
    uiMenu[UI_WLANCONFIG].down = UI_WANCONFIG;
    uiMenu[UI_WLANCONFIG].rigth = UI_WIFICONFIG;
    uiMenu[UI_WLANCONFIG].refresh = ui_wlan_config_refresh;

    uiMenu[UI_WIFICONFIG].left = UI_WANCONFIG;
    uiMenu[UI_WIFICONFIG].down = UI_NONE;
    uiMenu[UI_WIFICONFIG].rigth = UI_IOCONFIG;
    uiMenu[UI_WIFICONFIG].refresh = ui_wifi_config_refresh;

    uiMenu[UI_IOCONFIG].left = UI_WIFICONFIG;
    uiMenu[UI_IOCONFIG].down = UI_NONE;
    uiMenu[UI_IOCONFIG].rigth = UI_PORTSCONFIG;
    uiMenu[UI_IOCONFIG].refresh = ui_io_config_refresh;

    uiMenu[UI_PORTSCONFIG].left = UI_IOCONFIG;
    uiMenu[UI_PORTSCONFIG].down = UI_PORTSCONFIG;
    uiMenu[UI_PORTSCONFIG].rigth = UI_GSMCONFIG;
    uiMenu[UI_PORTSCONFIG].refresh = ui_ports_refresh_ui;
	
    uiMenu[UI_GSMCONFIG].left = UI_PORTSCONFIG;
    uiMenu[UI_GSMCONFIG].down = UI_GPSCONFIG;
    uiMenu[UI_GSMCONFIG].rigth = UI_HOME;
    uiMenu[UI_GSMCONFIG].refresh = ui_gsm_update_ui;

    uiMenu[UI_GPSCONFIG].left = UI_PORTSCONFIG;
    uiMenu[UI_GPSCONFIG].down = UI_GSMCONFIG;
    uiMenu[UI_GPSCONFIG].rigth = UI_HOME;
    uiMenu[UI_GPSCONFIG].refresh = refreshGPS_ui;

    updateUiMenuNoGpsGsm();
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
        prev_menuIndex = menuIndex;
        menuIndex = uiMenu[menuIndex].rigth;
    }
}

void uiMenu_left()
{
    if (uiMenu[menuIndex].left != UI_NONE){
        prev_menuIndex = menuIndex;
        menuIndex = uiMenu[menuIndex].left;
    }
}

void uiMenu_down()
{
    if (uiMenu[menuIndex].down != UI_NONE){
        prev_menuIndex = menuIndex;
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

void goToHomeMenu()
{
    menuIndex = UI_HOME;
    uiMenu_load();
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
    lv_label_set_text_fmt(ui_HOME_uptime_value, "%dd %02dh %02d'",
        tmv.tm_mday-1, tmv.tm_hour, tmv.tm_min);

}

// void printLocalTime()
// {
//     time_t t = time(NULL);
//     struct tm tm = *localtime(&t);
//     lv_label_set_text_fmt(ui_HOME_datetime_value, "%02d:%02d %02d/%02d/%d UTC", tm.tm_hour + (tm.tm_isdst==1 ? 1:0), tm.tm_min, tm.tm_mday,  tm.tm_mon + 1, tm.tm_year + 1900);
// }

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

typedef enum eExtGpio { DI1, DI2, DO1, DO2, NUM_OF_EXT_GPIO } tExtGpio;
const char* gpioLabels[NUM_OF_EXT_GPIO] = {"", "", "sevio:out:1", "sevio:out:2"};

int readGpioStatus(tExtGpio _gpio)
{
    int value = -1;
    char buf[255]="";
    char path[255]="";
    int len=snprintf(path, sizeof(path), "/sys/class/leds/%s/brightness", gpioLabels[_gpio]);
    int fd = open(path, O_RDONLY);
     if (fd < 0)
    {
        LV_LOG_ERROR("gpio:%s path:%s len:%d", gpioLabels[_gpio], path, len);
        return fd;
    }else{
        read(fd, buf, sizeof(buf));
        value = atoi(buf);

        LV_LOG_INFO("gpio:%s value:%d", gpioLabels[_gpio], value);
    }
    close(fd);

    return value;
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
        LV_LOG_INFO("temp: %f(%s)", temp, _temp);
    }
    close(fd);
    return 0;
}

void updateWanConfig(bool _ifup, const char* _ip, unsigned int _mask, const char* _gw, bool dhcp)
{
    if (!_ifup)
    {
        lv_label_set_text(ui_WANIPCONFIG_ip_value, "---");
        lv_label_set_text(ui_WANIPCONFIG_gateway_value, "---");
        return;
    }
    lv_label_set_text_fmt(ui_WANIPCONFIG_ip_value, "%s/%d", _ip, _mask);
    lv_label_set_text_fmt(ui_WANIPCONFIG_gateway_value, "%s", _gw);
    if (dhcp) 
    {
        lv_obj_clear_flag(ui_WANIPCONFIG_dhcp_on, LV_OBJ_FLAG_HIDDEN); 
        lv_obj_add_flag(ui_WANIPCONFIG_dhcp_off, LV_OBJ_FLAG_HIDDEN); 
    }else{
        lv_obj_clear_flag(ui_WANIPCONFIG_dhcp_off, LV_OBJ_FLAG_HIDDEN); 
        lv_obj_add_flag(ui_WANIPCONFIG_dhcp_on, LV_OBJ_FLAG_HIDDEN); 
    }
    
}

void updateLanConfig(bool _ifup, const char* _ip, unsigned int _mask, const char* _gw, bool dhcp)
{
    //lv_label_set_text(ui_WANIPCONFIG_Label10,"IP:  192.168.134.27/24");
    lv_label_set_text_fmt(ui_LANIPCONFIG_ip_value, "%s/%d", _ip, _mask);
}

void updateLanConfigDhcp(bool dhcp)
{
    if (dhcp) 
    {
        lv_obj_clear_flag(ui_LANIPCONFIG_dhcp_on, LV_OBJ_FLAG_HIDDEN); 
        lv_obj_add_flag(ui_LANIPCONFIG_dhcp_off, LV_OBJ_FLAG_HIDDEN); 
    }else{
        lv_obj_clear_flag(ui_LANIPCONFIG_dhcp_off, LV_OBJ_FLAG_HIDDEN); 
        lv_obj_add_flag(ui_LANIPCONFIG_dhcp_on, LV_OBJ_FLAG_HIDDEN); 
    }
}

void updateWlanConfig(bool _ifup, const char* _ip, unsigned int _mask, const char* _gw, bool dhcp)
{
	LV_LOG_INFO("stat:%s ipv4:%s mask:%d gw:%s dhcp:%s", _ifup ? "UP" : "DOWN", _ip, _mask, _gw, dhcp ? "ON" : "OFF");

    if (!_ifup)
    {
        lv_label_set_text(ui_WLANIPCONFIG_ip_value, "---");
        lv_label_set_text(ui_WLANIPCONFIG_gateway_value, "---");
        return;
    }

    lv_label_set_text_fmt(ui_WLANIPCONFIG_ip_value, "%s/%d", _ip, _mask);
    lv_label_set_text_fmt(ui_WLANIPCONFIG_gateway_value, "%s", _gw);
    if (dhcp) 
    {
        lv_obj_clear_flag(ui_WLANIPCONFIG_dhcp_on, LV_OBJ_FLAG_HIDDEN); 
        lv_obj_add_flag(ui_WLANIPCONFIG_dhcp_off, LV_OBJ_FLAG_HIDDEN); 
    }else{
        lv_obj_clear_flag(ui_WLANIPCONFIG_dhcp_off, LV_OBJ_FLAG_HIDDEN); 
        lv_obj_add_flag(ui_WLANIPCONFIG_dhcp_on, LV_OBJ_FLAG_HIDDEN); 
    }
}

void updateWwanConfig(bool _ifup, const char* _ip, unsigned int _mask, const char* _gw, bool dhcp)
{
    LV_LOG_INFO("WWAN ip:%s", _ip);
    if (strlen(_ip) > 0) wwan_up = true;
    else wwan_up = false;
}

#define UPDATING_COLOR lv_palette_lighten(LV_PALETTE_GREY, 4)
#define UPDATING_STRING "---"

void updatePortsStatusUI_def()
{
    LV_LOG_INFO("Default UI");
    lv_obj_set_style_bg_color(ui_PORTS_status_panel, UPDATING_COLOR, LV_PART_MAIN | LV_STATE_DEFAULT );
    lv_label_set_text(ui_PORTS_status_value,UPDATING_STRING);

    lv_obj_set_style_bg_color(ui_PORTS_link_panel, UPDATING_COLOR, LV_PART_MAIN | LV_STATE_DEFAULT );
    lv_label_set_text(ui_PORTS_link_value,UPDATING_STRING);

    lv_obj_set_style_bg_color(ui_PORTS_negotiation_panel, UPDATING_COLOR, LV_PART_MAIN | LV_STATE_DEFAULT );

    lv_label_set_text(ui_PORTS_negotiation_value, UPDATING_STRING);
    lv_label_set_text(ui_PORTS_speed_value, UPDATING_STRING);
}

void updatePortsStatusUI(bool status, bool carrier, bool autoneg, char* speed)
{
    LV_LOG_INFO("status:%d, link:%d, autoneg:%d, speed:%s", status, carrier, autoneg, speed);
    if (status)
    {
        lv_obj_set_style_bg_color(ui_PORTS_status_panel, lv_color_hex(0x2563EB), LV_PART_MAIN | LV_STATE_DEFAULT );
        lv_label_set_text(ui_PORTS_status_value,"UP");
    }else{
         lv_obj_set_style_bg_color(ui_PORTS_status_panel, lv_color_hex(0xFF0707), LV_PART_MAIN | LV_STATE_DEFAULT );
        lv_label_set_text(ui_PORTS_status_value,"DOWN");       
    }
    if (carrier)
    {
        lv_obj_set_style_bg_color(ui_PORTS_link_panel, lv_color_hex(0x2563EB), LV_PART_MAIN | LV_STATE_DEFAULT );
        lv_label_set_text(ui_PORTS_link_value,"UP");
    }else{
         lv_obj_set_style_bg_color(ui_PORTS_link_panel, lv_color_hex(0xFF0707), LV_PART_MAIN | LV_STATE_DEFAULT );
        lv_label_set_text(ui_PORTS_link_value,"DOWN");       
    }
    
    lv_obj_set_style_bg_color(ui_PORTS_negotiation_panel, lv_color_hex(0x2563EB), LV_PART_MAIN | LV_STATE_DEFAULT );
    if (autoneg)
    {
        lv_label_set_text(ui_PORTS_negotiation_value,"ENA");
    }else{
        lv_label_set_text(ui_PORTS_negotiation_value,"DIS");       
    }
    if (speed)
    {
        if (strcmp(speed, "-1F") == 0) lv_label_set_text(ui_PORTS_speed_value,"---");
        else if (strcmp(speed, "10F") == 0) lv_label_set_text(ui_PORTS_speed_value,"10/FD");
        else if (strcmp(speed, "100F") == 0) lv_label_set_text(ui_PORTS_speed_value,"100/FD");
        else if (strcmp(speed, "1000F") == 0) lv_label_set_text(ui_PORTS_speed_value,"1000/FD");
    }
}


void updateVpnStatusUI(tCheckStatus _uplink, tCheckStatus _ipAddr, tCheckStatus _gw, tCheckStatus _internet, tCheckStatus _vpnPorts)
{
    LV_LOG_INFO("_uplink:%d, _ipAddr:%d, _gw:%d, _internet:%d, _vpnPorts:%d", _uplink, _ipAddr, _gw, _internet, _vpnPorts);
    switch (_uplink) 
    {
        case CHECK_NONE:
            lv_obj_add_flag(ui_VPNSTATUS_uplink_fail, LV_OBJ_FLAG_HIDDEN); 
            lv_obj_add_flag(ui_VPNSTATUS_uplink_pass, LV_OBJ_FLAG_HIDDEN);
            break;
        case CHECK_OK:
            lv_obj_clear_flag(ui_VPNSTATUS_uplink_pass, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(ui_VPNSTATUS_uplink_fail, LV_OBJ_FLAG_HIDDEN); 
            break;
        case CHECK_FAIL:
            lv_obj_add_flag(ui_VPNSTATUS_uplink_pass, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(ui_VPNSTATUS_uplink_fail, LV_OBJ_FLAG_HIDDEN); 
            break;
    }
    switch (_ipAddr) 
    {
        case CHECK_NONE:
            lv_obj_add_flag(ui_VPNSTATUS_ip_pass, LV_OBJ_FLAG_HIDDEN); 
            lv_obj_add_flag(ui_VPNSTATUS_ip_fail, LV_OBJ_FLAG_HIDDEN); 
            break;
        case CHECK_OK:
            lv_obj_clear_flag(ui_VPNSTATUS_ip_pass, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(ui_VPNSTATUS_ip_fail, LV_OBJ_FLAG_HIDDEN); 
            break;
        case CHECK_FAIL:
            lv_obj_add_flag(ui_VPNSTATUS_ip_pass, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(ui_VPNSTATUS_ip_fail, LV_OBJ_FLAG_HIDDEN); 
            break;
    }
    switch (_gw) 
    {
        case CHECK_NONE:
            lv_obj_add_flag(ui_VPNSTATUS_gateway_fail, LV_OBJ_FLAG_HIDDEN); 
            lv_obj_add_flag(ui_VPNSTATUS_gateway_pass, LV_OBJ_FLAG_HIDDEN); 
            break;
        case CHECK_OK:
            lv_obj_clear_flag(ui_VPNSTATUS_gateway_pass, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(ui_VPNSTATUS_gateway_fail, LV_OBJ_FLAG_HIDDEN); 
            break;
        case CHECK_FAIL:
            lv_obj_add_flag(ui_VPNSTATUS_gateway_pass, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(ui_VPNSTATUS_gateway_fail, LV_OBJ_FLAG_HIDDEN); 
            break;
    }
    switch (_internet) 
    {
        case CHECK_NONE:
            lv_obj_add_flag(ui_VPNSTATUS_internet_fail, LV_OBJ_FLAG_HIDDEN); 
            lv_obj_add_flag(ui_VPNSTATUS_internet_pass, LV_OBJ_FLAG_HIDDEN); 
            break;
        case CHECK_OK:
            lv_obj_clear_flag(ui_VPNSTATUS_internet_pass, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(ui_VPNSTATUS_internet_fail, LV_OBJ_FLAG_HIDDEN); 
            break;
        case CHECK_FAIL:
            lv_obj_add_flag(ui_VPNSTATUS_internet_pass, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(ui_VPNSTATUS_internet_fail, LV_OBJ_FLAG_HIDDEN); 
            break;
    }
    switch (_vpnPorts) 
    {
        case CHECK_NONE:
            lv_obj_add_flag(ui_VPNSTATUS_vpn_fail, LV_OBJ_FLAG_HIDDEN); 
            lv_obj_add_flag(ui_VPNSTATUS_vpn_pass, LV_OBJ_FLAG_HIDDEN); 
            break;
        case CHECK_OK:
            lv_obj_clear_flag(ui_VPNSTATUS_vpn_pass, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(ui_VPNSTATUS_vpn_fail, LV_OBJ_FLAG_HIDDEN); 
            break;
        case CHECK_FAIL:
            lv_obj_add_flag(ui_VPNSTATUS_vpn_pass, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(ui_VPNSTATUS_vpn_fail, LV_OBJ_FLAG_HIDDEN); 
            break;
    }
}

int uci_config_getWifiMode(char* _mode, bool* _hidden, char* _ssid, bool* _disabled);

void clearWifiSignalImg()
{
    lv_obj_add_flag(ui_WIFI_no_signal, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui_WIFI_signal1, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui_WIFI_signal2, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui_WIFI_signal3, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui_WIFI_signal4, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui_WIFI_signal5, LV_OBJ_FLAG_HIDDEN);
}

void setWifiSignal(bool _ap, int signal)
{
    clearWifiSignalImg();
    if (_ap)
    {
        return;
    }
    if ((signal >= -90 ) && (signal <= -80))
    {
        lv_obj_clear_flag(ui_WIFI_signal1, LV_OBJ_FLAG_HIDDEN);
    }else if ((signal > -80 ) && (signal <= -70))
    {
        lv_obj_clear_flag(ui_WIFI_signal2, LV_OBJ_FLAG_HIDDEN);
    }else if ((signal > -70 ) && (signal <= -67))
    {
        lv_obj_clear_flag(ui_WIFI_signal3, LV_OBJ_FLAG_HIDDEN);
    }else if ((signal > -67 ) && (signal <= -30))
    {
        lv_obj_clear_flag(ui_WIFI_signal4, LV_OBJ_FLAG_HIDDEN);
    }
}

void updateWiFiConfig()
{
    char _wifiMode[WIFI_MODE_MAX_LEN];
    bool _hidden;
    bool _disabled;
    char _ssid[SSID_MAX_LEN];
    int signal = 0;

    if (uci_config_getWifiMode(_wifiMode, &_hidden, _ssid, &_disabled))
    {
        if (_disabled)
        {
            lv_label_set_text(ui_WIFI_mode_value,"---");
            lv_label_set_text(ui_WIFI_ssid__value,"---");
            lv_label_set_text(ui_WIFI_status_value,"Disabled");
            lv_obj_set_style_bg_color(ui_WIFI_status_panel, lv_color_hex(GREY_COLOR), LV_PART_MAIN | LV_STATE_DEFAULT );
            clearWifiSignalImg();
        }else {
            lv_label_set_text(ui_WIFI_status_value,"Registered");
            lv_obj_set_style_bg_color(ui_WIFI_status_panel, lv_color_hex(BLUE_COLOR), LV_PART_MAIN | LV_STATE_DEFAULT );
            if (strcmp(_wifiMode, "ap") == 0) 
            {
                lv_label_set_text(ui_WIFI_mode_value,"ACCESS POINT");
                setWifiSignal(true, 0);
            }
            else 
            {
                lv_label_set_text(ui_WIFI_mode_value,"STATION");
                t_ubus_iwinfo_getSignal_param param = { setWifiSignal, _ssid };
                updateWiFiSignal(&param);
            }
            if (_hidden) lv_label_set_text(ui_WIFI_ssid__value,"********");
            else lv_label_set_text(ui_WIFI_ssid__value, _ssid);
        }

    }
}

void updateIOStatus()
{
    if (readGpioStatus(DO1)) {
        lv_obj_set_style_bg_color(ui_IO_do1_panel, lv_color_hex(BLUE_COLOR), LV_PART_MAIN | LV_STATE_DEFAULT );
    } else {
        lv_obj_set_style_bg_color(ui_IO_do1_panel, lv_color_hex(GREY_COLOR), LV_PART_MAIN | LV_STATE_DEFAULT );
    }
    if (readGpioStatus(DO2)) {
        lv_obj_set_style_bg_color(ui_IO_do2_panel, lv_color_hex(BLUE_COLOR), LV_PART_MAIN | LV_STATE_DEFAULT );
    } else {
        lv_obj_set_style_bg_color(ui_IO_do2_panel, lv_color_hex(GREY_COLOR), LV_PART_MAIN | LV_STATE_DEFAULT );
    }
    if (DI1_status) {
        lv_obj_set_style_bg_color(ui_IO_di1_panel, lv_color_hex(BLUE_COLOR), LV_PART_MAIN | LV_STATE_DEFAULT );
    } else {
        lv_obj_set_style_bg_color(ui_IO_di1_panel, lv_color_hex(GREY_COLOR), LV_PART_MAIN | LV_STATE_DEFAULT );
    }
    if (DI2_status) {
        lv_obj_set_style_bg_color(ui_IO_di2_panel, lv_color_hex(BLUE_COLOR), LV_PART_MAIN | LV_STATE_DEFAULT );
    } else {
        lv_obj_set_style_bg_color(ui_IO_di2_panel, lv_color_hex(GREY_COLOR), LV_PART_MAIN | LV_STATE_DEFAULT );
    }
}

static int screenSaverTimer = 0;
const int TIMER_EXPIRED_VALUE = 5;
void resetScreenSaverTimer()
{
    screenSaverTimer = 0;
}

void incScreenSaverTimer()
{
    screenSaverTimer++;
}

bool isScreenSaverrTimerExp()
{
    return (screenSaverTimer == TIMER_EXPIRED_VALUE);
}

static int count = 0;

static void timer_sec_cb(lv_timer_t * timer)
{
    if ((++count > PERIODIC_TIMER_UPDATE)||(_ui_updater_init))
    {
        //printf("Periodic update menuIndex:%d init:%d\r\n", menuIndex, _ui_updater_init);
        if ((menuIndex == UI_WANCONFIG)||(_ui_updater_init))
        {
            updateInterfaceStatusCb("wan", updateWanConfig);
        }

        if ((menuIndex == UI_LANCONFIG)||(_ui_updater_init))
        {
            updateInterfaceStatusCb("lan", updateLanConfig);
            updateLanConfigDhcp(uci_config_getLanDhcpServer() == 1);
        }

        if ((menuIndex == UI_WIFICONFIG )||(_ui_updater_init))
        {
            updateWiFiConfig();
        }

        if ((menuIndex == UI_WLANCONFIG)||(_ui_updater_init))
        {
            updateInterfaceStatusCb("wlan", updateWlanConfig);
        }

        if ((menuIndex == UI_GSMCONFIG)||(_ui_updater_init))
        {
            updateInterfaceStatusCb("wwan", updateWwanConfig);
             if (_ui_updater_init) ui_gsm_init();
            ui_gsm_update();
        }

        if ((menuIndex == UI_VPNSTATUS)||(_ui_updater_init))
        {
            updateVpnStatus(updateVpnStatusUI);
        }

        if ((menuIndex == UI_PORTSCONFIG)||(_ui_updater_init))
        {
            if (_ui_updater_init) ports_index = 0;
            updatePortsStatus(PORTS_NAME[ports_index], updatePortsStatusUI);
        }

        if ((menuIndex == UI_IOCONFIG)||(_ui_updater_init))
        {
            updateIOStatus();
        }
        count = 0;
    }

}

static void timer_min_cb(lv_timer_t * timer)
{
    if (isScreenSaverrTimerExp())
    {
        // go to home Menu
        goToHomeMenu();
        LV_LOG_INFO("Timer expired goto Home Menu");
        resetScreenSaverTimer();
    }else{
        incScreenSaverTimer();
    }

    if ((menuIndex == UI_HOME)||(_ui_updater_init))
    {
        char _serviceTag[MAX_SERVICE_TAG_LEN] = "";
        if (uci_config_getServiceTag(_serviceTag))
        {
            lv_label_set_text(ui_HOME_servicetag, _serviceTag);
        }
        //printLocalTime();
        get_uptime();

        // Removed the values related to voltage and current
        //readBoardValues();   
        readTempValues();
        //lv_label_set_text_fmt(ui_boardStatusLabel, "%sV / %sA / %s°C", voltage, current, _temp);
        lv_label_set_text_fmt(ui_HOME_temperature_value, "%s °C", _temp);
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
    if (startUpTimer == NULL)
        printf("Failed to create startup timer\r\n");
}

