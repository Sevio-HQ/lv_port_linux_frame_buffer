#include "lvgl/lvgl.h"
#include "lvgl/demos/lv_demos.h"
#include "lv_drivers/display/fbdev.h"
#include "lv_drivers/indev/evdev.h"
#include <unistd.h>
#include <pthread.h>
#include <time.h>
#include <sys/time.h>
#include "ui.h"
#include "ui_update.h"
#if USE_EVDEV != 0 
#include "linux/input.h"
#endif

#define DISP_BUF_SIZE (128 * 1024)

extern int evdev_fd;
extern int evdev_button;
extern int evdev_key_val;

/**
 * Get the current position and state of the evdev
 * @param data store the evdev data here
 */
void kbdev_read(lv_indev_drv_t * drv, lv_indev_data_t * data)
{
    #if USE_EVDEV != 0 
    struct input_event in;

    while(read(evdev_fd, &in, sizeof(struct input_event)) > 0) {
        printf("%s: in.type:%d drv.type:%d code:%d", __FILE__, in.type, drv->type, in.code)
        if(in.type == EV_KEY) {
            if(drv->type == LV_INDEV_TYPE_KEYPAD) {
                switch(in.code) {
                    case BTN_2:
                    case KEY_LEFT:
                        data->key = LV_KEY_LEFT;
                        break;
                    case BTN_0:
                    case KEY_RIGHT:
                        data->key = LV_KEY_RIGHT;
                        break;
                    case BTN_1:
                    case KEY_DOWN:
                        data->key = LV_KEY_DOWN;
                        break;
                    default:
                        data->key = 0;
                        break;
                }
                if (data->key != 0) {
                    /* Only record button state when actual output is produced to prevent widgets from refreshing */
                    data->state = (in.value) ? LV_INDEV_STATE_PR : LV_INDEV_STATE_REL;
                }
                evdev_key_val = data->key;
                evdev_button = data->state;
                return;
            }
        }
    }
    #endif
}

int main(void)
{
    /*LittlevGL init*/
    lv_init();

    /*Linux frame buffer device init*/
    fbdev_init();

    /*A small buffer for LittlevGL to draw the screen's content*/
    static lv_color_t buf[DISP_BUF_SIZE];

    /*Initialize a descriptor for the buffer*/
    static lv_disp_draw_buf_t disp_buf;
    lv_disp_draw_buf_init(&disp_buf, buf, NULL, DISP_BUF_SIZE);

    /*Initialize and register a display driver*/
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    disp_drv.draw_buf   = &disp_buf;
    disp_drv.flush_cb   = fbdev_flush;
    disp_drv.hor_res    = 128;
    disp_drv.ver_res    = 128;
    lv_disp_drv_register(&disp_drv);

    evdev_init();
    static lv_indev_drv_t indev_drv_1;
    lv_indev_drv_init(&indev_drv_1); /*Basic initialization*/
    indev_drv_1.type = LV_INDEV_TYPE_KEYPAD;

    /*This function will be called periodically (by the library) to get the mouse position and state*/
    indev_drv_1.read_cb = kbdev_read;
    lv_indev_t *kbd_indev = lv_indev_drv_register(&indev_drv_1);

    /*Create a Demo*/
    //lv_demo_widgets();
    ui_init ();
    ui_updater_init();

    /*Handle LitlevGL tasks (tickless mode)*/
    while(1) {
        lv_timer_handler();
        usleep(5000);
    }

    return 0;
}

/*Set in lv_conf.h as `LV_TICK_CUSTOM_SYS_TIME_EXPR`*/
uint32_t custom_tick_get(void)
{
    static uint64_t start_ms = 0;
    if(start_ms == 0) {
        struct timeval tv_start;
        gettimeofday(&tv_start, NULL);
        start_ms = (tv_start.tv_sec * 1000000 + tv_start.tv_usec) / 1000;
    }

    struct timeval tv_now;
    gettimeofday(&tv_now, NULL);
    uint64_t now_ms;
    now_ms = (tv_now.tv_sec * 1000000 + tv_now.tv_usec) / 1000;

    uint32_t time_ms = now_ms - start_ms;
    return time_ms;
}
