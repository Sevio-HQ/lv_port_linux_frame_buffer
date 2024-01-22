// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: sevio_ui_01

#ifndef _SEVIO_UI_01_UI_H
#define _SEVIO_UI_01_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"

extern lv_obj_t * ui_Home;
extern lv_obj_t * ui_Home_Logo;
extern lv_obj_t * ui_Screen1_Label1;
extern lv_obj_t * ui_boardStatusLabel;
extern lv_obj_t * ui_uptimeLabel;
extern lv_obj_t * ui_dateTimeLabel;
extern lv_obj_t * ui_VPNSTATUS;
extern lv_obj_t * ui_VPNSTATUS_logo;
extern lv_obj_t * ui_VPNSTATUS_status_image;
extern lv_obj_t * ui_VPNSTATUS_uplink_label;
extern lv_obj_t * ui_VPNSTATUS_uplink_fail;
extern lv_obj_t * ui_VPNSTATUS_uplink_pass;
extern lv_obj_t * ui_VPNSTATUS_ip_label;
extern lv_obj_t * ui_VPNSTATUS_ip_fail;
extern lv_obj_t * ui_VPNSTATUS_ip_pass;
extern lv_obj_t * ui_VPNSTATUS_gateway_label;
extern lv_obj_t * ui_VPNSTATUS_gateway_fail;
extern lv_obj_t * ui_VPNSTATUS_gateway_pass;
extern lv_obj_t * ui_VPNSTATUS_internet_label;
extern lv_obj_t * ui_VPNSTATUS_internet_fail;
extern lv_obj_t * ui_VPNSTATUS_internet_pass;
extern lv_obj_t * ui_VPNSTATUS_vpn_label;
extern lv_obj_t * ui_VPNSTATUS_vpn_fail;
extern lv_obj_t * ui_VPNSTATUS_vpn_pass;
extern lv_obj_t * ui_VPNSTATUS_bar_down;
extern lv_obj_t * ui_VPNSTATUS_page_left;
extern lv_obj_t * ui_VPNSTATUS_page_right;
extern lv_obj_t * ui_WANIPCONFIG;
extern lv_obj_t * ui_WANIPCONFIG_logo;
extern lv_obj_t * ui_WANIPCONFIG_page_label;
extern lv_obj_t * ui_WANIPCONFIG_bar_up;
extern lv_obj_t * ui_WANIPCONFIG_dhcp_label;
extern lv_obj_t * ui_WANIPCONFIG_dhcp_off;
extern lv_obj_t * ui_WANIPCONFIG_dhcp_on;
extern lv_obj_t * ui_WANIPCONFIG_ip_label;
extern lv_obj_t * ui_WANIPCONFIG_ip_value;
extern lv_obj_t * ui_WANIPCONFIG_gateway_label;
extern lv_obj_t * ui_WANIPCONFIG_gateway_value;
extern lv_obj_t * ui_WANIPCONFIG_bar_down;
extern lv_obj_t * ui_WANIPCONFIG_page_left;
extern lv_obj_t * ui_WANIPCONFIG_page_down;
extern lv_obj_t * ui_WANIPCONFIG_page_right;
extern lv_obj_t * ui_LANIPCONFIG;
extern lv_obj_t * ui_LANIPCONFIG_logo;
extern lv_obj_t * ui_LANIPCONFIG_page_label;
extern lv_obj_t * ui_LANIPCONFIG_bar_up;
extern lv_obj_t * ui_LANIPCONFIG_dhcp_label;
extern lv_obj_t * ui_LANIPCONFIG_dhcp_off;
extern lv_obj_t * ui_LANIPCONFIG_dhcp_on;
extern lv_obj_t * ui_LANIPCONFIG_ip_label;
extern lv_obj_t * ui_LANIPCONFIG_ip_value;
extern lv_obj_t * ui_LANIPCONFIG_bar_down;
extern lv_obj_t * ui_LANIPCONFIG_page_left;
extern lv_obj_t * ui_LANIPCONFIG_page_down;
extern lv_obj_t * ui_LANIPCONFIG_page_right;
extern lv_obj_t * ui_WLANIPCONFIG;
extern lv_obj_t * ui_WLANIPCONFIG_logo;
extern lv_obj_t * ui_WLANIPCONFIG_page_label;
extern lv_obj_t * ui_WLANIPCONFIG_bar_up;
extern lv_obj_t * ui_WLANIPCONFIG_dhcp_label;
extern lv_obj_t * ui_WLANIPCONFIG_dhcp_off;
extern lv_obj_t * ui_WLANIPCONFIG_dhcp_on;
extern lv_obj_t * ui_WLANIPCONFIG_ip_label;
extern lv_obj_t * ui_WLANIPCONFIG_ip_value;
extern lv_obj_t * ui_WLANIPCONFIG_gateway_label;
extern lv_obj_t * ui_WLANIPCONFIG_gateway_value;
extern lv_obj_t * ui_WLANIPCONFIG_bar_down;
extern lv_obj_t * ui_WLANIPCONFIG_page_left;
extern lv_obj_t * ui_WLANIPCONFIG_page_down;
extern lv_obj_t * ui_WLANIPCONFIG_page_right;


LV_IMG_DECLARE(ui_img_logo_png);    // assets\logo.png
LV_IMG_DECLARE(ui_img_vpn_png);    // assets\vpn.png
LV_IMG_DECLARE(ui_img_status_tree_png);    // assets\status_tree.png
LV_IMG_DECLARE(ui_img_status_fail_png);    // assets\status_fail.png
LV_IMG_DECLARE(ui_img_status_pass_png);    // assets\status_pass.png
LV_IMG_DECLARE(ui_img_row_l_png);    // assets\row_l.png
LV_IMG_DECLARE(ui_img_row_r_png);    // assets\row_r.png
LV_IMG_DECLARE(ui_img_network_png);    // assets\network.png
LV_IMG_DECLARE(ui_img_sel_off_png);    // assets\sel_off.png
LV_IMG_DECLARE(ui_img_sel_on_png);    // assets\sel_on.png
LV_IMG_DECLARE(ui_img_row_d_png);    // assets\row_d.png


LV_FONT_DECLARE(ui_font_arialbd);
LV_FONT_DECLARE(ui_font_dejavusans);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
