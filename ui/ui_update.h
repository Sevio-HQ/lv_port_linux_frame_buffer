#ifndef UI_UPDATE_H
#define UI_UPDATE_H

#define MAX_IP_LEN 			16
#define MAX_IFNAME_LEN 	    256
#define GREY_COLOR 0x525552
#define BLUE_COLOR 0x2563EB

typedef enum ifDefined {WAN, WLAN, WWAN, MAX_IF_DEFINED} tIfDefined;
typedef enum {CHECK_FAIL, CHECK_OK, CHECK_NONE} tCheckStatus;

typedef struct ifStat{
    bool up;
    char name[MAX_IFNAME_LEN];
    char ip[MAX_IP_LEN];
    char gw[MAX_IP_LEN];
    unsigned long mask;
    bool reachable;
}tIfStat;

extern int DI1_status, DI2_status;

int updateIfStats(char* name, bool up, char* gw, char* ip, unsigned long mask);

int getIfStatEntry(const char* name, bool* up, char** gw, char** ip, unsigned long* mask);

void ui_updater_init(void);

void uiMenu_init(void);

lv_obj_t * uiMenu_getCurrent();

void uiMenu_right(void);

void uiMenu_left(void);

void uiMenu_down(void);

void uiMenu_load(void);

void resetScreenSaverTimer(void);

void updateUiMenuNoGpsGsm(void);

#endif