#include <stdio.h>
#include <string.h>
#include "lvgl/lvgl.h"
#include "ui2.h"

typedef enum eSigLevel{ NO_SIG_LEVEL, SIG_LEVEL_1, SIG_LEVEL_2, SIG_LEVEL_3, SIG_LEVEL_4, SIG_LEVEL_5}tSigLevel;

tSigLevel mapSigq2SigLevel(int sigQ)
{
    if (sigQ <=6) return SIG_LEVEL_1;    // -109 - -101
    if (sigQ <=9) return SIG_LEVEL_2;    // -99  - -95
    if (sigQ <=14) return SIG_LEVEL_3;   // -93 - -85
    if (sigQ <=19) return SIG_LEVEL_4;
    if (sigQ <=30) return SIG_LEVEL_5;
    return NO_SIG_LEVEL;
}

int getSignalQuality()
{
     FILE *fp;
     const char *command = "comgt -d /dev/ttyUSB3 sig";
     int _sigQ=99, _reg = 99;
    LV_LOG_INFO("Get signal quality");
     /* command contains the command string (a character array) */

     /* If you want to read output from command */
     fp = popen(command,"r"); 
     if (fp)
     {
          /* read output from command */
           fscanf(fp,"Signal Quality: %d,%d", &_sigQ, &_reg);   /* or other STDIO input functions */
            LV_LOG_INFO("sig quality: %d",_sigQ);
     }
     fclose(fp);
     return _sigQ;
}

void ui_gsm_update() {
    tSigLevel level=mapSigq2SigLevel(getSignalQuality());
    LV_LOG_INFO("sig level: %d",level);
    switch (level)
    {
        case SIG_LEVEL_1: lv_obj_clear_flag(ui_MOBILE_Signal1, LV_OBJ_FLAG_HIDDEN); break;
        case SIG_LEVEL_2: lv_obj_clear_flag(ui_MOBILE_Signal2, LV_OBJ_FLAG_HIDDEN); break;
        case SIG_LEVEL_3: lv_obj_clear_flag(ui_MOBILE_Signal3, LV_OBJ_FLAG_HIDDEN); break;
        case SIG_LEVEL_4: lv_obj_clear_flag(ui_MOBILE_Signal4, LV_OBJ_FLAG_HIDDEN); break;
        case SIG_LEVEL_5: lv_obj_clear_flag(ui_MOBILE_Signal5, LV_OBJ_FLAG_HIDDEN); break;
    }
}

void ui_gsm_init()
{
    lv_obj_add_flag(ui_MOBILE_Signal1, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui_MOBILE_Signal2, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui_MOBILE_Signal3, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui_MOBILE_Signal4, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui_MOBILE_Signal5, LV_OBJ_FLAG_HIDDEN);
}