#include <stdio.h>
#include <string.h>
#include "lvgl/lvgl.h"
#include "ui2.h"
#include "errno.h"
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

typedef enum eSigLevel { NO_SIG_LEVEL, SIG_LEVEL_1, SIG_LEVEL_2, SIG_LEVEL_3, SIG_LEVEL_4, SIG_LEVEL_5 } tSigLevel;

#define MAX_STRING_LEN_GSM 20
#define READ 0
#define WRITE 1

char _operator[MAX_STRING_LEN_GSM] = "--";
char _apn[MAX_STRING_LEN_GSM]      = "--";
char _ip[MAX_STRING_LEN_GSM];
tSigLevel _level = NO_SIG_LEVEL;
extern bool wwan_up;
bool isModemAvail = false;

pid_t popen2(const char * command, int * infp, int * outfp)
{
    int p_stdin[2], p_stdout[2];
    pid_t pid;

    if(pipe(p_stdin) != 0 || pipe(p_stdout) != 0) return -1;

    pid = fork();

    if(pid < 0)
        return pid;
    else if(pid == 0) {
        close(p_stdin[WRITE]);
        dup2(p_stdin[READ], READ);
        close(p_stdout[READ]);
        dup2(p_stdout[WRITE], WRITE);

        execl("/bin/sh", "sh", "-c", command, NULL);
        perror("execl");
        exit(1);
    }

    if(infp == NULL)
        close(p_stdin[WRITE]);
    else
        *infp = p_stdin[WRITE];

    if(outfp == NULL)
        close(p_stdout[READ]);
    else
        *outfp = p_stdout[READ];

    return pid;
}

tSigLevel mapSigq2SigLevel(int sigQ)
{
    if(sigQ <= 6) return SIG_LEVEL_1;  // -109 - -101
    if(sigQ <= 9) return SIG_LEVEL_2;  // -99  - -95
    if(sigQ <= 14) return SIG_LEVEL_3; // -93 - -85
    if(sigQ <= 19) return SIG_LEVEL_4;
    if(sigQ <= 30) return SIG_LEVEL_5;
    return NO_SIG_LEVEL;
}

int getSignalQuality()
{
    int infp, outfp, _mdm;
    FILE * fpout;
    int _sigQ = 99, _reg = 99;
    int result = -1;

    pid_t _pid = popen2("comgt -d /dev/ttyUSB3 sig", &infp, &outfp);
    if(_pid <= 0) {
        LV_LOG_ERROR("Unable to exec command\n");
        return -1;
    }
    if((fpout = fdopen(outfp, "r")) == NULL) {
        LV_LOG_ERROR("Unable to open fd\n");
        return -1;
    } else {
        /* read output from command */
        fscanf(fpout, "Signal Quality: %d,%d", &_sigQ, &_reg); /* or other STDIO input functions */
        LV_LOG_INFO("sig quality: %d", _sigQ);
    }
    LV_LOG_INFO("pid:%d, in:%d, out:%d\n Waiting pid to close...", _pid, infp, outfp);
    if(waitpid(_pid, NULL, 0) < 0) {
        LV_LOG_ERROR("wait error");
        return -1;
    }

    close(infp);
    close(outfp);
    fclose(fpout);

    return _sigQ;
}

int getOperator()
{
    int infp, outfp;
    FILE * fpout;
    int _reg   = 99, _mod, _fmt;
    int result = -1;

    pid_t _pid = popen2("comgt -d /dev/ttyUSB3 -s /etc/gcom/getoprinfo.gcom", &infp, &outfp);
    if(_pid <= 0) {
        LV_LOG_ERROR("Unable to exec command\n");
        return -1;
    }
    if((fpout = fdopen(outfp, "r")) == NULL) {
        LV_LOG_ERROR("Unable to open fd\n");
        return -1;
    } else {
        /* read output from command */
        // AT+COPS?\n+COPS: 0,0,"vodafone IT",7
        fscanf(fpout, "%*[^\n]\n");
        int count = fscanf(fpout, "+COPS: %d,%d,\"%[^\"]\",%d", &_mod, &_fmt, _operator,
                           &_reg); /* or other STDIO input functions */

        LV_LOG_INFO("2 - fscanf count: %d", count);
        LV_LOG_INFO("Registration: %s, %d", _operator, _reg);
    }
    LV_LOG_INFO("pid:%d, in:%d, out:%d\n Waiting pid to close...", _pid, infp, outfp);
    if(waitpid(_pid, NULL, 0) < 0) {
        LV_LOG_ERROR("wait error");
        return -1;
    }

    close(infp);
    close(outfp);
    fclose(fpout);

    return 0;
}

int getAPN()
{
    int infp, outfp;
    FILE * fpout;
    int result = -1;

    pid_t _pid = popen2("uci show network.wwan | grep apn", &infp, &outfp);
    if(_pid <= 0) {
        LV_LOG_ERROR("Unable to exec command\n");
        return -1;
    }
    if((fpout = fdopen(outfp, "r")) == NULL) {
        LV_LOG_ERROR("Unable to open fd\n");
        return -1;
    } else {
        /* read output from command */
        // network.wwan.apn='mobile.vodafone.it'
        fscanf(fpout, "network.wwan.apn=\'%[^\']\'", _apn); /* or other STDIO input functions */
        LV_LOG_INFO("APN: %s", _apn);
    }
    LV_LOG_INFO("pid:%d, in:%d, out:%d\n Waiting pid to close...", _pid, infp, outfp);
    if(waitpid(_pid, NULL, 0) < 0) {
        LV_LOG_ERROR("wait error");
        return -1;
    }

    close(infp);
    close(outfp);
    fclose(fpout);

    return 0;
}

