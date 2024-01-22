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
extern lv_obj_t * ui_VPNSTATUS_Logo;
extern lv_obj_t * ui_VPNSTATUS_StatusImage;
extern lv_obj_t * ui_VPNSTATUS_Uplink_Label;
extern lv_obj_t * ui_VPNSTATUS_Uplink_Fail;
extern lv_obj_t * ui_VPNSTATUS_Uplink_Pass;
extern lv_obj_t * ui_VPNSTATUS_IP_Label;
extern lv_obj_t * ui_VPNSTATUS_IP_Fail;
extern lv_obj_t * ui_VPNSTATUS_IP_Pass;
extern lv_obj_t * ui_VPNSTATUS_Gateway_Label;
extern lv_obj_t * ui_VPNSTATUS_Gateway_Fail;
extern lv_obj_t * ui_VPNSTATUS_Gateway_Pass;
extern lv_obj_t * ui_VPNSTATUS_Internet_Label;
extern lv_obj_t * ui_VPNSTATUS_Internet_Fail;
extern lv_obj_t * ui_VPNSTATUS_Internet_Pass;
extern lv_obj_t * ui_VPNSTATUS_VPN_Label;
extern lv_obj_t * ui_VPNSTATUS_VPN_Fail;
extern lv_obj_t * ui_VPNSTATUS_VPN_Pass;
extern lv_obj_t * ui_VPNSTATUS_BarDown;
extern lv_obj_t * ui_VPNSTATUS_RowLeft;
extern lv_obj_t * ui_VPNSTATUS_RowRight;
extern lv_obj_t * ui_WANIPCONFIG;
extern lv_obj_t * ui_WANIPCONFIG_Logo;
extern lv_obj_t * ui_WANIPCONFIG_PageLabel;
extern lv_obj_t * ui_WANIPCONFIG_BarUp;
extern lv_obj_t * ui_WANIPCONFIG_DHCP_Label;
extern lv_obj_t * ui_WANIPCONFIG_DHCP_OFF;
extern lv_obj_t * ui_WANIPCONFIG_DHCP_ON;
extern lv_obj_t * ui_WANIPCONFIG_IP_Label;
extern lv_obj_t * ui_WANIPCONFIG_IP_Value;
extern lv_obj_t * ui_WANIPCONFIG_Gateway_Label;
extern lv_obj_t * ui_WANIPCONFIG_Label3;
extern lv_obj_t * ui_WANIPCONFIG_BarDown;
extern lv_obj_t * ui_WANIPCONFIG_RowLeft;
extern lv_obj_t * ui_WANIPCONFIG_RowDown;
extern lv_obj_t * ui_WANIPCONFIG_RowRight;
extern lv_obj_t * ui_LANIPCONFIG;
extern lv_obj_t * ui_LANIPCONFIG_Logo;
extern lv_obj_t * ui_LANIPCONFIG_PageLabel;
extern lv_obj_t * ui_LANIPCONFIG_BarUp;
extern lv_obj_t * ui_LANIPCONFIG_DHCP_Label;
extern lv_obj_t * ui_LANIPCONFIG_DHCP_OFF;
extern lv_obj_t * ui_LANIPCONFIG_DHCP_ON;
extern lv_obj_t * ui_LANIPCONFIG_IP_Label;
extern lv_obj_t * ui_WANIPCONFIG_Label10;
extern lv_obj_t * ui_LANIPCONFIG_BarDown;
extern lv_obj_t * ui_LANIPCONFIG_RowLeft;
extern lv_obj_t * ui_LANIPCONFIG_RowDown;
extern lv_obj_t * ui_LANIPCONFIG_RowRight;
extern lv_obj_t * ui_WLANIPCONFIG;
extern lv_obj_t * ui_WLANIPCONFIG_Logo;
extern lv_obj_t * ui_WLANIPCONFIG_PageLabel;
extern lv_obj_t * ui_WLANIPCONFIG_BarUp;
extern lv_obj_t * ui_WLANIPCONFIG_DHCP_Label;
extern lv_obj_t * ui_WLANIPCONFIG_DHCP_OFF;
extern lv_obj_t * ui_WLANIPCONFIG_DHCP_ON;
extern lv_obj_t * ui_WLANIPCONFIG_ip_Label;
extern lv_obj_t * ui_WANIPCONFIG_Label6;
extern lv_obj_t * ui_WLANIPCONFIG_Gateway_Label;
extern lv_obj_t * ui_WANIPCONFIG_Label7;
extern lv_obj_t * ui_WLANIPCONFIG_BarDown;
extern lv_obj_t * ui_WLANIPCONFIG_RowLeft;
extern lv_obj_t * ui_WLANIPCONFIG_RowDown;
extern lv_obj_t * ui_WLANIPCONFIG_RowRight;


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
