// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: sevio_ui_02

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_MOBILE;
lv_obj_t * ui_MOBILE_logo;
lv_obj_t * ui_MOBILE_page_label;
lv_obj_t * ui_MOBILE_bar_up;
lv_obj_t * ui_MOBILE_status_label;
lv_obj_t * ui_MOBILE_status_panel;
lv_obj_t * ui_MOBILE_status_value;
lv_obj_t * ui_MOBILE_operator_label;
lv_obj_t * ui_MOBILE_operator_value;
lv_obj_t * ui_MOBILE_apn_label;
lv_obj_t * ui_MOBILE_apn_value;
lv_obj_t * ui_MOBILE_no_signal;
lv_obj_t * ui_MOBILE_signal1;
lv_obj_t * ui_MOBILE_signal2;
lv_obj_t * ui_MOBILE_signal3;
lv_obj_t * ui_MOBILE_signal4;
lv_obj_t * ui_MOBILE_signal5;
lv_obj_t * ui_MOBILE_bar_down;
lv_obj_t * ui_MOBILE_page_left;
lv_obj_t * ui_MOBILE_page_down;
lv_obj_t * ui_MOBILE_page_right;
lv_obj_t * ui_GPS_Screen;
lv_obj_t * ui_GPS_logo;
lv_obj_t * ui_GPS_page_label;
lv_obj_t * ui_GPS_bar_up;
lv_obj_t * ui_GPS_status_label;
lv_obj_t * ui_GPS_status_panel;
lv_obj_t * ui_GPS_status_value;
lv_obj_t * ui_GPS_latitude_label;
lv_obj_t * ui_GPS_latitude_value;
lv_obj_t * ui_GPS_longitude_label;
lv_obj_t * ui_GPS_longitude_value;
lv_obj_t * ui_GPS_lastfix_label;
lv_obj_t * ui_GPS_lastfix_value;
lv_obj_t * ui_GPS_altitude_label;
lv_obj_t * ui_GPS_altitude_value;
lv_obj_t * ui_GPS_satellites_label;
lv_obj_t * ui_GPS_satellites_value;
lv_obj_t * ui_GPS_bar_down;
lv_obj_t * ui_GPS_page_left;
lv_obj_t * ui_GPS_page_down;
lv_obj_t * ui_GPS_page_right;
lv_obj_t * ui_WIFI;
lv_obj_t * ui_WIFI_logo;
lv_obj_t * ui_WIFI_page_label;
lv_obj_t * ui_WIFI_bar_up;
lv_obj_t * ui_WIFI_status_label;
lv_obj_t * ui_WIFI_Status_panel;
lv_obj_t * ui_WIFI_status_value;
lv_obj_t * ui_WIFI_mode_label;
lv_obj_t * ui_WIFI_mode_value;
lv_obj_t * ui_WIFI_ssid_label;
lv_obj_t * ui_WIFI_ssid__value;
lv_obj_t * ui_WIFI_no_signal;
lv_obj_t * ui_WIFI_signal1;
lv_obj_t * ui_WIFI_signal2;
lv_obj_t * ui_WIFI_signal3;
lv_obj_t * ui_WIFI_signal4;
lv_obj_t * ui_WIFI_signal5;
lv_obj_t * ui_WIFI_bar_down;
lv_obj_t * ui_WIFI_page_left;
lv_obj_t * ui_WIFI_page_right;
lv_obj_t * ui_IO;
lv_obj_t * ui_IO_logo;
lv_obj_t * ui_IO_page_label;
lv_obj_t * ui_IO_bar_up;
lv_obj_t * ui_IO_di1_label;
lv_obj_t * ui_IO_di1_panel;
lv_obj_t * ui_IO_di1_value;
lv_obj_t * ui_IO_di2_label;
lv_obj_t * ui_IO_di2_panel;
lv_obj_t * ui_IO_di2_value;
lv_obj_t * ui_IO_do1_label;
lv_obj_t * ui_IO_do1_panel;
lv_obj_t * ui_IO_do1_value;
lv_obj_t * ui_IO_do2_label;
lv_obj_t * ui_IO_do2_panel;
lv_obj_t * ui_IO_do2_value;
lv_obj_t * ui_IO_bar_down;
lv_obj_t * ui_IO_page_left;
lv_obj_t * ui_IO_page_right;
lv_obj_t * ui_PORTS;
lv_obj_t * ui_PORTS_logo;
lv_obj_t * ui_PORTS_page_label;
lv_obj_t * ui_PORTS_bar_up;
lv_obj_t * ui_PORTS_status_label;
lv_obj_t * ui_PORTS_status_panel;
lv_obj_t * ui_PORTS_status_value;
lv_obj_t * ui_PORTS_link_label;
lv_obj_t * ui_PORTS_link_panel;
lv_obj_t * ui_PORTS_link_value;
lv_obj_t * ui_PORTS_negotiation_label;
lv_obj_t * ui_PORTS_negotiation_Panel;
lv_obj_t * ui_PORTS_negotiation_value;
lv_obj_t * ui_PORTS_speed_label;
lv_obj_t * ui_PORTS_speed_value;
lv_obj_t * ui_PORTS_bar_down;
lv_obj_t * ui_PORTS_page_left;
lv_obj_t * ui_PORTS_page_down;
lv_obj_t * ui_PORTS_page_right;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////
void ui_MOBILE_screen_init(void)
{
    ui_MOBILE = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_MOBILE, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_MOBILE, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MOBILE, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MOBILE_logo = lv_img_create(ui_MOBILE);
    lv_img_set_src(ui_MOBILE_logo, &ui_img_sim_png);
    lv_obj_set_width(ui_MOBILE_logo, LV_SIZE_CONTENT);   /// 21
    lv_obj_set_height(ui_MOBILE_logo, LV_SIZE_CONTENT);    /// 13
    lv_obj_set_x(ui_MOBILE_logo, -49);
    lv_obj_set_y(ui_MOBILE_logo, -53);
    lv_obj_set_align(ui_MOBILE_logo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MOBILE_logo, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_MOBILE_logo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MOBILE_page_label = lv_label_create(ui_MOBILE);
    lv_obj_set_width(ui_MOBILE_page_label, 102);
    lv_obj_set_height(ui_MOBILE_page_label, 18);
    lv_obj_set_x(ui_MOBILE_page_label, 29);
    lv_obj_set_y(ui_MOBILE_page_label, 4);
    lv_label_set_text(ui_MOBILE_page_label, "MOBILE");
    lv_obj_set_style_text_color(ui_MOBILE_page_label, lv_color_hex(0xB4B2B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MOBILE_page_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_MOBILE_page_label, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MOBILE_page_label, &ui_font_arialbd, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MOBILE_bar_up = lv_obj_create(ui_MOBILE);
    lv_obj_set_width(ui_MOBILE_bar_up, 120);
    lv_obj_set_height(ui_MOBILE_bar_up, 1);
    lv_obj_set_x(ui_MOBILE_bar_up, 0);
    lv_obj_set_y(ui_MOBILE_bar_up, -43);
    lv_obj_set_align(ui_MOBILE_bar_up, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_MOBILE_bar_up, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_MOBILE_bar_up, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_MOBILE_bar_up, lv_color_hex(0xB4B2B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MOBILE_bar_up, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_MOBILE_bar_up, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MOBILE_status_label = lv_label_create(ui_MOBILE);
    lv_obj_set_width(ui_MOBILE_status_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MOBILE_status_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MOBILE_status_label, 3);
    lv_obj_set_y(ui_MOBILE_status_label, 28);
    lv_label_set_text(ui_MOBILE_status_label, "Status:");
    lv_obj_set_style_text_color(ui_MOBILE_status_label, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MOBILE_status_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MOBILE_status_label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MOBILE_status_panel = lv_obj_create(ui_MOBILE);
    lv_obj_set_width(ui_MOBILE_status_panel, 77);
    lv_obj_set_height(ui_MOBILE_status_panel, 14);
    lv_obj_set_x(ui_MOBILE_status_panel, 21);
    lv_obj_set_y(ui_MOBILE_status_panel, -30);
    lv_obj_set_align(ui_MOBILE_status_panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_MOBILE_status_panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_MOBILE_status_panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_MOBILE_status_panel, lv_color_hex(0x2563EB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MOBILE_status_panel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_MOBILE_status_panel, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MOBILE_status_value = lv_label_create(ui_MOBILE);
    lv_obj_set_width(ui_MOBILE_status_value, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MOBILE_status_value, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MOBILE_status_value, 21);
    lv_obj_set_y(ui_MOBILE_status_value, -29);
    lv_obj_set_align(ui_MOBILE_status_value, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MOBILE_status_value, "REGISTERED");
    lv_obj_set_style_text_color(ui_MOBILE_status_value, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MOBILE_status_value, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_MOBILE_status_value, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MOBILE_status_value, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MOBILE_operator_label = lv_label_create(ui_MOBILE);
    lv_obj_set_width(ui_MOBILE_operator_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MOBILE_operator_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MOBILE_operator_label, 3);
    lv_obj_set_y(ui_MOBILE_operator_label, 47);
    lv_label_set_text(ui_MOBILE_operator_label, "Operator:");
    lv_obj_set_style_text_color(ui_MOBILE_operator_label, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MOBILE_operator_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MOBILE_operator_label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MOBILE_operator_value = lv_label_create(ui_MOBILE);
    lv_obj_set_width(ui_MOBILE_operator_value, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MOBILE_operator_value, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MOBILE_operator_value, 3);
    lv_obj_set_y(ui_MOBILE_operator_value, 62);
    lv_label_set_text(ui_MOBILE_operator_value, "vodafone IT");
    lv_obj_set_style_text_color(ui_MOBILE_operator_value, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MOBILE_operator_value, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MOBILE_operator_value, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MOBILE_apn_label = lv_label_create(ui_MOBILE);
    lv_obj_set_width(ui_MOBILE_apn_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MOBILE_apn_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MOBILE_apn_label, 3);
    lv_obj_set_y(ui_MOBILE_apn_label, 79);
    lv_label_set_text(ui_MOBILE_apn_label, "APN:");
    lv_obj_set_style_text_color(ui_MOBILE_apn_label, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MOBILE_apn_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MOBILE_apn_label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MOBILE_apn_value = lv_label_create(ui_MOBILE);
    lv_obj_set_width(ui_MOBILE_apn_value, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MOBILE_apn_value, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MOBILE_apn_value, 3);
    lv_obj_set_y(ui_MOBILE_apn_value, 95);
    lv_label_set_text(ui_MOBILE_apn_value, "web.omnitel.it");
    lv_obj_set_style_text_color(ui_MOBILE_apn_value, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MOBILE_apn_value, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MOBILE_apn_value, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MOBILE_no_signal = lv_img_create(ui_MOBILE);
    lv_img_set_src(ui_MOBILE_no_signal, &ui_img_signal_0_png);
    lv_obj_set_width(ui_MOBILE_no_signal, LV_SIZE_CONTENT);   /// 40
    lv_obj_set_height(ui_MOBILE_no_signal, LV_SIZE_CONTENT);    /// 16
    lv_obj_set_x(ui_MOBILE_no_signal, 39);
    lv_obj_set_y(ui_MOBILE_no_signal, 18);
    lv_obj_set_align(ui_MOBILE_no_signal, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MOBILE_no_signal, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_MOBILE_no_signal, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MOBILE_signal1 = lv_img_create(ui_MOBILE);
    lv_img_set_src(ui_MOBILE_signal1, &ui_img_signal_1_png);
    lv_obj_set_width(ui_MOBILE_signal1, LV_SIZE_CONTENT);   /// 40
    lv_obj_set_height(ui_MOBILE_signal1, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_x(ui_MOBILE_signal1, 39);
    lv_obj_set_y(ui_MOBILE_signal1, 18);
    lv_obj_set_align(ui_MOBILE_signal1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MOBILE_signal1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_MOBILE_signal1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MOBILE_signal2 = lv_img_create(ui_MOBILE);
    lv_img_set_src(ui_MOBILE_signal2, &ui_img_signal_2_png);
    lv_obj_set_width(ui_MOBILE_signal2, LV_SIZE_CONTENT);   /// 40
    lv_obj_set_height(ui_MOBILE_signal2, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_x(ui_MOBILE_signal2, 39);
    lv_obj_set_y(ui_MOBILE_signal2, 18);
    lv_obj_set_align(ui_MOBILE_signal2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MOBILE_signal2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_MOBILE_signal2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MOBILE_signal3 = lv_img_create(ui_MOBILE);
    lv_img_set_src(ui_MOBILE_signal3, &ui_img_signal_3_png);
    lv_obj_set_width(ui_MOBILE_signal3, LV_SIZE_CONTENT);   /// 40
    lv_obj_set_height(ui_MOBILE_signal3, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_x(ui_MOBILE_signal3, 39);
    lv_obj_set_y(ui_MOBILE_signal3, 18);
    lv_obj_set_align(ui_MOBILE_signal3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MOBILE_signal3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_MOBILE_signal3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MOBILE_signal4 = lv_img_create(ui_MOBILE);
    lv_img_set_src(ui_MOBILE_signal4, &ui_img_signal_4_png);
    lv_obj_set_width(ui_MOBILE_signal4, LV_SIZE_CONTENT);   /// 40
    lv_obj_set_height(ui_MOBILE_signal4, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_x(ui_MOBILE_signal4, 39);
    lv_obj_set_y(ui_MOBILE_signal4, 18);
    lv_obj_set_align(ui_MOBILE_signal4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MOBILE_signal4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_MOBILE_signal4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MOBILE_signal5 = lv_img_create(ui_MOBILE);
    lv_img_set_src(ui_MOBILE_signal5, &ui_img_signal_5_png);
    lv_obj_set_width(ui_MOBILE_signal5, LV_SIZE_CONTENT);   /// 40
    lv_obj_set_height(ui_MOBILE_signal5, LV_SIZE_CONTENT);    /// 16
    lv_obj_set_x(ui_MOBILE_signal5, 39);
    lv_obj_set_y(ui_MOBILE_signal5, 18);
    lv_obj_set_align(ui_MOBILE_signal5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MOBILE_signal5, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_MOBILE_signal5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MOBILE_bar_down = lv_obj_create(ui_MOBILE);
    lv_obj_set_width(ui_MOBILE_bar_down, 128);
    lv_obj_set_height(ui_MOBILE_bar_down, 16);
    lv_obj_set_x(ui_MOBILE_bar_down, 0);
    lv_obj_set_y(ui_MOBILE_bar_down, 56);
    lv_obj_set_align(ui_MOBILE_bar_down, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_MOBILE_bar_down, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_MOBILE_bar_down, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_MOBILE_bar_down, lv_color_hex(0x525552), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MOBILE_bar_down, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_MOBILE_bar_down, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MOBILE_page_left = lv_img_create(ui_MOBILE);
    lv_img_set_src(ui_MOBILE_page_left, &ui_img_row_l_png);
    lv_obj_set_width(ui_MOBILE_page_left, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_MOBILE_page_left, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_MOBILE_page_left, 3);
    lv_obj_set_y(ui_MOBILE_page_left, 115);
    lv_obj_add_flag(ui_MOBILE_page_left, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_MOBILE_page_left, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MOBILE_page_down = lv_img_create(ui_MOBILE);
    lv_img_set_src(ui_MOBILE_page_down, &ui_img_row_d_png);
    lv_obj_set_width(ui_MOBILE_page_down, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_MOBILE_page_down, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_MOBILE_page_down, 59);
    lv_obj_set_y(ui_MOBILE_page_down, 115);
    lv_obj_add_flag(ui_MOBILE_page_down, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_MOBILE_page_down, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MOBILE_page_right = lv_img_create(ui_MOBILE);
    lv_img_set_src(ui_MOBILE_page_right, &ui_img_row_r_png);
    lv_obj_set_width(ui_MOBILE_page_right, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_MOBILE_page_right, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_MOBILE_page_right, 113);
    lv_obj_set_y(ui_MOBILE_page_right, 115);
    lv_obj_add_flag(ui_MOBILE_page_right, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_MOBILE_page_right, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}
void ui_GPS_Screen_screen_init(void)
{
    ui_GPS_Screen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_GPS_Screen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_GPS_Screen, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_GPS_Screen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_logo = lv_img_create(ui_GPS_Screen);
    lv_img_set_src(ui_GPS_logo, &ui_img_gnss_png);
    lv_obj_set_width(ui_GPS_logo, LV_SIZE_CONTENT);   /// 19
    lv_obj_set_height(ui_GPS_logo, LV_SIZE_CONTENT);    /// 16
    lv_obj_set_x(ui_GPS_logo, -48);
    lv_obj_set_y(ui_GPS_logo, -53);
    lv_obj_set_align(ui_GPS_logo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_GPS_logo, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_GPS_logo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_GPS_page_label = lv_label_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_page_label, 102);
    lv_obj_set_height(ui_GPS_page_label, 18);
    lv_obj_set_x(ui_GPS_page_label, 29);
    lv_obj_set_y(ui_GPS_page_label, 4);
    lv_label_set_text(ui_GPS_page_label, "GNSS");
    lv_obj_set_style_text_color(ui_GPS_page_label, lv_color_hex(0xB4B2B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GPS_page_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_GPS_page_label, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GPS_page_label, &ui_font_arialbd, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_bar_up = lv_obj_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_bar_up, 120);
    lv_obj_set_height(ui_GPS_bar_up, 1);
    lv_obj_set_x(ui_GPS_bar_up, 0);
    lv_obj_set_y(ui_GPS_bar_up, -43);
    lv_obj_set_align(ui_GPS_bar_up, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_GPS_bar_up, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_GPS_bar_up, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_GPS_bar_up, lv_color_hex(0xB4B2B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_GPS_bar_up, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_GPS_bar_up, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_status_label = lv_label_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_status_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GPS_status_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GPS_status_label, 3);
    lv_obj_set_y(ui_GPS_status_label, 28);
    lv_label_set_text(ui_GPS_status_label, "Status:");
    lv_obj_set_style_text_color(ui_GPS_status_label, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GPS_status_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GPS_status_label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_status_panel = lv_obj_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_status_panel, 77);
    lv_obj_set_height(ui_GPS_status_panel, 14);
    lv_obj_set_x(ui_GPS_status_panel, 23);
    lv_obj_set_y(ui_GPS_status_panel, -30);
    lv_obj_set_align(ui_GPS_status_panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_GPS_status_panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_GPS_status_panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_GPS_status_panel, lv_color_hex(0x2061EE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_GPS_status_panel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_GPS_status_panel, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_status_value = lv_label_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_status_value, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GPS_status_value, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GPS_status_value, 23);
    lv_obj_set_y(ui_GPS_status_value, -29);
    lv_obj_set_align(ui_GPS_status_value, LV_ALIGN_CENTER);
    lv_label_set_text(ui_GPS_status_value, "REGISTERED");
    lv_obj_set_style_text_color(ui_GPS_status_value, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GPS_status_value, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GPS_status_value, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_latitude_label = lv_label_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_latitude_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GPS_latitude_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GPS_latitude_label, 3);
    lv_obj_set_y(ui_GPS_latitude_label, 42);
    lv_label_set_text(ui_GPS_latitude_label, "Latitude:");
    lv_obj_set_style_text_color(ui_GPS_latitude_label, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GPS_latitude_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GPS_latitude_label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_latitude_value = lv_label_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_latitude_value, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GPS_latitude_value, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GPS_latitude_value, -3);
    lv_obj_set_y(ui_GPS_latitude_value, 42);
    lv_obj_set_align(ui_GPS_latitude_value, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_GPS_latitude_value, "47°34.006'N");
    lv_obj_set_style_text_color(ui_GPS_latitude_value, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GPS_latitude_value, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GPS_latitude_value, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_longitude_label = lv_label_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_longitude_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GPS_longitude_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GPS_longitude_label, 3);
    lv_obj_set_y(ui_GPS_longitude_label, 56);
    lv_label_set_text(ui_GPS_longitude_label, "Longitude:");
    lv_obj_set_style_text_color(ui_GPS_longitude_label, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GPS_longitude_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GPS_longitude_label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_longitude_value = lv_label_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_longitude_value, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GPS_longitude_value, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GPS_longitude_value, -3);
    lv_obj_set_y(ui_GPS_longitude_value, 56);
    lv_obj_set_align(ui_GPS_longitude_value, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_GPS_longitude_value, "14°3.453'E");
    lv_obj_set_style_text_color(ui_GPS_longitude_value, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GPS_longitude_value, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GPS_longitude_value, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_lastfix_label = lv_label_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_lastfix_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GPS_lastfix_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GPS_lastfix_label, 3);
    lv_obj_set_y(ui_GPS_lastfix_label, 70);
    lv_label_set_text(ui_GPS_lastfix_label, "Last fix:");
    lv_obj_set_style_text_color(ui_GPS_lastfix_label, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GPS_lastfix_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GPS_lastfix_label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_lastfix_value = lv_label_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_lastfix_value, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GPS_lastfix_value, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GPS_lastfix_value, -3);
    lv_obj_set_y(ui_GPS_lastfix_value, 70);
    lv_obj_set_align(ui_GPS_lastfix_value, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_GPS_lastfix_value, "15:56:23");
    lv_obj_set_style_text_color(ui_GPS_lastfix_value, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GPS_lastfix_value, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GPS_lastfix_value, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_altitude_label = lv_label_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_altitude_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GPS_altitude_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GPS_altitude_label, 3);
    lv_obj_set_y(ui_GPS_altitude_label, 84);
    lv_label_set_text(ui_GPS_altitude_label, "Altitude:");
    lv_obj_set_style_text_color(ui_GPS_altitude_label, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GPS_altitude_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GPS_altitude_label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_altitude_value = lv_label_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_altitude_value, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GPS_altitude_value, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GPS_altitude_value, -3);
    lv_obj_set_y(ui_GPS_altitude_value, 84);
    lv_obj_set_align(ui_GPS_altitude_value, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_GPS_altitude_value, "123m");
    lv_obj_set_style_text_color(ui_GPS_altitude_value, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GPS_altitude_value, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GPS_altitude_value, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_satellites_label = lv_label_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_satellites_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GPS_satellites_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GPS_satellites_label, 3);
    lv_obj_set_y(ui_GPS_satellites_label, 98);
    lv_label_set_text(ui_GPS_satellites_label, "Satellites:");
    lv_obj_set_style_text_color(ui_GPS_satellites_label, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GPS_satellites_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GPS_satellites_label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_satellites_value = lv_label_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_satellites_value, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GPS_satellites_value, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GPS_satellites_value, -3);
    lv_obj_set_y(ui_GPS_satellites_value, 98);
    lv_obj_set_align(ui_GPS_satellites_value, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_GPS_satellites_value, "5/6");
    lv_obj_set_style_text_color(ui_GPS_satellites_value, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GPS_satellites_value, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GPS_satellites_value, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_bar_down = lv_obj_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_bar_down, 128);
    lv_obj_set_height(ui_GPS_bar_down, 16);
    lv_obj_set_x(ui_GPS_bar_down, 0);
    lv_obj_set_y(ui_GPS_bar_down, 56);
    lv_obj_set_align(ui_GPS_bar_down, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_GPS_bar_down, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_GPS_bar_down, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_GPS_bar_down, lv_color_hex(0x525552), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_GPS_bar_down, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_GPS_bar_down, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_page_left = lv_img_create(ui_GPS_Screen);
    lv_img_set_src(ui_GPS_page_left, &ui_img_row_l_png);
    lv_obj_set_width(ui_GPS_page_left, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_GPS_page_left, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_GPS_page_left, 3);
    lv_obj_set_y(ui_GPS_page_left, 115);
    lv_obj_add_flag(ui_GPS_page_left, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_GPS_page_left, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_GPS_page_down = lv_img_create(ui_GPS_Screen);
    lv_img_set_src(ui_GPS_page_down, &ui_img_row_d_png);
    lv_obj_set_width(ui_GPS_page_down, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_GPS_page_down, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_GPS_page_down, 59);
    lv_obj_set_y(ui_GPS_page_down, 115);
    lv_obj_add_flag(ui_GPS_page_down, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_GPS_page_down, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_GPS_page_right = lv_img_create(ui_GPS_Screen);
    lv_img_set_src(ui_GPS_page_right, &ui_img_row_r_png);
    lv_obj_set_width(ui_GPS_page_right, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_GPS_page_right, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_GPS_page_right, 113);
    lv_obj_set_y(ui_GPS_page_right, 115);
    lv_obj_add_flag(ui_GPS_page_right, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_GPS_page_right, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}
void ui_WIFI_screen_init(void)
{
    ui_WIFI = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_WIFI, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_WIFI, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_WIFI, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WIFI_logo = lv_img_create(ui_WIFI);
    lv_img_set_src(ui_WIFI_logo, &ui_img_wifi_png);
    lv_obj_set_width(ui_WIFI_logo, LV_SIZE_CONTENT);   /// 21
    lv_obj_set_height(ui_WIFI_logo, LV_SIZE_CONTENT);    /// 16
    lv_obj_set_x(ui_WIFI_logo, -48);
    lv_obj_set_y(ui_WIFI_logo, -53);
    lv_obj_set_align(ui_WIFI_logo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WIFI_logo, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WIFI_logo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_WIFI_page_label = lv_label_create(ui_WIFI);
    lv_obj_set_width(ui_WIFI_page_label, 102);
    lv_obj_set_height(ui_WIFI_page_label, 18);
    lv_obj_set_x(ui_WIFI_page_label, 29);
    lv_obj_set_y(ui_WIFI_page_label, 4);
    lv_label_set_text(ui_WIFI_page_label, "Wi-Fi");
    lv_obj_set_style_text_color(ui_WIFI_page_label, lv_color_hex(0xB4B2B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WIFI_page_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_WIFI_page_label, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WIFI_page_label, &ui_font_arialbd, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WIFI_bar_up = lv_obj_create(ui_WIFI);
    lv_obj_set_width(ui_WIFI_bar_up, 120);
    lv_obj_set_height(ui_WIFI_bar_up, 1);
    lv_obj_set_x(ui_WIFI_bar_up, 0);
    lv_obj_set_y(ui_WIFI_bar_up, -43);
    lv_obj_set_align(ui_WIFI_bar_up, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_WIFI_bar_up, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_WIFI_bar_up, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_WIFI_bar_up, lv_color_hex(0xB4B2B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_WIFI_bar_up, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_WIFI_bar_up, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WIFI_status_label = lv_label_create(ui_WIFI);
    lv_obj_set_width(ui_WIFI_status_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WIFI_status_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WIFI_status_label, 3);
    lv_obj_set_y(ui_WIFI_status_label, 28);
    lv_label_set_text(ui_WIFI_status_label, "Status:");
    lv_obj_set_style_text_color(ui_WIFI_status_label, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WIFI_status_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WIFI_status_label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WIFI_Status_panel = lv_obj_create(ui_WIFI);
    lv_obj_set_width(ui_WIFI_Status_panel, 77);
    lv_obj_set_height(ui_WIFI_Status_panel, 14);
    lv_obj_set_x(ui_WIFI_Status_panel, 21);
    lv_obj_set_y(ui_WIFI_Status_panel, -30);
    lv_obj_set_align(ui_WIFI_Status_panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_WIFI_Status_panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_WIFI_Status_panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_WIFI_Status_panel, lv_color_hex(0x2563EB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_WIFI_Status_panel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_WIFI_Status_panel, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WIFI_status_value = lv_label_create(ui_WIFI);
    lv_obj_set_width(ui_WIFI_status_value, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WIFI_status_value, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WIFI_status_value, 21);
    lv_obj_set_y(ui_WIFI_status_value, -29);
    lv_obj_set_align(ui_WIFI_status_value, LV_ALIGN_CENTER);
    lv_label_set_text(ui_WIFI_status_value, "REGISTERED");
    lv_obj_set_style_text_color(ui_WIFI_status_value, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WIFI_status_value, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_WIFI_status_value, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WIFI_status_value, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WIFI_mode_label = lv_label_create(ui_WIFI);
    lv_obj_set_width(ui_WIFI_mode_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WIFI_mode_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WIFI_mode_label, 3);
    lv_obj_set_y(ui_WIFI_mode_label, 47);
    lv_label_set_text(ui_WIFI_mode_label, "Mode:");
    lv_obj_set_style_text_color(ui_WIFI_mode_label, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WIFI_mode_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WIFI_mode_label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WIFI_mode_value = lv_label_create(ui_WIFI);
    lv_obj_set_width(ui_WIFI_mode_value, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WIFI_mode_value, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WIFI_mode_value, 3);
    lv_obj_set_y(ui_WIFI_mode_value, 62);
    lv_label_set_text(ui_WIFI_mode_value, "ACCESS POINT");
    lv_obj_set_style_text_color(ui_WIFI_mode_value, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WIFI_mode_value, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WIFI_mode_value, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WIFI_ssid_label = lv_label_create(ui_WIFI);
    lv_obj_set_width(ui_WIFI_ssid_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WIFI_ssid_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WIFI_ssid_label, 3);
    lv_obj_set_y(ui_WIFI_ssid_label, 79);
    lv_label_set_text(ui_WIFI_ssid_label, "SSID:");
    lv_obj_set_style_text_color(ui_WIFI_ssid_label, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WIFI_ssid_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WIFI_ssid_label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WIFI_ssid__value = lv_label_create(ui_WIFI);
    lv_obj_set_width(ui_WIFI_ssid__value, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WIFI_ssid__value, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WIFI_ssid__value, 3);
    lv_obj_set_y(ui_WIFI_ssid__value, 95);
    lv_label_set_text(ui_WIFI_ssid__value, "qwerty123456789012");
    lv_obj_set_style_text_color(ui_WIFI_ssid__value, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WIFI_ssid__value, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WIFI_ssid__value, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WIFI_no_signal = lv_img_create(ui_WIFI);
    lv_img_set_src(ui_WIFI_no_signal, &ui_img_signal_0_png);
    lv_obj_set_width(ui_WIFI_no_signal, LV_SIZE_CONTENT);   /// 40
    lv_obj_set_height(ui_WIFI_no_signal, LV_SIZE_CONTENT);    /// 16
    lv_obj_set_x(ui_WIFI_no_signal, 39);
    lv_obj_set_y(ui_WIFI_no_signal, 18);
    lv_obj_set_align(ui_WIFI_no_signal, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WIFI_no_signal, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WIFI_no_signal, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_WIFI_signal1 = lv_img_create(ui_WIFI);
    lv_img_set_src(ui_WIFI_signal1, &ui_img_signal_1_png);
    lv_obj_set_width(ui_WIFI_signal1, LV_SIZE_CONTENT);   /// 40
    lv_obj_set_height(ui_WIFI_signal1, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_x(ui_WIFI_signal1, 39);
    lv_obj_set_y(ui_WIFI_signal1, 18);
    lv_obj_set_align(ui_WIFI_signal1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WIFI_signal1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WIFI_signal1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_WIFI_signal2 = lv_img_create(ui_WIFI);
    lv_img_set_src(ui_WIFI_signal2, &ui_img_signal_2_png);
    lv_obj_set_width(ui_WIFI_signal2, LV_SIZE_CONTENT);   /// 40
    lv_obj_set_height(ui_WIFI_signal2, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_x(ui_WIFI_signal2, 39);
    lv_obj_set_y(ui_WIFI_signal2, 18);
    lv_obj_set_align(ui_WIFI_signal2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WIFI_signal2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WIFI_signal2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_WIFI_signal3 = lv_img_create(ui_WIFI);
    lv_img_set_src(ui_WIFI_signal3, &ui_img_signal_3_png);
    lv_obj_set_width(ui_WIFI_signal3, LV_SIZE_CONTENT);   /// 40
    lv_obj_set_height(ui_WIFI_signal3, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_x(ui_WIFI_signal3, 39);
    lv_obj_set_y(ui_WIFI_signal3, 18);
    lv_obj_set_align(ui_WIFI_signal3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WIFI_signal3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WIFI_signal3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_WIFI_signal4 = lv_img_create(ui_WIFI);
    lv_img_set_src(ui_WIFI_signal4, &ui_img_signal_4_png);
    lv_obj_set_width(ui_WIFI_signal4, LV_SIZE_CONTENT);   /// 40
    lv_obj_set_height(ui_WIFI_signal4, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_x(ui_WIFI_signal4, 39);
    lv_obj_set_y(ui_WIFI_signal4, 18);
    lv_obj_set_align(ui_WIFI_signal4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WIFI_signal4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WIFI_signal4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_WIFI_signal5 = lv_img_create(ui_WIFI);
    lv_img_set_src(ui_WIFI_signal5, &ui_img_signal_5_png);
    lv_obj_set_width(ui_WIFI_signal5, LV_SIZE_CONTENT);   /// 40
    lv_obj_set_height(ui_WIFI_signal5, LV_SIZE_CONTENT);    /// 16
    lv_obj_set_x(ui_WIFI_signal5, 39);
    lv_obj_set_y(ui_WIFI_signal5, 18);
    lv_obj_set_align(ui_WIFI_signal5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WIFI_signal5, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WIFI_signal5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_WIFI_bar_down = lv_obj_create(ui_WIFI);
    lv_obj_set_width(ui_WIFI_bar_down, 128);
    lv_obj_set_height(ui_WIFI_bar_down, 16);
    lv_obj_set_x(ui_WIFI_bar_down, 0);
    lv_obj_set_y(ui_WIFI_bar_down, 56);
    lv_obj_set_align(ui_WIFI_bar_down, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_WIFI_bar_down, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_WIFI_bar_down, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_WIFI_bar_down, lv_color_hex(0x525552), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_WIFI_bar_down, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_WIFI_bar_down, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WIFI_page_left = lv_img_create(ui_WIFI);
    lv_img_set_src(ui_WIFI_page_left, &ui_img_row_l_png);
    lv_obj_set_width(ui_WIFI_page_left, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_WIFI_page_left, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_WIFI_page_left, 3);
    lv_obj_set_y(ui_WIFI_page_left, 115);
    lv_obj_add_flag(ui_WIFI_page_left, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WIFI_page_left, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_WIFI_page_right = lv_img_create(ui_WIFI);
    lv_img_set_src(ui_WIFI_page_right, &ui_img_row_r_png);
    lv_obj_set_width(ui_WIFI_page_right, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_WIFI_page_right, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_WIFI_page_right, 113);
    lv_obj_set_y(ui_WIFI_page_right, 115);
    lv_obj_add_flag(ui_WIFI_page_right, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WIFI_page_right, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}
void ui_IO_screen_init(void)
{
    ui_IO = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_IO, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_IO, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_IO, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IO_logo = lv_img_create(ui_IO);
    lv_img_set_src(ui_IO_logo, &ui_img_io_png);
    lv_obj_set_width(ui_IO_logo, LV_SIZE_CONTENT);   /// 19
    lv_obj_set_height(ui_IO_logo, LV_SIZE_CONTENT);    /// 16
    lv_obj_set_x(ui_IO_logo, -48);
    lv_obj_set_y(ui_IO_logo, -53);
    lv_obj_set_align(ui_IO_logo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_IO_logo, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IO_logo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_IO_page_label = lv_label_create(ui_IO);
    lv_obj_set_width(ui_IO_page_label, 102);
    lv_obj_set_height(ui_IO_page_label, 18);
    lv_obj_set_x(ui_IO_page_label, 29);
    lv_obj_set_y(ui_IO_page_label, 4);
    lv_label_set_text(ui_IO_page_label, "IO");
    lv_obj_set_style_text_color(ui_IO_page_label, lv_color_hex(0xB4B2B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_IO_page_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_IO_page_label, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_IO_page_label, &ui_font_arialbd, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IO_bar_up = lv_obj_create(ui_IO);
    lv_obj_set_width(ui_IO_bar_up, 120);
    lv_obj_set_height(ui_IO_bar_up, 1);
    lv_obj_set_x(ui_IO_bar_up, 0);
    lv_obj_set_y(ui_IO_bar_up, -43);
    lv_obj_set_align(ui_IO_bar_up, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_IO_bar_up, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_IO_bar_up, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_IO_bar_up, lv_color_hex(0xB4B2B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_IO_bar_up, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_IO_bar_up, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IO_di1_label = lv_label_create(ui_IO);
    lv_obj_set_width(ui_IO_di1_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_IO_di1_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_IO_di1_label, 3);
    lv_obj_set_y(ui_IO_di1_label, 28);
    lv_label_set_text(ui_IO_di1_label, "DI1");
    lv_obj_set_style_text_color(ui_IO_di1_label, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_IO_di1_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_IO_di1_label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IO_di1_panel = lv_obj_create(ui_IO);
    lv_obj_set_width(ui_IO_di1_panel, 98);
    lv_obj_set_height(ui_IO_di1_panel, 14);
    lv_obj_set_x(ui_IO_di1_panel, 12);
    lv_obj_set_y(ui_IO_di1_panel, -30);
    lv_obj_set_align(ui_IO_di1_panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_IO_di1_panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_IO_di1_panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_IO_di1_panel, lv_color_hex(0x2563EB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_IO_di1_panel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_IO_di1_panel, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IO_di1_value = lv_label_create(ui_IO);
    lv_obj_set_width(ui_IO_di1_value, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_IO_di1_value, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_IO_di1_value, 12);
    lv_obj_set_y(ui_IO_di1_value, -29);
    lv_obj_set_align(ui_IO_di1_value, LV_ALIGN_CENTER);
    lv_label_set_text(ui_IO_di1_value, "ENABLE VPN");
    lv_obj_set_style_text_color(ui_IO_di1_value, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_IO_di1_value, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_IO_di1_value, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_IO_di1_value, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IO_di2_label = lv_label_create(ui_IO);
    lv_obj_set_width(ui_IO_di2_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_IO_di2_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_IO_di2_label, 3);
    lv_obj_set_y(ui_IO_di2_label, 50);
    lv_label_set_text(ui_IO_di2_label, "DI2");
    lv_obj_set_style_text_color(ui_IO_di2_label, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_IO_di2_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_IO_di2_label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IO_di2_panel = lv_obj_create(ui_IO);
    lv_obj_set_width(ui_IO_di2_panel, 98);
    lv_obj_set_height(ui_IO_di2_panel, 14);
    lv_obj_set_x(ui_IO_di2_panel, 12);
    lv_obj_set_y(ui_IO_di2_panel, -8);
    lv_obj_set_align(ui_IO_di2_panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_IO_di2_panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_IO_di2_panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_IO_di2_panel, lv_color_hex(0x525552), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_IO_di2_panel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_IO_di2_panel, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IO_di2_value = lv_label_create(ui_IO);
    lv_obj_set_width(ui_IO_di2_value, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_IO_di2_value, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_IO_di2_value, 12);
    lv_obj_set_y(ui_IO_di2_value, -7);
    lv_obj_set_align(ui_IO_di2_value, LV_ALIGN_CENTER);
    lv_label_set_text(ui_IO_di2_value, "ENABLE. ACCESS");
    lv_obj_set_style_text_color(ui_IO_di2_value, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_IO_di2_value, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_IO_di2_value, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_IO_di2_value, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IO_do1_label = lv_label_create(ui_IO);
    lv_obj_set_width(ui_IO_do1_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_IO_do1_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_IO_do1_label, 3);
    lv_obj_set_y(ui_IO_do1_label, 72);
    lv_label_set_text(ui_IO_do1_label, "DO1");
    lv_obj_set_style_text_color(ui_IO_do1_label, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_IO_do1_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_IO_do1_label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IO_do1_panel = lv_obj_create(ui_IO);
    lv_obj_set_width(ui_IO_do1_panel, 98);
    lv_obj_set_height(ui_IO_do1_panel, 14);
    lv_obj_set_x(ui_IO_do1_panel, 12);
    lv_obj_set_y(ui_IO_do1_panel, 14);
    lv_obj_set_align(ui_IO_do1_panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_IO_do1_panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_IO_do1_panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_IO_do1_panel, lv_color_hex(0x2563EB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_IO_do1_panel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_IO_do1_panel, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IO_do1_value = lv_label_create(ui_IO);
    lv_obj_set_width(ui_IO_do1_value, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_IO_do1_value, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_IO_do1_value, 12);
    lv_obj_set_y(ui_IO_do1_value, 15);
    lv_obj_set_align(ui_IO_do1_value, LV_ALIGN_CENTER);
    lv_label_set_text(ui_IO_do1_value, "VPN CONNECTED");
    lv_obj_set_style_text_color(ui_IO_do1_value, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_IO_do1_value, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_IO_do1_value, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_IO_do1_value, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IO_do2_label = lv_label_create(ui_IO);
    lv_obj_set_width(ui_IO_do2_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_IO_do2_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_IO_do2_label, 3);
    lv_obj_set_y(ui_IO_do2_label, 94);
    lv_label_set_text(ui_IO_do2_label, "DO2");
    lv_obj_set_style_text_color(ui_IO_do2_label, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_IO_do2_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_IO_do2_label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IO_do2_panel = lv_obj_create(ui_IO);
    lv_obj_set_width(ui_IO_do2_panel, 98);
    lv_obj_set_height(ui_IO_do2_panel, 14);
    lv_obj_set_x(ui_IO_do2_panel, 12);
    lv_obj_set_y(ui_IO_do2_panel, 36);
    lv_obj_set_align(ui_IO_do2_panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_IO_do2_panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_IO_do2_panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_IO_do2_panel, lv_color_hex(0x525552), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_IO_do2_panel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_IO_do2_panel, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IO_do2_value = lv_label_create(ui_IO);
    lv_obj_set_width(ui_IO_do2_value, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_IO_do2_value, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_IO_do2_value, 12);
    lv_obj_set_y(ui_IO_do2_value, 37);
    lv_obj_set_align(ui_IO_do2_value, LV_ALIGN_CENTER);
    lv_label_set_text(ui_IO_do2_value, "ACCESS IN PROG");
    lv_obj_set_style_text_color(ui_IO_do2_value, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_IO_do2_value, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_IO_do2_value, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_IO_do2_value, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IO_bar_down = lv_obj_create(ui_IO);
    lv_obj_set_width(ui_IO_bar_down, 128);
    lv_obj_set_height(ui_IO_bar_down, 16);
    lv_obj_set_x(ui_IO_bar_down, 0);
    lv_obj_set_y(ui_IO_bar_down, 56);
    lv_obj_set_align(ui_IO_bar_down, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_IO_bar_down, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_IO_bar_down, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_IO_bar_down, lv_color_hex(0x525552), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_IO_bar_down, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_IO_bar_down, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IO_page_left = lv_img_create(ui_IO);
    lv_img_set_src(ui_IO_page_left, &ui_img_row_l_png);
    lv_obj_set_width(ui_IO_page_left, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_IO_page_left, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_IO_page_left, 3);
    lv_obj_set_y(ui_IO_page_left, 115);
    lv_obj_add_flag(ui_IO_page_left, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IO_page_left, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_IO_page_right = lv_img_create(ui_IO);
    lv_img_set_src(ui_IO_page_right, &ui_img_row_r_png);
    lv_obj_set_width(ui_IO_page_right, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_IO_page_right, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_IO_page_right, 113);
    lv_obj_set_y(ui_IO_page_right, 115);
    lv_obj_add_flag(ui_IO_page_right, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IO_page_right, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}
void ui_PORTS_screen_init(void)
{
    ui_PORTS = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_PORTS, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PORTS, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PORTS, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PORTS_logo = lv_img_create(ui_PORTS);
    lv_img_set_src(ui_PORTS_logo, &ui_img_port_png);
    lv_obj_set_width(ui_PORTS_logo, LV_SIZE_CONTENT);   /// 21
    lv_obj_set_height(ui_PORTS_logo, LV_SIZE_CONTENT);    /// 16
    lv_obj_set_x(ui_PORTS_logo, -48);
    lv_obj_set_y(ui_PORTS_logo, -53);
    lv_obj_set_align(ui_PORTS_logo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_PORTS_logo, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_PORTS_logo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_PORTS_page_label = lv_label_create(ui_PORTS);
    lv_obj_set_width(ui_PORTS_page_label, 102);
    lv_obj_set_height(ui_PORTS_page_label, 18);
    lv_obj_set_x(ui_PORTS_page_label, 29);
    lv_obj_set_y(ui_PORTS_page_label, 4);
    lv_label_set_text(ui_PORTS_page_label, "PORT XXX");
    lv_obj_set_style_text_color(ui_PORTS_page_label, lv_color_hex(0xB4B2B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PORTS_page_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_PORTS_page_label, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_PORTS_page_label, &ui_font_arialbd, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PORTS_bar_up = lv_obj_create(ui_PORTS);
    lv_obj_set_width(ui_PORTS_bar_up, 120);
    lv_obj_set_height(ui_PORTS_bar_up, 1);
    lv_obj_set_x(ui_PORTS_bar_up, 0);
    lv_obj_set_y(ui_PORTS_bar_up, -43);
    lv_obj_set_align(ui_PORTS_bar_up, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PORTS_bar_up, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_PORTS_bar_up, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_PORTS_bar_up, lv_color_hex(0xB4B2B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PORTS_bar_up, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_PORTS_bar_up, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PORTS_status_label = lv_label_create(ui_PORTS);
    lv_obj_set_width(ui_PORTS_status_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PORTS_status_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PORTS_status_label, 3);
    lv_obj_set_y(ui_PORTS_status_label, 28);
    lv_label_set_text(ui_PORTS_status_label, "Status:");
    lv_obj_set_style_text_color(ui_PORTS_status_label, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PORTS_status_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_PORTS_status_label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PORTS_status_panel = lv_obj_create(ui_PORTS);
    lv_obj_set_width(ui_PORTS_status_panel, 64);
    lv_obj_set_height(ui_PORTS_status_panel, 14);
    lv_obj_set_x(ui_PORTS_status_panel, 28);
    lv_obj_set_y(ui_PORTS_status_panel, -30);
    lv_obj_set_align(ui_PORTS_status_panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PORTS_status_panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_PORTS_status_panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_PORTS_status_panel, lv_color_hex(0x2563EB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PORTS_status_panel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_PORTS_status_panel, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PORTS_status_value = lv_label_create(ui_PORTS);
    lv_obj_set_width(ui_PORTS_status_value, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PORTS_status_value, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PORTS_status_value, 28);
    lv_obj_set_y(ui_PORTS_status_value, -29);
    lv_obj_set_align(ui_PORTS_status_value, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PORTS_status_value, "OK");
    lv_obj_set_style_text_color(ui_PORTS_status_value, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PORTS_status_value, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_PORTS_status_value, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_PORTS_status_value, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PORTS_link_label = lv_label_create(ui_PORTS);
    lv_obj_set_width(ui_PORTS_link_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PORTS_link_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PORTS_link_label, 3);
    lv_obj_set_y(ui_PORTS_link_label, 50);
    lv_label_set_text(ui_PORTS_link_label, "Link:");
    lv_obj_set_style_text_color(ui_PORTS_link_label, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PORTS_link_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_PORTS_link_label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PORTS_link_panel = lv_obj_create(ui_PORTS);
    lv_obj_set_width(ui_PORTS_link_panel, 64);
    lv_obj_set_height(ui_PORTS_link_panel, 14);
    lv_obj_set_x(ui_PORTS_link_panel, 28);
    lv_obj_set_y(ui_PORTS_link_panel, -8);
    lv_obj_set_align(ui_PORTS_link_panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PORTS_link_panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_PORTS_link_panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_PORTS_link_panel, lv_color_hex(0x2563EB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PORTS_link_panel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_PORTS_link_panel, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PORTS_link_value = lv_label_create(ui_PORTS);
    lv_obj_set_width(ui_PORTS_link_value, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PORTS_link_value, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PORTS_link_value, 28);
    lv_obj_set_y(ui_PORTS_link_value, -7);
    lv_obj_set_align(ui_PORTS_link_value, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PORTS_link_value, "UP");
    lv_obj_set_style_text_color(ui_PORTS_link_value, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PORTS_link_value, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_PORTS_link_value, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_PORTS_link_value, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PORTS_negotiation_label = lv_label_create(ui_PORTS);
    lv_obj_set_width(ui_PORTS_negotiation_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PORTS_negotiation_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PORTS_negotiation_label, 3);
    lv_obj_set_y(ui_PORTS_negotiation_label, 72);
    lv_label_set_text(ui_PORTS_negotiation_label, "AutoNeg:");
    lv_obj_set_style_text_color(ui_PORTS_negotiation_label, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PORTS_negotiation_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_PORTS_negotiation_label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PORTS_negotiation_Panel = lv_obj_create(ui_PORTS);
    lv_obj_set_width(ui_PORTS_negotiation_Panel, 64);
    lv_obj_set_height(ui_PORTS_negotiation_Panel, 14);
    lv_obj_set_x(ui_PORTS_negotiation_Panel, 28);
    lv_obj_set_y(ui_PORTS_negotiation_Panel, 14);
    lv_obj_set_align(ui_PORTS_negotiation_Panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PORTS_negotiation_Panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_PORTS_negotiation_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_PORTS_negotiation_Panel, lv_color_hex(0x2563EB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PORTS_negotiation_Panel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_PORTS_negotiation_Panel, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PORTS_negotiation_value = lv_label_create(ui_PORTS);
    lv_obj_set_width(ui_PORTS_negotiation_value, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PORTS_negotiation_value, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PORTS_negotiation_value, 28);
    lv_obj_set_y(ui_PORTS_negotiation_value, 15);
    lv_obj_set_align(ui_PORTS_negotiation_value, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PORTS_negotiation_value, "DONE");
    lv_obj_set_style_text_color(ui_PORTS_negotiation_value, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PORTS_negotiation_value, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_PORTS_negotiation_value, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_PORTS_negotiation_value, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PORTS_speed_label = lv_label_create(ui_PORTS);
    lv_obj_set_width(ui_PORTS_speed_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PORTS_speed_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PORTS_speed_label, 3);
    lv_obj_set_y(ui_PORTS_speed_label, 94);
    lv_label_set_text(ui_PORTS_speed_label, "Speed:");
    lv_obj_set_style_text_color(ui_PORTS_speed_label, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PORTS_speed_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_PORTS_speed_label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PORTS_speed_value = lv_label_create(ui_PORTS);
    lv_obj_set_width(ui_PORTS_speed_value, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PORTS_speed_value, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PORTS_speed_value, 28);
    lv_obj_set_y(ui_PORTS_speed_value, 37);
    lv_obj_set_align(ui_PORTS_speed_value, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PORTS_speed_value, "1000/FD");
    lv_obj_set_style_text_color(ui_PORTS_speed_value, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PORTS_speed_value, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_PORTS_speed_value, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_PORTS_speed_value, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PORTS_bar_down = lv_obj_create(ui_PORTS);
    lv_obj_set_width(ui_PORTS_bar_down, 128);
    lv_obj_set_height(ui_PORTS_bar_down, 16);
    lv_obj_set_x(ui_PORTS_bar_down, 0);
    lv_obj_set_y(ui_PORTS_bar_down, 56);
    lv_obj_set_align(ui_PORTS_bar_down, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PORTS_bar_down, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_PORTS_bar_down, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_PORTS_bar_down, lv_color_hex(0x525552), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PORTS_bar_down, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_PORTS_bar_down, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PORTS_page_left = lv_img_create(ui_PORTS);
    lv_img_set_src(ui_PORTS_page_left, &ui_img_row_l_png);
    lv_obj_set_width(ui_PORTS_page_left, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_PORTS_page_left, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_PORTS_page_left, 3);
    lv_obj_set_y(ui_PORTS_page_left, 115);
    lv_obj_add_flag(ui_PORTS_page_left, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_PORTS_page_left, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_PORTS_page_down = lv_img_create(ui_PORTS);
    lv_img_set_src(ui_PORTS_page_down, &ui_img_row_d_png);
    lv_obj_set_width(ui_PORTS_page_down, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_PORTS_page_down, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_PORTS_page_down, 59);
    lv_obj_set_y(ui_PORTS_page_down, 115);
    lv_obj_add_flag(ui_PORTS_page_down, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_PORTS_page_down, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_PORTS_page_right = lv_img_create(ui_PORTS);
    lv_img_set_src(ui_PORTS_page_right, &ui_img_row_r_png);
    lv_obj_set_width(ui_PORTS_page_right, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_PORTS_page_right, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_PORTS_page_right, 113);
    lv_obj_set_y(ui_PORTS_page_right, 115);
    lv_obj_add_flag(ui_PORTS_page_right, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_PORTS_page_right, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}

void ui2_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_MOBILE_screen_init();
    ui_GPS_Screen_screen_init();
    ui_WIFI_screen_init();
    ui_IO_screen_init();
    ui_PORTS_screen_init();
    lv_disp_load_scr(ui_MOBILE);
}
