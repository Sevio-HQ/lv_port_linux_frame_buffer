// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: sevio_ui_01

#include "ui.h"
#include "ui_helpers.h"
#include "ui_comp.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t *ui_HOME;
lv_obj_t *ui_HOME_Logo;
lv_obj_t *ui_HOME_servicetag;
lv_obj_t *ui_HOME_temperature_value;
lv_obj_t *ui_HOME_uptime_value;
lv_obj_t *ui_HOME_datetime_value;
lv_obj_t *ui_VPNSTATUS;
lv_obj_t *ui_VPNSTATUS_logo;
lv_obj_t *ui_VPNSTATUS_status_image;
lv_obj_t *ui_VPNSTATUS_uplink_label;
lv_obj_t *ui_VPNSTATUS_uplink_fail;
lv_obj_t *ui_VPNSTATUS_uplink_pass;
lv_obj_t *ui_VPNSTATUS_ip_label;
lv_obj_t *ui_VPNSTATUS_ip_fail;
lv_obj_t *ui_VPNSTATUS_ip_pass;
lv_obj_t *ui_VPNSTATUS_gateway_label;
lv_obj_t *ui_VPNSTATUS_gateway_fail;
lv_obj_t *ui_VPNSTATUS_gateway_pass;
lv_obj_t *ui_VPNSTATUS_internet_label;
lv_obj_t *ui_VPNSTATUS_internet_fail;
lv_obj_t *ui_VPNSTATUS_internet_pass;
lv_obj_t *ui_VPNSTATUS_vpn_label;
lv_obj_t *ui_VPNSTATUS_vpn_fail;
lv_obj_t *ui_VPNSTATUS_vpn_pass;
lv_obj_t *ui_VPNSTATUS_bar_down;
lv_obj_t *ui_VPNSTATUS_page_left;
lv_obj_t *ui_VPNSTATUS_page_right;
lv_obj_t *ui_WANIPCONFIG;
lv_obj_t *ui_WANIPCONFIG_logo;
lv_obj_t *ui_WANIPCONFIG_page_label;
lv_obj_t *ui_WANIPCONFIG_bar_up;
lv_obj_t *ui_WANIPCONFIG_dhcp_label;
lv_obj_t *ui_WANIPCONFIG_dhcp_off;
lv_obj_t *ui_WANIPCONFIG_dhcp_on;
lv_obj_t *ui_WANIPCONFIG_ip_label;
lv_obj_t *ui_WANIPCONFIG_ip_value;
lv_obj_t *ui_WANIPCONFIG_gateway_label;
lv_obj_t *ui_WANIPCONFIG_gateway_value;
lv_obj_t *ui_WANIPCONFIG_bar_down;
lv_obj_t *ui_WANIPCONFIG_page_left;
lv_obj_t *ui_WANIPCONFIG_page_down;
lv_obj_t *ui_WANIPCONFIG_page_right;
lv_obj_t *ui_LANIPCONFIG;
lv_obj_t *ui_LANIPCONFIG_logo;
lv_obj_t *ui_LANIPCONFIG_page_label;
lv_obj_t *ui_LANIPCONFIG_bar_up;
lv_obj_t *ui_LANIPCONFIG_dhcp_label;
lv_obj_t *ui_LANIPCONFIG_dhcp_off;
lv_obj_t *ui_LANIPCONFIG_dhcp_on;
lv_obj_t *ui_LANIPCONFIG_ip_label;
lv_obj_t *ui_LANIPCONFIG_ip_value;
lv_obj_t *ui_LANIPCONFIG_bar_down;
lv_obj_t *ui_LANIPCONFIG_page_left;
lv_obj_t *ui_LANIPCONFIG_page_down;
lv_obj_t *ui_LANIPCONFIG_page_right;
lv_obj_t *ui_WLANIPCONFIG;
lv_obj_t *ui_WLANIPCONFIG_logo;
lv_obj_t *ui_WLANIPCONFIG_page_label;
lv_obj_t *ui_WLANIPCONFIG_bar_up;
lv_obj_t *ui_WLANIPCONFIG_dhcp_label;
lv_obj_t *ui_WLANIPCONFIG_dhcp_off;
lv_obj_t *ui_WLANIPCONFIG_dhcp_on;
lv_obj_t *ui_WLANIPCONFIG_ip_label;
lv_obj_t *ui_WLANIPCONFIG_ip_value;
lv_obj_t *ui_WLANIPCONFIG_gateway_label;
lv_obj_t *ui_WLANIPCONFIG_gateway_value;
lv_obj_t *ui_WLANIPCONFIG_bar_down;
lv_obj_t *ui_WLANIPCONFIG_page_left;
lv_obj_t *ui_WLANIPCONFIG_page_down;
lv_obj_t *ui_WLANIPCONFIG_page_right;

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
void ui_HOME_screen_init(void)
{
ui_HOME = lv_obj_create(NULL);
lv_obj_clear_flag( ui_HOME, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_HOME, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_HOME, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_HOME, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_HOME, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_HOME_Logo = lv_img_create(ui_HOME);
lv_img_set_src(ui_HOME_Logo, &ui_img_logo_png);
lv_obj_set_width( ui_HOME_Logo, LV_SIZE_CONTENT);  /// 113
lv_obj_set_height( ui_HOME_Logo, LV_SIZE_CONTENT);   /// 112
lv_obj_set_align( ui_HOME_Logo, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_HOME_Logo, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_HOME_Logo, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_HOME_servicetag = lv_label_create(ui_HOME);
lv_obj_set_width( ui_HOME_servicetag, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_HOME_servicetag, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_HOME_servicetag, 0 );
lv_obj_set_y( ui_HOME_servicetag, 20 );
lv_obj_set_align( ui_HOME_servicetag, LV_ALIGN_TOP_MID );
lv_label_set_text(ui_HOME_servicetag,"MRRVWQB");
lv_obj_set_style_text_color(ui_HOME_servicetag, lv_color_hex(0xD1D0D0), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_HOME_servicetag, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_HOME_servicetag, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_HOME_servicetag, &ui_font_arialbd, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_HOME_temperature_value = lv_label_create(ui_HOME);
lv_obj_set_width( ui_HOME_temperature_value, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_HOME_temperature_value, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_HOME_temperature_value, 2 );
lv_obj_set_y( ui_HOME_temperature_value, 60 );
lv_obj_set_align( ui_HOME_temperature_value, LV_ALIGN_TOP_MID );
lv_label_set_text(ui_HOME_temperature_value,"23.4 °C");
lv_obj_set_style_text_color(ui_HOME_temperature_value, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_HOME_temperature_value, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_HOME_temperature_value, &ui_font_dejavusans, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_HOME_uptime_value = lv_label_create(ui_HOME);
lv_obj_set_width( ui_HOME_uptime_value, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_HOME_uptime_value, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_HOME_uptime_value, 0 );
lv_obj_set_y( ui_HOME_uptime_value, 80 );
lv_obj_set_align( ui_HOME_uptime_value, LV_ALIGN_TOP_MID );
lv_label_set_text(ui_HOME_uptime_value,"5d 7h 56' 32''");
lv_obj_set_style_text_color(ui_HOME_uptime_value, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_HOME_uptime_value, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_HOME_uptime_value, &ui_font_dejavusans, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_HOME_datetime_value = lv_label_create(ui_HOME);
lv_obj_set_width( ui_HOME_datetime_value, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_HOME_datetime_value, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_HOME_datetime_value, 0 );
lv_obj_set_y( ui_HOME_datetime_value, 100 );
lv_obj_set_align( ui_HOME_datetime_value, LV_ALIGN_TOP_MID );
lv_label_set_text(ui_HOME_datetime_value,"18:54 22/01/2019 UTC");
lv_obj_set_style_text_color(ui_HOME_datetime_value, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_HOME_datetime_value, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_HOME_datetime_value, &ui_font_dejavusans, LV_PART_MAIN| LV_STATE_DEFAULT);

}
void ui_VPNSTATUS_screen_init(void)
{
ui_VPNSTATUS = lv_obj_create(NULL);
lv_obj_clear_flag( ui_VPNSTATUS, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_VPNSTATUS, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_VPNSTATUS, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_VPNSTATUS, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_VPNSTATUS, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_VPNSTATUS_logo = lv_img_create(ui_VPNSTATUS);
lv_img_set_src(ui_VPNSTATUS_logo, &ui_img_vpn_png);
lv_obj_set_width( ui_VPNSTATUS_logo, LV_SIZE_CONTENT);  /// 46
lv_obj_set_height( ui_VPNSTATUS_logo, LV_SIZE_CONTENT);   /// 61
lv_obj_set_x( ui_VPNSTATUS_logo, 29 );
lv_obj_set_y( ui_VPNSTATUS_logo, 7 );
lv_obj_set_align( ui_VPNSTATUS_logo, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_VPNSTATUS_logo, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_VPNSTATUS_logo, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_VPNSTATUS_status_image = lv_img_create(ui_VPNSTATUS);
lv_img_set_src(ui_VPNSTATUS_status_image, &ui_img_status_tree_png);
lv_obj_set_width( ui_VPNSTATUS_status_image, LV_SIZE_CONTENT);  /// 15
lv_obj_set_height( ui_VPNSTATUS_status_image, LV_SIZE_CONTENT);   /// 98
lv_obj_set_x( ui_VPNSTATUS_status_image, -49 );
lv_obj_set_y( ui_VPNSTATUS_status_image, -7 );
lv_obj_set_align( ui_VPNSTATUS_status_image, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_VPNSTATUS_status_image, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_VPNSTATUS_status_image, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_VPNSTATUS_uplink_label = lv_label_create(ui_VPNSTATUS);
lv_obj_set_width( ui_VPNSTATUS_uplink_label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_VPNSTATUS_uplink_label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_VPNSTATUS_uplink_label, 30 );
lv_obj_set_y( ui_VPNSTATUS_uplink_label, 9 );
lv_label_set_text(ui_VPNSTATUS_uplink_label,"Physical Uplink");
lv_obj_set_style_text_color(ui_VPNSTATUS_uplink_label, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_VPNSTATUS_uplink_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_VPNSTATUS_uplink_label, &ui_font_dejavusans, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_VPNSTATUS_uplink_fail = lv_img_create(ui_VPNSTATUS);
lv_img_set_src(ui_VPNSTATUS_uplink_fail, &ui_img_status_fail_png);
lv_obj_set_width( ui_VPNSTATUS_uplink_fail, LV_SIZE_CONTENT);  /// 15
lv_obj_set_height( ui_VPNSTATUS_uplink_fail, LV_SIZE_CONTENT);   /// 15
lv_obj_set_x( ui_VPNSTATUS_uplink_fail, -49 );
lv_obj_set_y( ui_VPNSTATUS_uplink_fail, -49 );
lv_obj_set_align( ui_VPNSTATUS_uplink_fail, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_VPNSTATUS_uplink_fail, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_VPNSTATUS_uplink_fail, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_VPNSTATUS_uplink_pass = lv_img_create(ui_VPNSTATUS);
lv_img_set_src(ui_VPNSTATUS_uplink_pass, &ui_img_status_pass_png);
lv_obj_set_width( ui_VPNSTATUS_uplink_pass, LV_SIZE_CONTENT);  /// 15
lv_obj_set_height( ui_VPNSTATUS_uplink_pass, LV_SIZE_CONTENT);   /// 15
lv_obj_set_x( ui_VPNSTATUS_uplink_pass, -49 );
lv_obj_set_y( ui_VPNSTATUS_uplink_pass, -49 );
lv_obj_set_align( ui_VPNSTATUS_uplink_pass, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_VPNSTATUS_uplink_pass, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_VPNSTATUS_uplink_pass, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_VPNSTATUS_ip_label = lv_label_create(ui_VPNSTATUS);
lv_obj_set_width( ui_VPNSTATUS_ip_label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_VPNSTATUS_ip_label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_VPNSTATUS_ip_label, 30 );
lv_obj_set_y( ui_VPNSTATUS_ip_label, 30 );
lv_label_set_text(ui_VPNSTATUS_ip_label,"IP Address");
lv_obj_set_style_text_color(ui_VPNSTATUS_ip_label, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_VPNSTATUS_ip_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_VPNSTATUS_ip_label, &ui_font_dejavusans, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_VPNSTATUS_ip_fail = lv_img_create(ui_VPNSTATUS);
lv_img_set_src(ui_VPNSTATUS_ip_fail, &ui_img_status_fail_png);
lv_obj_set_width( ui_VPNSTATUS_ip_fail, LV_SIZE_CONTENT);  /// 15
lv_obj_set_height( ui_VPNSTATUS_ip_fail, LV_SIZE_CONTENT);   /// 15
lv_obj_set_x( ui_VPNSTATUS_ip_fail, -49 );
lv_obj_set_y( ui_VPNSTATUS_ip_fail, -28 );
lv_obj_set_align( ui_VPNSTATUS_ip_fail, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_VPNSTATUS_ip_fail, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_VPNSTATUS_ip_fail, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_VPNSTATUS_ip_pass = lv_img_create(ui_VPNSTATUS);
lv_img_set_src(ui_VPNSTATUS_ip_pass, &ui_img_status_pass_png);
lv_obj_set_width( ui_VPNSTATUS_ip_pass, LV_SIZE_CONTENT);  /// 15
lv_obj_set_height( ui_VPNSTATUS_ip_pass, LV_SIZE_CONTENT);   /// 15
lv_obj_set_x( ui_VPNSTATUS_ip_pass, -49 );
lv_obj_set_y( ui_VPNSTATUS_ip_pass, -28 );
lv_obj_set_align( ui_VPNSTATUS_ip_pass, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_VPNSTATUS_ip_pass, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_VPNSTATUS_ip_pass, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_VPNSTATUS_gateway_label = lv_label_create(ui_VPNSTATUS);
lv_obj_set_width( ui_VPNSTATUS_gateway_label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_VPNSTATUS_gateway_label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_VPNSTATUS_gateway_label, 30 );
lv_obj_set_y( ui_VPNSTATUS_gateway_label, 51 );
lv_label_set_text(ui_VPNSTATUS_gateway_label,"Gateway");
lv_obj_set_style_text_color(ui_VPNSTATUS_gateway_label, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_VPNSTATUS_gateway_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_VPNSTATUS_gateway_label, &ui_font_dejavusans, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_VPNSTATUS_gateway_fail = lv_img_create(ui_VPNSTATUS);
lv_img_set_src(ui_VPNSTATUS_gateway_fail, &ui_img_status_fail_png);
lv_obj_set_width( ui_VPNSTATUS_gateway_fail, LV_SIZE_CONTENT);  /// 15
lv_obj_set_height( ui_VPNSTATUS_gateway_fail, LV_SIZE_CONTENT);   /// 15
lv_obj_set_x( ui_VPNSTATUS_gateway_fail, -49 );
lv_obj_set_y( ui_VPNSTATUS_gateway_fail, -7 );
lv_obj_set_align( ui_VPNSTATUS_gateway_fail, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_VPNSTATUS_gateway_fail, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_VPNSTATUS_gateway_fail, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_VPNSTATUS_gateway_pass = lv_img_create(ui_VPNSTATUS);
lv_img_set_src(ui_VPNSTATUS_gateway_pass, &ui_img_status_pass_png);
lv_obj_set_width( ui_VPNSTATUS_gateway_pass, LV_SIZE_CONTENT);  /// 15
lv_obj_set_height( ui_VPNSTATUS_gateway_pass, LV_SIZE_CONTENT);   /// 15
lv_obj_set_x( ui_VPNSTATUS_gateway_pass, -49 );
lv_obj_set_y( ui_VPNSTATUS_gateway_pass, -7 );
lv_obj_set_align( ui_VPNSTATUS_gateway_pass, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_VPNSTATUS_gateway_pass, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_VPNSTATUS_gateway_pass, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_VPNSTATUS_internet_label = lv_label_create(ui_VPNSTATUS);
lv_obj_set_width( ui_VPNSTATUS_internet_label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_VPNSTATUS_internet_label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_VPNSTATUS_internet_label, 30 );
lv_obj_set_y( ui_VPNSTATUS_internet_label, 72 );
lv_label_set_text(ui_VPNSTATUS_internet_label,"Internet");
lv_obj_set_style_text_color(ui_VPNSTATUS_internet_label, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_VPNSTATUS_internet_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_VPNSTATUS_internet_label, &ui_font_dejavusans, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_VPNSTATUS_internet_fail = lv_img_create(ui_VPNSTATUS);
lv_img_set_src(ui_VPNSTATUS_internet_fail, &ui_img_status_fail_png);
lv_obj_set_width( ui_VPNSTATUS_internet_fail, LV_SIZE_CONTENT);  /// 15
lv_obj_set_height( ui_VPNSTATUS_internet_fail, LV_SIZE_CONTENT);   /// 15
lv_obj_set_x( ui_VPNSTATUS_internet_fail, -49 );
lv_obj_set_y( ui_VPNSTATUS_internet_fail, 14 );
lv_obj_set_align( ui_VPNSTATUS_internet_fail, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_VPNSTATUS_internet_fail, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_VPNSTATUS_internet_fail, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_VPNSTATUS_internet_pass = lv_img_create(ui_VPNSTATUS);
lv_img_set_src(ui_VPNSTATUS_internet_pass, &ui_img_status_pass_png);
lv_obj_set_width( ui_VPNSTATUS_internet_pass, LV_SIZE_CONTENT);  /// 15
lv_obj_set_height( ui_VPNSTATUS_internet_pass, LV_SIZE_CONTENT);   /// 15
lv_obj_set_x( ui_VPNSTATUS_internet_pass, -49 );
lv_obj_set_y( ui_VPNSTATUS_internet_pass, 14 );
lv_obj_set_align( ui_VPNSTATUS_internet_pass, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_VPNSTATUS_internet_pass, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_VPNSTATUS_internet_pass, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_VPNSTATUS_vpn_label = lv_label_create(ui_VPNSTATUS);
lv_obj_set_width( ui_VPNSTATUS_vpn_label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_VPNSTATUS_vpn_label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_VPNSTATUS_vpn_label, 30 );
lv_obj_set_y( ui_VPNSTATUS_vpn_label, 93 );
lv_label_set_text(ui_VPNSTATUS_vpn_label,"VPN ports");
lv_obj_set_style_text_color(ui_VPNSTATUS_vpn_label, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_VPNSTATUS_vpn_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_VPNSTATUS_vpn_label, &ui_font_dejavusans, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_VPNSTATUS_vpn_fail = lv_img_create(ui_VPNSTATUS);
lv_img_set_src(ui_VPNSTATUS_vpn_fail, &ui_img_status_fail_png);
lv_obj_set_width( ui_VPNSTATUS_vpn_fail, LV_SIZE_CONTENT);  /// 15
lv_obj_set_height( ui_VPNSTATUS_vpn_fail, LV_SIZE_CONTENT);   /// 15
lv_obj_set_x( ui_VPNSTATUS_vpn_fail, -49 );
lv_obj_set_y( ui_VPNSTATUS_vpn_fail, 35 );
lv_obj_set_align( ui_VPNSTATUS_vpn_fail, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_VPNSTATUS_vpn_fail, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_VPNSTATUS_vpn_fail, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_VPNSTATUS_vpn_pass = lv_img_create(ui_VPNSTATUS);
lv_img_set_src(ui_VPNSTATUS_vpn_pass, &ui_img_status_pass_png);
lv_obj_set_width( ui_VPNSTATUS_vpn_pass, LV_SIZE_CONTENT);  /// 15
lv_obj_set_height( ui_VPNSTATUS_vpn_pass, LV_SIZE_CONTENT);   /// 15
lv_obj_set_x( ui_VPNSTATUS_vpn_pass, -49 );
lv_obj_set_y( ui_VPNSTATUS_vpn_pass, 35 );
lv_obj_set_align( ui_VPNSTATUS_vpn_pass, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_VPNSTATUS_vpn_pass, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_VPNSTATUS_vpn_pass, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_VPNSTATUS_bar_down = lv_obj_create(ui_VPNSTATUS);
lv_obj_set_width( ui_VPNSTATUS_bar_down, 128);
lv_obj_set_height( ui_VPNSTATUS_bar_down, 16);
lv_obj_set_x( ui_VPNSTATUS_bar_down, 0 );
lv_obj_set_y( ui_VPNSTATUS_bar_down, 56 );
lv_obj_set_align( ui_VPNSTATUS_bar_down, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_VPNSTATUS_bar_down, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_VPNSTATUS_bar_down, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_VPNSTATUS_bar_down, lv_color_hex(0x525552), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_VPNSTATUS_bar_down, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_VPNSTATUS_bar_down, LV_BORDER_SIDE_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_VPNSTATUS_page_left = lv_img_create(ui_VPNSTATUS);
lv_img_set_src(ui_VPNSTATUS_page_left, &ui_img_row_l_png);
lv_obj_set_width( ui_VPNSTATUS_page_left, LV_SIZE_CONTENT);  /// 11
lv_obj_set_height( ui_VPNSTATUS_page_left, LV_SIZE_CONTENT);   /// 11
lv_obj_set_x( ui_VPNSTATUS_page_left, 3 );
lv_obj_set_y( ui_VPNSTATUS_page_left, 115 );
lv_obj_add_flag( ui_VPNSTATUS_page_left, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_VPNSTATUS_page_left, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_VPNSTATUS_page_right = lv_img_create(ui_VPNSTATUS);
lv_img_set_src(ui_VPNSTATUS_page_right, &ui_img_row_r_png);
lv_obj_set_width( ui_VPNSTATUS_page_right, LV_SIZE_CONTENT);  /// 11
lv_obj_set_height( ui_VPNSTATUS_page_right, LV_SIZE_CONTENT);   /// 11
lv_obj_set_x( ui_VPNSTATUS_page_right, 113 );
lv_obj_set_y( ui_VPNSTATUS_page_right, 115 );
lv_obj_add_flag( ui_VPNSTATUS_page_right, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_VPNSTATUS_page_right, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

}
void ui_WANIPCONFIG_screen_init(void)
{
ui_WANIPCONFIG = lv_obj_create(NULL);
lv_obj_clear_flag( ui_WANIPCONFIG, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_WANIPCONFIG, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_WANIPCONFIG, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_logo = lv_img_create(ui_WANIPCONFIG);
lv_img_set_src(ui_WANIPCONFIG_logo, &ui_img_network_png);
lv_obj_set_width( ui_WANIPCONFIG_logo, LV_SIZE_CONTENT);  /// 20
lv_obj_set_height( ui_WANIPCONFIG_logo, LV_SIZE_CONTENT);   /// 16
lv_obj_set_x( ui_WANIPCONFIG_logo, -49 );
lv_obj_set_y( ui_WANIPCONFIG_logo, -53 );
lv_obj_set_align( ui_WANIPCONFIG_logo, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_WANIPCONFIG_logo, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_WANIPCONFIG_logo, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_WANIPCONFIG_page_label = lv_label_create(ui_WANIPCONFIG);
lv_obj_set_width( ui_WANIPCONFIG_page_label, 50);
lv_obj_set_height( ui_WANIPCONFIG_page_label, 13);
lv_obj_set_x( ui_WANIPCONFIG_page_label, 29 );
lv_obj_set_y( ui_WANIPCONFIG_page_label, 4 );
lv_label_set_text(ui_WANIPCONFIG_page_label,"WAN");
lv_obj_set_style_text_color(ui_WANIPCONFIG_page_label, lv_color_hex(0xB4B2B4), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_WANIPCONFIG_page_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_WANIPCONFIG_page_label, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_WANIPCONFIG_page_label, &ui_font_arialbd, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_bar_up = lv_obj_create(ui_WANIPCONFIG);
lv_obj_set_width( ui_WANIPCONFIG_bar_up, 120);
lv_obj_set_height( ui_WANIPCONFIG_bar_up, 1);
lv_obj_set_x( ui_WANIPCONFIG_bar_up, 0 );
lv_obj_set_y( ui_WANIPCONFIG_bar_up, -43 );
lv_obj_set_align( ui_WANIPCONFIG_bar_up, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_WANIPCONFIG_bar_up, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_WANIPCONFIG_bar_up, lv_color_hex(0xB4B2B4), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_WANIPCONFIG_bar_up, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_WANIPCONFIG_bar_up, LV_BORDER_SIDE_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_dhcp_label = lv_label_create(ui_WANIPCONFIG);
lv_obj_set_width( ui_WANIPCONFIG_dhcp_label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_WANIPCONFIG_dhcp_label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_WANIPCONFIG_dhcp_label, 3 );
lv_obj_set_y( ui_WANIPCONFIG_dhcp_label, 28 );
lv_label_set_text(ui_WANIPCONFIG_dhcp_label,"DHCP Client:");
lv_obj_set_style_text_color(ui_WANIPCONFIG_dhcp_label, lv_color_hex(0x6A6D62), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_WANIPCONFIG_dhcp_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_WANIPCONFIG_dhcp_label, &ui_font_dejavusans, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_dhcp_off = lv_img_create(ui_WANIPCONFIG);
lv_img_set_src(ui_WANIPCONFIG_dhcp_off, &ui_img_sel_off_png);
lv_obj_set_width( ui_WANIPCONFIG_dhcp_off, LV_SIZE_CONTENT);  /// 25
lv_obj_set_height( ui_WANIPCONFIG_dhcp_off, LV_SIZE_CONTENT);   /// 14
lv_obj_set_x( ui_WANIPCONFIG_dhcp_off, 41 );
lv_obj_set_y( ui_WANIPCONFIG_dhcp_off, -29 );
lv_obj_set_align( ui_WANIPCONFIG_dhcp_off, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_WANIPCONFIG_dhcp_off, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_WANIPCONFIG_dhcp_off, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_WANIPCONFIG_dhcp_on = lv_img_create(ui_WANIPCONFIG);
lv_img_set_src(ui_WANIPCONFIG_dhcp_on, &ui_img_sel_on_png);
lv_obj_set_width( ui_WANIPCONFIG_dhcp_on, LV_SIZE_CONTENT);  /// 25
lv_obj_set_height( ui_WANIPCONFIG_dhcp_on, LV_SIZE_CONTENT);   /// 14
lv_obj_set_x( ui_WANIPCONFIG_dhcp_on, 41 );
lv_obj_set_y( ui_WANIPCONFIG_dhcp_on, -29 );
lv_obj_set_align( ui_WANIPCONFIG_dhcp_on, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_WANIPCONFIG_dhcp_on, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_WANIPCONFIG_dhcp_on, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_WANIPCONFIG_ip_label = lv_label_create(ui_WANIPCONFIG);
lv_obj_set_width( ui_WANIPCONFIG_ip_label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_WANIPCONFIG_ip_label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_WANIPCONFIG_ip_label, 3 );
lv_obj_set_y( ui_WANIPCONFIG_ip_label, 47 );
lv_label_set_text(ui_WANIPCONFIG_ip_label,"IP Address:");
lv_obj_set_style_text_color(ui_WANIPCONFIG_ip_label, lv_color_hex(0x6A6D62), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_WANIPCONFIG_ip_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_WANIPCONFIG_ip_label, &ui_font_dejavusans, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_ip_value = lv_label_create(ui_WANIPCONFIG);
lv_obj_set_width( ui_WANIPCONFIG_ip_value, 132);
lv_obj_set_height( ui_WANIPCONFIG_ip_value, 15);
lv_obj_set_x( ui_WANIPCONFIG_ip_value, 3 );
lv_obj_set_y( ui_WANIPCONFIG_ip_value, 62 );
lv_label_set_text(ui_WANIPCONFIG_ip_value,"255.255.255.255/24");
lv_obj_set_style_text_color(ui_WANIPCONFIG_ip_value, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_WANIPCONFIG_ip_value, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_WANIPCONFIG_ip_value, &ui_font_dejavusans, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_gateway_label = lv_label_create(ui_WANIPCONFIG);
lv_obj_set_width( ui_WANIPCONFIG_gateway_label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_WANIPCONFIG_gateway_label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_WANIPCONFIG_gateway_label, 3 );
lv_obj_set_y( ui_WANIPCONFIG_gateway_label, 79 );
lv_label_set_text(ui_WANIPCONFIG_gateway_label,"Gateway:");
lv_obj_set_style_text_color(ui_WANIPCONFIG_gateway_label, lv_color_hex(0x6A6D62), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_WANIPCONFIG_gateway_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_WANIPCONFIG_gateway_label, &ui_font_dejavusans, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_gateway_value = lv_label_create(ui_WANIPCONFIG);
lv_obj_set_width( ui_WANIPCONFIG_gateway_value, 132);
lv_obj_set_height( ui_WANIPCONFIG_gateway_value, 15);
lv_obj_set_x( ui_WANIPCONFIG_gateway_value, 3 );
lv_obj_set_y( ui_WANIPCONFIG_gateway_value, 95 );
lv_label_set_text(ui_WANIPCONFIG_gateway_value,"255.255.255.255");
lv_obj_set_style_text_color(ui_WANIPCONFIG_gateway_value, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_WANIPCONFIG_gateway_value, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_WANIPCONFIG_gateway_value, &ui_font_dejavusans, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_bar_down = lv_obj_create(ui_WANIPCONFIG);
lv_obj_set_width( ui_WANIPCONFIG_bar_down, 128);
lv_obj_set_height( ui_WANIPCONFIG_bar_down, 16);
lv_obj_set_x( ui_WANIPCONFIG_bar_down, 0 );
lv_obj_set_y( ui_WANIPCONFIG_bar_down, 56 );
lv_obj_set_align( ui_WANIPCONFIG_bar_down, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_WANIPCONFIG_bar_down, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_WANIPCONFIG_bar_down, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_WANIPCONFIG_bar_down, lv_color_hex(0x545454), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_WANIPCONFIG_bar_down, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_WANIPCONFIG_bar_down, LV_BORDER_SIDE_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_page_left = lv_img_create(ui_WANIPCONFIG);
lv_img_set_src(ui_WANIPCONFIG_page_left, &ui_img_row_l_png);
lv_obj_set_width( ui_WANIPCONFIG_page_left, LV_SIZE_CONTENT);  /// 11
lv_obj_set_height( ui_WANIPCONFIG_page_left, LV_SIZE_CONTENT);   /// 11
lv_obj_set_x( ui_WANIPCONFIG_page_left, 3 );
lv_obj_set_y( ui_WANIPCONFIG_page_left, 115 );
lv_obj_add_flag( ui_WANIPCONFIG_page_left, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_WANIPCONFIG_page_left, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_WANIPCONFIG_page_down = lv_img_create(ui_WANIPCONFIG);
lv_img_set_src(ui_WANIPCONFIG_page_down, &ui_img_row_d_png);
lv_obj_set_width( ui_WANIPCONFIG_page_down, LV_SIZE_CONTENT);  /// 11
lv_obj_set_height( ui_WANIPCONFIG_page_down, LV_SIZE_CONTENT);   /// 11
lv_obj_set_x( ui_WANIPCONFIG_page_down, 59 );
lv_obj_set_y( ui_WANIPCONFIG_page_down, 115 );
lv_obj_add_flag( ui_WANIPCONFIG_page_down, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_WANIPCONFIG_page_down, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_WANIPCONFIG_page_right = lv_img_create(ui_WANIPCONFIG);
lv_img_set_src(ui_WANIPCONFIG_page_right, &ui_img_row_r_png);
lv_obj_set_width( ui_WANIPCONFIG_page_right, LV_SIZE_CONTENT);  /// 11
lv_obj_set_height( ui_WANIPCONFIG_page_right, LV_SIZE_CONTENT);   /// 11
lv_obj_set_x( ui_WANIPCONFIG_page_right, 113 );
lv_obj_set_y( ui_WANIPCONFIG_page_right, 115 );
lv_obj_add_flag( ui_WANIPCONFIG_page_right, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_WANIPCONFIG_page_right, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

}
void ui_LANIPCONFIG_screen_init(void)
{
ui_LANIPCONFIG = lv_obj_create(NULL);
lv_obj_clear_flag( ui_LANIPCONFIG, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_LANIPCONFIG, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_LANIPCONFIG, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_LANIPCONFIG_logo = lv_img_create(ui_LANIPCONFIG);
lv_img_set_src(ui_LANIPCONFIG_logo, &ui_img_network_png);
lv_obj_set_width( ui_LANIPCONFIG_logo, LV_SIZE_CONTENT);  /// 20
lv_obj_set_height( ui_LANIPCONFIG_logo, LV_SIZE_CONTENT);   /// 16
lv_obj_set_x( ui_LANIPCONFIG_logo, -49 );
lv_obj_set_y( ui_LANIPCONFIG_logo, -53 );
lv_obj_set_align( ui_LANIPCONFIG_logo, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_LANIPCONFIG_logo, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_LANIPCONFIG_logo, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_LANIPCONFIG_page_label = lv_label_create(ui_LANIPCONFIG);
lv_obj_set_width( ui_LANIPCONFIG_page_label, 50);
lv_obj_set_height( ui_LANIPCONFIG_page_label, 13);
lv_obj_set_x( ui_LANIPCONFIG_page_label, 29 );
lv_obj_set_y( ui_LANIPCONFIG_page_label, 4 );
lv_label_set_text(ui_LANIPCONFIG_page_label,"LAN");
lv_obj_set_style_text_color(ui_LANIPCONFIG_page_label, lv_color_hex(0xB4B2B4), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_LANIPCONFIG_page_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_LANIPCONFIG_page_label, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_LANIPCONFIG_page_label, &ui_font_arialbd, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_LANIPCONFIG_bar_up = lv_obj_create(ui_LANIPCONFIG);
lv_obj_set_width( ui_LANIPCONFIG_bar_up, 120);
lv_obj_set_height( ui_LANIPCONFIG_bar_up, 1);
lv_obj_set_x( ui_LANIPCONFIG_bar_up, 0 );
lv_obj_set_y( ui_LANIPCONFIG_bar_up, -43 );
lv_obj_set_align( ui_LANIPCONFIG_bar_up, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_LANIPCONFIG_bar_up, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_LANIPCONFIG_bar_up, lv_color_hex(0xB4B2B4), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_LANIPCONFIG_bar_up, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_LANIPCONFIG_bar_up, LV_BORDER_SIDE_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_LANIPCONFIG_dhcp_label = lv_label_create(ui_LANIPCONFIG);
lv_obj_set_width( ui_LANIPCONFIG_dhcp_label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LANIPCONFIG_dhcp_label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_LANIPCONFIG_dhcp_label, 3 );
lv_obj_set_y( ui_LANIPCONFIG_dhcp_label, 28 );
lv_label_set_text(ui_LANIPCONFIG_dhcp_label,"DHCP Server:");
lv_obj_set_style_text_color(ui_LANIPCONFIG_dhcp_label, lv_color_hex(0x6A6D62), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_LANIPCONFIG_dhcp_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_LANIPCONFIG_dhcp_label, &ui_font_dejavusans, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_LANIPCONFIG_dhcp_off = lv_img_create(ui_LANIPCONFIG);
lv_img_set_src(ui_LANIPCONFIG_dhcp_off, &ui_img_sel_off_png);
lv_obj_set_width( ui_LANIPCONFIG_dhcp_off, LV_SIZE_CONTENT);  /// 25
lv_obj_set_height( ui_LANIPCONFIG_dhcp_off, LV_SIZE_CONTENT);   /// 14
lv_obj_set_x( ui_LANIPCONFIG_dhcp_off, 41 );
lv_obj_set_y( ui_LANIPCONFIG_dhcp_off, -29 );
lv_obj_set_align( ui_LANIPCONFIG_dhcp_off, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_LANIPCONFIG_dhcp_off, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_LANIPCONFIG_dhcp_off, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_LANIPCONFIG_dhcp_on = lv_img_create(ui_LANIPCONFIG);
lv_img_set_src(ui_LANIPCONFIG_dhcp_on, &ui_img_sel_on_png);
lv_obj_set_width( ui_LANIPCONFIG_dhcp_on, LV_SIZE_CONTENT);  /// 25
lv_obj_set_height( ui_LANIPCONFIG_dhcp_on, LV_SIZE_CONTENT);   /// 14
lv_obj_set_x( ui_LANIPCONFIG_dhcp_on, 41 );
lv_obj_set_y( ui_LANIPCONFIG_dhcp_on, -29 );
lv_obj_set_align( ui_LANIPCONFIG_dhcp_on, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_LANIPCONFIG_dhcp_on, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_LANIPCONFIG_dhcp_on, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_LANIPCONFIG_ip_label = lv_label_create(ui_LANIPCONFIG);
lv_obj_set_width( ui_LANIPCONFIG_ip_label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LANIPCONFIG_ip_label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_LANIPCONFIG_ip_label, 3 );
lv_obj_set_y( ui_LANIPCONFIG_ip_label, 47 );
lv_label_set_text(ui_LANIPCONFIG_ip_label,"IP Address:");
lv_obj_set_style_text_color(ui_LANIPCONFIG_ip_label, lv_color_hex(0x6A6D62), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_LANIPCONFIG_ip_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_LANIPCONFIG_ip_label, &ui_font_dejavusans, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_LANIPCONFIG_ip_value = lv_label_create(ui_LANIPCONFIG);
lv_obj_set_width( ui_LANIPCONFIG_ip_value, 132);
lv_obj_set_height( ui_LANIPCONFIG_ip_value, 15);
lv_obj_set_x( ui_LANIPCONFIG_ip_value, 3 );
lv_obj_set_y( ui_LANIPCONFIG_ip_value, 62 );
lv_label_set_text(ui_LANIPCONFIG_ip_value,"255.255.255.255/24");
lv_obj_set_style_text_color(ui_LANIPCONFIG_ip_value, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_LANIPCONFIG_ip_value, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_LANIPCONFIG_ip_value, &ui_font_dejavusans, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_LANIPCONFIG_bar_down = lv_obj_create(ui_LANIPCONFIG);
lv_obj_set_width( ui_LANIPCONFIG_bar_down, 128);
lv_obj_set_height( ui_LANIPCONFIG_bar_down, 16);
lv_obj_set_x( ui_LANIPCONFIG_bar_down, 0 );
lv_obj_set_y( ui_LANIPCONFIG_bar_down, 56 );
lv_obj_set_align( ui_LANIPCONFIG_bar_down, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_LANIPCONFIG_bar_down, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_LANIPCONFIG_bar_down, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_LANIPCONFIG_bar_down, lv_color_hex(0x545454), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_LANIPCONFIG_bar_down, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_LANIPCONFIG_bar_down, LV_BORDER_SIDE_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_LANIPCONFIG_page_left = lv_img_create(ui_LANIPCONFIG);
lv_img_set_src(ui_LANIPCONFIG_page_left, &ui_img_row_l_png);
lv_obj_set_width( ui_LANIPCONFIG_page_left, LV_SIZE_CONTENT);  /// 11
lv_obj_set_height( ui_LANIPCONFIG_page_left, LV_SIZE_CONTENT);   /// 11
lv_obj_set_x( ui_LANIPCONFIG_page_left, 3 );
lv_obj_set_y( ui_LANIPCONFIG_page_left, 115 );
lv_obj_add_flag( ui_LANIPCONFIG_page_left, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_LANIPCONFIG_page_left, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_LANIPCONFIG_page_down = lv_img_create(ui_LANIPCONFIG);
lv_img_set_src(ui_LANIPCONFIG_page_down, &ui_img_row_d_png);
lv_obj_set_width( ui_LANIPCONFIG_page_down, LV_SIZE_CONTENT);  /// 11
lv_obj_set_height( ui_LANIPCONFIG_page_down, LV_SIZE_CONTENT);   /// 11
lv_obj_set_x( ui_LANIPCONFIG_page_down, 59 );
lv_obj_set_y( ui_LANIPCONFIG_page_down, 115 );
lv_obj_add_flag( ui_LANIPCONFIG_page_down, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_LANIPCONFIG_page_down, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_LANIPCONFIG_page_right = lv_img_create(ui_LANIPCONFIG);
lv_img_set_src(ui_LANIPCONFIG_page_right, &ui_img_row_r_png);
lv_obj_set_width( ui_LANIPCONFIG_page_right, LV_SIZE_CONTENT);  /// 11
lv_obj_set_height( ui_LANIPCONFIG_page_right, LV_SIZE_CONTENT);   /// 11
lv_obj_set_x( ui_LANIPCONFIG_page_right, 113 );
lv_obj_set_y( ui_LANIPCONFIG_page_right, 115 );
lv_obj_add_flag( ui_LANIPCONFIG_page_right, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_LANIPCONFIG_page_right, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

}
void ui_WLANIPCONFIG_screen_init(void)
{
ui_WLANIPCONFIG = lv_obj_create(NULL);
lv_obj_clear_flag( ui_WLANIPCONFIG, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_WLANIPCONFIG, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_WLANIPCONFIG, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WLANIPCONFIG_logo = lv_img_create(ui_WLANIPCONFIG);
lv_img_set_src(ui_WLANIPCONFIG_logo, &ui_img_network_png);
lv_obj_set_width( ui_WLANIPCONFIG_logo, LV_SIZE_CONTENT);  /// 20
lv_obj_set_height( ui_WLANIPCONFIG_logo, LV_SIZE_CONTENT);   /// 16
lv_obj_set_x( ui_WLANIPCONFIG_logo, -49 );
lv_obj_set_y( ui_WLANIPCONFIG_logo, -53 );
lv_obj_set_align( ui_WLANIPCONFIG_logo, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_WLANIPCONFIG_logo, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_WLANIPCONFIG_logo, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_WLANIPCONFIG_page_label = lv_label_create(ui_WLANIPCONFIG);
lv_obj_set_width( ui_WLANIPCONFIG_page_label, 50);
lv_obj_set_height( ui_WLANIPCONFIG_page_label, 13);
lv_obj_set_x( ui_WLANIPCONFIG_page_label, 29 );
lv_obj_set_y( ui_WLANIPCONFIG_page_label, 4 );
lv_label_set_text(ui_WLANIPCONFIG_page_label,"Wi-Fi");
lv_obj_set_style_text_color(ui_WLANIPCONFIG_page_label, lv_color_hex(0xB4B2B4), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_WLANIPCONFIG_page_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_WLANIPCONFIG_page_label, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_WLANIPCONFIG_page_label, &ui_font_arialbd, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WLANIPCONFIG_bar_up = lv_obj_create(ui_WLANIPCONFIG);
lv_obj_set_width( ui_WLANIPCONFIG_bar_up, 120);
lv_obj_set_height( ui_WLANIPCONFIG_bar_up, 1);
lv_obj_set_x( ui_WLANIPCONFIG_bar_up, 0 );
lv_obj_set_y( ui_WLANIPCONFIG_bar_up, -43 );
lv_obj_set_align( ui_WLANIPCONFIG_bar_up, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_WLANIPCONFIG_bar_up, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_WLANIPCONFIG_bar_up, lv_color_hex(0xB4B2B4), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_WLANIPCONFIG_bar_up, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_WLANIPCONFIG_bar_up, LV_BORDER_SIDE_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WLANIPCONFIG_dhcp_label = lv_label_create(ui_WLANIPCONFIG);
lv_obj_set_width( ui_WLANIPCONFIG_dhcp_label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_WLANIPCONFIG_dhcp_label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_WLANIPCONFIG_dhcp_label, 3 );
lv_obj_set_y( ui_WLANIPCONFIG_dhcp_label, 28 );
lv_label_set_text(ui_WLANIPCONFIG_dhcp_label,"DHCP Client:");
lv_obj_set_style_text_color(ui_WLANIPCONFIG_dhcp_label, lv_color_hex(0x6A6D62), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_WLANIPCONFIG_dhcp_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_WLANIPCONFIG_dhcp_label, &ui_font_dejavusans, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WLANIPCONFIG_dhcp_off = lv_img_create(ui_WLANIPCONFIG);
lv_img_set_src(ui_WLANIPCONFIG_dhcp_off, &ui_img_sel_off_png);
lv_obj_set_width( ui_WLANIPCONFIG_dhcp_off, LV_SIZE_CONTENT);  /// 25
lv_obj_set_height( ui_WLANIPCONFIG_dhcp_off, LV_SIZE_CONTENT);   /// 14
lv_obj_set_x( ui_WLANIPCONFIG_dhcp_off, 41 );
lv_obj_set_y( ui_WLANIPCONFIG_dhcp_off, -29 );
lv_obj_set_align( ui_WLANIPCONFIG_dhcp_off, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_WLANIPCONFIG_dhcp_off, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_WLANIPCONFIG_dhcp_off, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_WLANIPCONFIG_dhcp_on = lv_img_create(ui_WLANIPCONFIG);
lv_img_set_src(ui_WLANIPCONFIG_dhcp_on, &ui_img_sel_on_png);
lv_obj_set_width( ui_WLANIPCONFIG_dhcp_on, LV_SIZE_CONTENT);  /// 25
lv_obj_set_height( ui_WLANIPCONFIG_dhcp_on, LV_SIZE_CONTENT);   /// 14
lv_obj_set_x( ui_WLANIPCONFIG_dhcp_on, 41 );
lv_obj_set_y( ui_WLANIPCONFIG_dhcp_on, -29 );
lv_obj_set_align( ui_WLANIPCONFIG_dhcp_on, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_WLANIPCONFIG_dhcp_on, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_WLANIPCONFIG_dhcp_on, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_WLANIPCONFIG_ip_label = lv_label_create(ui_WLANIPCONFIG);
lv_obj_set_width( ui_WLANIPCONFIG_ip_label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_WLANIPCONFIG_ip_label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_WLANIPCONFIG_ip_label, 3 );
lv_obj_set_y( ui_WLANIPCONFIG_ip_label, 47 );
lv_label_set_text(ui_WLANIPCONFIG_ip_label,"IP Address:");
lv_obj_set_style_text_color(ui_WLANIPCONFIG_ip_label, lv_color_hex(0x6A6D62), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_WLANIPCONFIG_ip_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_WLANIPCONFIG_ip_label, &ui_font_dejavusans, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WLANIPCONFIG_ip_value = lv_label_create(ui_WLANIPCONFIG);
lv_obj_set_width( ui_WLANIPCONFIG_ip_value, 132);
lv_obj_set_height( ui_WLANIPCONFIG_ip_value, 15);
lv_obj_set_x( ui_WLANIPCONFIG_ip_value, 3 );
lv_obj_set_y( ui_WLANIPCONFIG_ip_value, 62 );
lv_label_set_text(ui_WLANIPCONFIG_ip_value,"255.255.255.255/24");
lv_obj_set_style_text_color(ui_WLANIPCONFIG_ip_value, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_WLANIPCONFIG_ip_value, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_WLANIPCONFIG_ip_value, &ui_font_dejavusans, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WLANIPCONFIG_gateway_label = lv_label_create(ui_WLANIPCONFIG);
lv_obj_set_width( ui_WLANIPCONFIG_gateway_label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_WLANIPCONFIG_gateway_label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_WLANIPCONFIG_gateway_label, 3 );
lv_obj_set_y( ui_WLANIPCONFIG_gateway_label, 79 );
lv_label_set_text(ui_WLANIPCONFIG_gateway_label,"Gateway:");
lv_obj_set_style_text_color(ui_WLANIPCONFIG_gateway_label, lv_color_hex(0x6A6D62), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_WLANIPCONFIG_gateway_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_WLANIPCONFIG_gateway_label, &ui_font_dejavusans, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WLANIPCONFIG_gateway_value = lv_label_create(ui_WLANIPCONFIG);
lv_obj_set_width( ui_WLANIPCONFIG_gateway_value, 132);
lv_obj_set_height( ui_WLANIPCONFIG_gateway_value, 15);
lv_obj_set_x( ui_WLANIPCONFIG_gateway_value, 3 );
lv_obj_set_y( ui_WLANIPCONFIG_gateway_value, 95 );
lv_label_set_text(ui_WLANIPCONFIG_gateway_value,"255.255.255.255");
lv_obj_set_style_text_color(ui_WLANIPCONFIG_gateway_value, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_WLANIPCONFIG_gateway_value, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_WLANIPCONFIG_gateway_value, &ui_font_dejavusans, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WLANIPCONFIG_bar_down = lv_obj_create(ui_WLANIPCONFIG);
lv_obj_set_width( ui_WLANIPCONFIG_bar_down, 128);
lv_obj_set_height( ui_WLANIPCONFIG_bar_down, 16);
lv_obj_set_x( ui_WLANIPCONFIG_bar_down, 0 );
lv_obj_set_y( ui_WLANIPCONFIG_bar_down, 56 );
lv_obj_set_align( ui_WLANIPCONFIG_bar_down, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_WLANIPCONFIG_bar_down, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_WLANIPCONFIG_bar_down, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_WLANIPCONFIG_bar_down, lv_color_hex(0x545454), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_WLANIPCONFIG_bar_down, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_WLANIPCONFIG_bar_down, LV_BORDER_SIDE_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WLANIPCONFIG_page_left = lv_img_create(ui_WLANIPCONFIG);
lv_img_set_src(ui_WLANIPCONFIG_page_left, &ui_img_row_l_png);
lv_obj_set_width( ui_WLANIPCONFIG_page_left, LV_SIZE_CONTENT);  /// 11
lv_obj_set_height( ui_WLANIPCONFIG_page_left, LV_SIZE_CONTENT);   /// 11
lv_obj_set_x( ui_WLANIPCONFIG_page_left, 3 );
lv_obj_set_y( ui_WLANIPCONFIG_page_left, 115 );
lv_obj_add_flag( ui_WLANIPCONFIG_page_left, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_WLANIPCONFIG_page_left, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_WLANIPCONFIG_page_down = lv_img_create(ui_WLANIPCONFIG);
lv_img_set_src(ui_WLANIPCONFIG_page_down, &ui_img_row_d_png);
lv_obj_set_width( ui_WLANIPCONFIG_page_down, LV_SIZE_CONTENT);  /// 11
lv_obj_set_height( ui_WLANIPCONFIG_page_down, LV_SIZE_CONTENT);   /// 11
lv_obj_set_x( ui_WLANIPCONFIG_page_down, 59 );
lv_obj_set_y( ui_WLANIPCONFIG_page_down, 115 );
lv_obj_add_flag( ui_WLANIPCONFIG_page_down, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_WLANIPCONFIG_page_down, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_WLANIPCONFIG_page_right = lv_img_create(ui_WLANIPCONFIG);
lv_img_set_src(ui_WLANIPCONFIG_page_right, &ui_img_row_r_png);
lv_obj_set_width( ui_WLANIPCONFIG_page_right, LV_SIZE_CONTENT);  /// 11
lv_obj_set_height( ui_WLANIPCONFIG_page_right, LV_SIZE_CONTENT);   /// 11
lv_obj_set_x( ui_WLANIPCONFIG_page_right, 113 );
lv_obj_set_y( ui_WLANIPCONFIG_page_right, 115 );
lv_obj_add_flag( ui_WLANIPCONFIG_page_right, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_WLANIPCONFIG_page_right, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

}

void ui_init( void )
{LV_EVENT_GET_COMP_CHILD = lv_event_register_id();

lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_HOME_screen_init();
ui_VPNSTATUS_screen_init();
ui_WANIPCONFIG_screen_init();
ui_LANIPCONFIG_screen_init();
ui_WLANIPCONFIG_screen_init();
lv_disp_load_scr( ui_HOME);
}