int getModem()
{
    int infp, outfp, _mdm;
    FILE * fpout;
    int result = -1;

    pid_t _pid = popen2("dmesg | grep ttyUSB3 | wc -l", &infp, &outfp);
    if(_pid <= 0) {
        LV_LOG_ERROR("Unable to exec command\n");
        return -1;
    }
    if((fpout = fdopen(outfp, "r")) == NULL) {
        LV_LOG_ERROR("Unable to open fd\n");
        return -1;
    } else {
        fscanf(fpout, "%d", &_mdm); /* or other STDIO input functions */
        if(_mdm == 1)
            isModemAvail = true;
        else
            isModemAvail = false;
        LV_LOG_INFO("Modem: %s", (isModemAvail) ? "OK" : "KO");
    }
    LV_LOG_INFO("pid:%d, in:%d, out:%d\n Waiting pid to close...", _pid, infp, outfp);
    if(waitpid(_pid, NULL, 0) < 0) {
        LV_LOG_ERROR("wait error");
        return -1;
    }

    close(infp);
    close(outfp);
    fclose(fpout);

    return _pid;
}

void showLevel(tSigLevel _lvl)
{
    switch(_lvl) {
        case SIG_LEVEL_1: lv_obj_clear_flag(ui_MOBILE_signal1, LV_OBJ_FLAG_HIDDEN); break;
        case SIG_LEVEL_2: lv_obj_clear_flag(ui_MOBILE_signal2, LV_OBJ_FLAG_HIDDEN); break;
        case SIG_LEVEL_3: lv_obj_clear_flag(ui_MOBILE_signal3, LV_OBJ_FLAG_HIDDEN); break;
        case SIG_LEVEL_4: lv_obj_clear_flag(ui_MOBILE_signal4, LV_OBJ_FLAG_HIDDEN); break;
        case SIG_LEVEL_5: lv_obj_clear_flag(ui_MOBILE_signal5, LV_OBJ_FLAG_HIDDEN); break;
        case NO_SIG_LEVEL: lv_obj_clear_flag(ui_MOBILE_no_signal, LV_OBJ_FLAG_HIDDEN); break;
    }
}

void hideLevel(tSigLevel _lvl)
{
    switch(_lvl) {
        case SIG_LEVEL_1: lv_obj_add_flag(ui_MOBILE_signal1, LV_OBJ_FLAG_HIDDEN); break;
        case SIG_LEVEL_2: lv_obj_add_flag(ui_MOBILE_signal2, LV_OBJ_FLAG_HIDDEN); break;
        case SIG_LEVEL_3: lv_obj_add_flag(ui_MOBILE_signal3, LV_OBJ_FLAG_HIDDEN); break;
        case SIG_LEVEL_4: lv_obj_add_flag(ui_MOBILE_signal4, LV_OBJ_FLAG_HIDDEN); break;
        case SIG_LEVEL_5: lv_obj_add_flag(ui_MOBILE_signal5, LV_OBJ_FLAG_HIDDEN); break;
        case NO_SIG_LEVEL: lv_obj_add_flag(ui_MOBILE_no_signal, LV_OBJ_FLAG_HIDDEN); break;
    }
}

void setSigLevel(tSigLevel newLevel)
{
    LV_LOG_INFO("sig level: %d", newLevel);
    hideLevel(_level);
    showLevel(newLevel);
    _level = newLevel;
}

int ui_gsm_update_ui()
{
    lv_label_set_text(ui_MOBILE_operator_value, _operator);
    lv_label_set_text(ui_MOBILE_apn_value, _apn);
    if(wwan_up) {
        lv_label_set_text(ui_MOBILE_status_value, "Registered");
        lv_obj_set_style_bg_color(ui_MOBILE_status_panel, lv_color_hex(0x11F308), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_border_color(ui_MOBILE_status_panel, lv_color_hex(0x11F308), LV_PART_MAIN | LV_STATE_DEFAULT);
    } else {
        lv_label_set_text(ui_MOBILE_status_value, "Not Regist.");
        lv_obj_set_style_bg_color(ui_MOBILE_status_panel, lv_color_hex(0xf3e32a), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_border_color(ui_MOBILE_status_panel, lv_color_hex(0xf3e32a), LV_PART_MAIN | LV_STATE_DEFAULT);
    }
    return wwan_up;
}

int ui_gsm_update()
{

    tSigLevel level = NO_SIG_LEVEL;
    setSigLevel(level);

    getModem();
    if(isModemAvail) {
        level = mapSigq2SigLevel(getSignalQuality());
        setSigLevel(level);
        getOperator();
        getAPN();
    }
    return ui_gsm_update_ui();
}

void ui_gsm_init()
{
    lv_obj_add_flag(ui_MOBILE_signal1, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui_MOBILE_signal2, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui_MOBILE_signal3, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui_MOBILE_signal4, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui_MOBILE_signal5, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui_MOBILE_no_signal, LV_OBJ_FLAG_HIDDEN);
}