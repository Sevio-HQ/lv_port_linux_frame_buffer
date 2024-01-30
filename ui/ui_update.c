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

void updateUiMenuNoGpsGsm(void)
{
    uiMenu[UI_PORTSCONFIG].rigth = UI_HOME;
    uiMenu[UI_HOME].left = UI_PORTSCONFIG;
}

static int ports_index = 0;
const char* PORTS_LABEL[] = {"WAN", "LAN1", "LAN2", "LAN3", "LAN4", "LAN5"};

int ui_ports_refresh_ui()
{
    if ((prev_menuIndex != UI_PORTSCONFIG) && (menuIndex == UI_PORTSCONFIG))
    {
        // enter in the Prots config menu. Reset to first port
        ports_index = 0;
    }else if (((prev_menuIndex == UI_PORTSCONFIG) && (menuIndex == UI_PORTSCONFIG)))
    {
        if (ports_index < MAX_NUM_PORTS)
            ports_index++;
        else    
            ports_index = 0;
    }
    lv_label_set_text(ui_PORTS_page_label, PORTS_LABEL[ports_index]);
    // update ports status and data
    // TODO

    return 0;
}

int uci_config_isWifiDisabled(bool* _wifiDis);

int ui_wifi_config_refresh()
{
    bool _wifiDis = false;

    uci_config_isWifiDisabled(&_wifiDis);
    if (!_wifiDis)
    {
        uiMenu[UI_WANCONFIG].rigth = UI_WIFICONFIG;
        uiMenu[UI_LANCONFIG].rigth = UI_WIFICONFIG;
        uiMenu[UI_WLANCONFIG].rigth = UI_WIFICONFIG;
        uiMenu[UI_IOCONFIG].left = UI_WIFICONFIG;
    }else{
        uiMenu[UI_WANCONFIG].rigth = UI_IOCONFIG;
        uiMenu[UI_LANCONFIG].rigth = UI_IOCONFIG;
        uiMenu[UI_WLANCONFIG].rigth = UI_IOCONFIG;
        uiMenu[UI_IOCONFIG].left = UI_WANCONFIG;
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

    if (!gpsDataInit())  updateUiMenuNoGpsGsm();
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

void printLocalTime()
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    lv_label_set_text_fmt(ui_HOME_datetime_value, "%02d:%02d %02d/%02d/%d UTC", tm.tm_hour + (tm.tm_isdst==1 ? 1:0), tm.tm_min, tm.tm_mday,  tm.tm_mon + 1, tm.tm_year + 1900);
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
        LV_LOG_INFO("temp: %f(%s)", temp, _temp);
    }
    close(fd);
    return 0;
}

void updateWanConfig(bool _ifup, const char* _ip, unsigned int _mask, const char* _gw, bool dhcp)
{
    //lv_label_set_text(ui_WANIPCONFIG_Label2,"IP:  192.168.134.27/24");
    //lv_label_set_text(ui_WANIPCONFIG_Label3,"GW:  192.168.1.254");
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
    if (dhcp) 
    {
        lv_obj_clear_flag(ui_WANIPCONFIG_dhcp_on, LV_OBJ_FLAG_HIDDEN); 
        lv_obj_add_flag(ui_WANIPCONFIG_dhcp_off, LV_OBJ_FLAG_HIDDEN); 
    }else{
        lv_obj_clear_flag(ui_WANIPCONFIG_dhcp_off, LV_OBJ_FLAG_HIDDEN); 
        lv_obj_add_flag(ui_WANIPCONFIG_dhcp_on, LV_OBJ_FLAG_HIDDEN); 
    }
}

void updateWlanConfig(bool _ifup, const char* _ip, unsigned int _mask, const char* _gw, bool dhcp)
{
    //lv_label_set_text(ui_WANIPCONFIG_Label6,"IP:  192.168.134.27/24");
    //lv_label_set_text(ui_WANIPCONFIG_Label7,"GW:  192.168.1.254");
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

void updateVpnStatusUI(bool _uplink, bool _ipAddr, bool _gw, bool _internet, bool _vpnPorts)
{
    LV_LOG_INFO("_uplink:%d, _ipAddr:%d, _gw:%d, _internet:%d, _vpnPorts:%d", _uplink, _ipAddr, _gw, _internet, _vpnPorts);
    if (_uplink) 
    {
        lv_obj_clear_flag(ui_VPNSTATUS_uplink_pass, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(ui_VPNSTATUS_uplink_fail, LV_OBJ_FLAG_HIDDEN); 
    }else{
        lv_obj_add_flag(ui_VPNSTATUS_uplink_pass, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(ui_VPNSTATUS_uplink_fail, LV_OBJ_FLAG_HIDDEN); 
    }
    if (_ipAddr) 
    {
        lv_obj_clear_flag(ui_VPNSTATUS_ip_pass, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(ui_VPNSTATUS_ip_fail, LV_OBJ_FLAG_HIDDEN); 
    }else{
        lv_obj_add_flag(ui_VPNSTATUS_ip_pass, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(ui_VPNSTATUS_ip_fail, LV_OBJ_FLAG_HIDDEN); 
    }
    if (_gw) 
    {
        lv_obj_clear_flag(ui_VPNSTATUS_gateway_pass, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(ui_VPNSTATUS_gateway_fail, LV_OBJ_FLAG_HIDDEN); 
    }else{
        lv_obj_add_flag(ui_VPNSTATUS_gateway_pass, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(ui_VPNSTATUS_gateway_fail, LV_OBJ_FLAG_HIDDEN); 
    }
    if (_internet) 
    {
        lv_obj_clear_flag(ui_VPNSTATUS_internet_pass, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(ui_VPNSTATUS_internet_fail, LV_OBJ_FLAG_HIDDEN); 
    }else{
        lv_obj_add_flag(ui_VPNSTATUS_internet_pass, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(ui_VPNSTATUS_internet_fail, LV_OBJ_FLAG_HIDDEN); 
    }
    if (_vpnPorts) 
    {
        lv_obj_clear_flag(ui_VPNSTATUS_vpn_pass, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(ui_VPNSTATUS_vpn_fail, LV_OBJ_FLAG_HIDDEN); 
    }else{
        lv_obj_add_flag(ui_VPNSTATUS_vpn_pass, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(ui_VPNSTATUS_vpn_fail, LV_OBJ_FLAG_HIDDEN); 
    }
}

int uci_config_getWifiMode(char* _mode, bool* _hidden, char* _ssid);

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
    char _ssid[SSID_MAX_LEN];
    int signal = 0;

    if (uci_config_getWifiMode(_wifiMode, &_hidden, _ssid))
    {
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
        }

        if ((menuIndex == UI_VPNSTATUS)||(_ui_updater_init))
        {
            updateVpnStatus(updateVpnStatusUI);
        }
        count = 0;
    }

}

int uci_config_getServiceTag(char* _serviceTag);

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
        printLocalTime();
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
	printf("%s:%d\r\n", __FUNCTION__, __LINE__);

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

