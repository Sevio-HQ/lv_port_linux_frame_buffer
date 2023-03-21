#include <stdio.h>
#include <string.h>
#include "lvgl/lvgl.h"
#include "ui2.h"

typedef enum eSigLevel{ NO_SIG_LEVEL, SIG_LEVEL_1, SIG_LEVEL_2, SIG_LEVEL_3, SIG_LEVEL_4, SIG_LEVEL_5}tSigLevel;
#define MAX_STRING_LEN_GSM 20
char _operator[MAX_STRING_LEN_GSM];
char _apn[MAX_STRING_LEN_GSM];
char _ip[MAX_STRING_LEN_GSM];
tSigLevel _level=NO_SIG_LEVEL;
extern bool wwan_up;

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


int getOperator()
{
     FILE *fp;
     const char *command = "comgt -d /dev/ttyUSB3 reg";
     int _reg = 99;

     LV_LOG_INFO("Get operator");
     /* command contains the command string (a character array) */

     /* If you want to read output from command */
     fp = popen(command,"r"); 
     if (fp)
     {
        /* read output from command */
        //Registered on Home network: "vodafone IT",7
        fscanf(fp,"Waiting for Registration\nRegistered on Home network: \"%[^\"]\",%d", _operator, &_reg);   /* or other STDIO input functions */
        LV_LOG_INFO("Registration: %s, %d", _operator, _reg);
     }
     fclose(fp);
     return _reg;
}

int getAPN()
{
     FILE *fp;
     const char *command = "uci show network.wwan | grep apn";
     int _reg = 99;

     LV_LOG_INFO("Get APN");
     /* command contains the command string (a character array) */

     /* If you want to read output from command */
     fp = popen(command,"r"); 
     if (fp)
     {
        /* read output from command */
        //network.wwan.apn='mobile.vodafone.it'
        fscanf(fp,"network.wwan.apn=\'%[^\']\'", _apn);   /* or other STDIO input functions */
        LV_LOG_INFO("APN: %s", _apn);
     }
     fclose(fp);
     return _reg;
}

void showLevel(tSigLevel _lvl)
{
    switch (_lvl)
    {
        case SIG_LEVEL_1: lv_obj_clear_flag(ui_MOBILE_Signal1, LV_OBJ_FLAG_HIDDEN); break;
        case SIG_LEVEL_2: lv_obj_clear_flag(ui_MOBILE_Signal2, LV_OBJ_FLAG_HIDDEN); break;
        case SIG_LEVEL_3: lv_obj_clear_flag(ui_MOBILE_Signal3, LV_OBJ_FLAG_HIDDEN); break;
        case SIG_LEVEL_4: lv_obj_clear_flag(ui_MOBILE_Signal4, LV_OBJ_FLAG_HIDDEN); break;
        case SIG_LEVEL_5: lv_obj_clear_flag(ui_MOBILE_Signal5, LV_OBJ_FLAG_HIDDEN); break;
    }
}

void hideLevel(tSigLevel _lvl)
{
    switch (_lvl)
    {
        case SIG_LEVEL_1: lv_obj_add_flag(ui_MOBILE_Signal1, LV_OBJ_FLAG_HIDDEN); break;
        case SIG_LEVEL_2: lv_obj_add_flag(ui_MOBILE_Signal2, LV_OBJ_FLAG_HIDDEN); break;
        case SIG_LEVEL_3: lv_obj_add_flag(ui_MOBILE_Signal3, LV_OBJ_FLAG_HIDDEN); break;
        case SIG_LEVEL_4: lv_obj_add_flag(ui_MOBILE_Signal4, LV_OBJ_FLAG_HIDDEN); break;
        case SIG_LEVEL_5: lv_obj_add_flag(ui_MOBILE_Signal5, LV_OBJ_FLAG_HIDDEN); break;
        case NO_SIG_LEVEL: lv_obj_add_flag(ui_img_nosignal_png, LV_OBJ_FLAG_HIDDEN); break;
    }
}

void ui_gsm_update() {
    tSigLevel level=mapSigq2SigLevel(getSignalQuality());
    LV_LOG_INFO("sig level: %d",level);
    hideLevel(_level);
    showLevel(level);
    _level = level;

    getOperator();
    getAPN();
    lv_label_set_text(ui_MOBILE_operator_Value,_operator);
    lv_label_set_text(ui_MOBILE_APN__Value,_apn);
    if (wwan_up) 
    {
        lv_label_set_text(ui_MobileStatus_Label4,"REGISTERED");
        lv_obj_set_style_bg_color(ui_MobileStatus_Panel, lv_color_hex(0x11F308), LV_PART_MAIN | LV_STATE_DEFAULT );
        lv_obj_set_style_border_color(ui_MobileStatus_Panel, lv_color_hex(0x11F308), LV_PART_MAIN | LV_STATE_DEFAULT );
    }else{
        lv_label_set_text(ui_MobileStatus_Label4,"NOT REGIST.");
        lv_obj_set_style_bg_color(ui_MobileStatus_Panel, lv_color_hex(0xf3e32a), LV_PART_MAIN | LV_STATE_DEFAULT );
        lv_obj_set_style_border_color(ui_MobileStatus_Panel, lv_color_hex(0xf3e32a), LV_PART_MAIN | LV_STATE_DEFAULT );
    }
}

void ui_gsm_init()
{
    lv_obj_add_flag(ui_MOBILE_Signal1, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui_MOBILE_Signal2, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui_MOBILE_Signal3, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui_MOBILE_Signal4, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui_MOBILE_Signal5, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui_img_nosignal_png, LV_OBJ_FLAG_HIDDEN);
}