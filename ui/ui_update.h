#ifndef UI_UPDATE_H
#define UI_UPDATE_H

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