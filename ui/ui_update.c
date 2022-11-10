#include "ui.h"
#include "time.h"

typedef enum eUiMenuIndex {
    UI_NONE, 
    UI_SPLASH, 
    UI_HOME, 
    UI_VPNSTATUS, 
    UI_WANCONFIG, 
    UI_LANCONFIG, 
    UI_WLANCONFIG, 
    MAX_UI_MENU} tUiMenuIndex;


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

void get_uptime()
{
    struct timespec tsv;
    clock_gettime(CLOCK_MONOTONIC, &tsv);
    time_t t = tsv.tv_sec; // just in case types aren't the same
    struct tm tmv;
    localtime_r(&t, &tmv); // populate tmv with local time info
    lv_label_set_text_fmt(ui_uptimeLabel, "%dd %02dh %02d'",
        tmv.tm_wday, tmv.tm_hour, tmv.tm_min, tmv.tm_sec);

}

void printLocalTime()
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    lv_label_set_text_fmt(ui_dateTimeLabel, "%02d:%02d %02d/%02d/%d", tm.tm_hour, tm.tm_min, tm.tm_mday,  tm.tm_mon + 1, tm.tm_year + 1900);
}

static void timer_cb(lv_timer_t * timer)
{
    printLocalTime();
    get_uptime();
    lv_obj_invalidate(timer->user_data);
    LV_LOG_WARN("Timer callback");
}
    
void ui_updater_init()
{
    lv_timer_create(timer_cb, 60000, lv_scr_act());
}

