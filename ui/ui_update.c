#include "ui.h"
#include "time.h"

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
