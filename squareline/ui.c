// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: sevio_ui_01

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Home;
lv_obj_t * ui_Home_Logo;
lv_obj_t * ui_Screen1_Label1;
lv_obj_t * ui_boardStatusLabel;
lv_obj_t * ui_uptimeLabel;
lv_obj_t * ui_dateTimeLabel;
lv_obj_t * ui_VPNSTATUS;
lv_obj_t * ui_VPNSTATUS_Logo;
lv_obj_t * ui_VPNSTATUS_StatusImage;
lv_obj_t * ui_VPNSTATUS_Uplink_Label;
lv_obj_t * ui_VPNSTATUS_Uplink_Fail;
lv_obj_t * ui_VPNSTATUS_Uplink_Pass;
lv_obj_t * ui_VPNSTATUS_IP_Label;
lv_obj_t * ui_VPNSTATUS_IP_Fail;
lv_obj_t * ui_VPNSTATUS_IP_Pass;
lv_obj_t * ui_VPNSTATUS_Gateway_Label;
lv_obj_t * ui_VPNSTATUS_Gateway_Fail;
lv_obj_t * ui_VPNSTATUS_Gateway_Pass;
lv_obj_t * ui_VPNSTATUS_Internet_Label;
lv_obj_t * ui_VPNSTATUS_Internet_Fail;
lv_obj_t * ui_VPNSTATUS_Internet_Pass;
lv_obj_t * ui_VPNSTATUS_VPN_Label;
lv_obj_t * ui_VPNSTATUS_VPN_Fail;
lv_obj_t * ui_VPNSTATUS_VPN_Pass;
lv_obj_t * ui_VPNSTATUS_BarDown;
lv_obj_t * ui_VPNSTATUS_RowLeft;
lv_obj_t * ui_VPNSTATUS_RowRight;
lv_obj_t * ui_WANIPCONFIG;
lv_obj_t * ui_WANIPCONFIG_Logo;
lv_obj_t * ui_WANIPCONFIG_PageLabel;
lv_obj_t * ui_WANIPCONFIG_BarUp;
lv_obj_t * ui_WANIPCONFIG_DHCP_Label;
lv_obj_t * ui_WANIPCONFIG_DHCP_OFF;
lv_obj_t * ui_WANIPCONFIG_DHCP_ON;
lv_obj_t * ui_WANIPCONFIG_IP_Label;
lv_obj_t * ui_WANIPCONFIG_IP_Value;
lv_obj_t * ui_WANIPCONFIG_Gateway_Label;
lv_obj_t * ui_WANIPCONFIG_Label3;
lv_obj_t * ui_WANIPCONFIG_BarDown;
lv_obj_t * ui_WANIPCONFIG_RowLeft;
lv_obj_t * ui_WANIPCONFIG_RowDown;
lv_obj_t * ui_WANIPCONFIG_RowRight;
lv_obj_t * ui_LANIPCONFIG;
lv_obj_t * ui_LANIPCONFIG_Logo;
lv_obj_t * ui_LANIPCONFIG_PageLabel;
lv_obj_t * ui_LANIPCONFIG_BarUp;
lv_obj_t * ui_LANIPCONFIG_DHCP_Label;
lv_obj_t * ui_LANIPCONFIG_DHCP_OFF;
lv_obj_t * ui_LANIPCONFIG_DHCP_ON;
lv_obj_t * ui_LANIPCONFIG_IP_Label;
lv_obj_t * ui_WANIPCONFIG_Label10;
lv_obj_t * ui_LANIPCONFIG_BarDown;
lv_obj_t * ui_LANIPCONFIG_RowLeft;
lv_obj_t * ui_LANIPCONFIG_RowDown;
lv_obj_t * ui_LANIPCONFIG_RowRight;
lv_obj_t * ui_WLANIPCONFIG;
lv_obj_t * ui_WLANIPCONFIG_Logo;
lv_obj_t * ui_WLANIPCONFIG_PageLabel;
lv_obj_t * ui_WLANIPCONFIG_BarUp;
lv_obj_t * ui_WLANIPCONFIG_DHCP_Label;
lv_obj_t * ui_WLANIPCONFIG_DHCP_OFF;
lv_obj_t * ui_WLANIPCONFIG_DHCP_ON;
lv_obj_t * ui_WLANIPCONFIG_ip_Label;
lv_obj_t * ui_WANIPCONFIG_Label6;
lv_obj_t * ui_WLANIPCONFIG_Gateway_Label;
lv_obj_t * ui_WANIPCONFIG_Label7;
lv_obj_t * ui_WLANIPCONFIG_BarDown;
lv_obj_t * ui_WLANIPCONFIG_RowLeft;
lv_obj_t * ui_WLANIPCONFIG_RowDown;
lv_obj_t * ui_WLANIPCONFIG_RowRight;

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
void ui_Home_screen_init(void)
{
    ui_Home = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Home, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Home, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Home, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Home, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Home, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Home_Logo = lv_img_create(ui_Home);
    lv_img_set_src(ui_Home_Logo, &ui_img_logo_png);
    lv_obj_set_width(ui_Home_Logo, LV_SIZE_CONTENT);   /// 113
    lv_obj_set_height(ui_Home_Logo, LV_SIZE_CONTENT);    /// 112
    lv_obj_set_align(ui_Home_Logo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Home_Logo, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Home_Logo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Screen1_Label1 = lv_label_create(ui_Home);
    lv_obj_set_width(ui_Screen1_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen1_Label1, 0);
    lv_obj_set_y(ui_Screen1_Label1, 20);
    lv_obj_set_align(ui_Screen1_Label1, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Screen1_Label1, "MRRVWQB");
    lv_obj_set_style_text_color(ui_Screen1_Label1, lv_color_hex(0xD1D0D0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen1_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Screen1_Label1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Screen1_Label1, &ui_font_arialbd, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_boardStatusLabel = lv_label_create(ui_Home);
    lv_obj_set_width(ui_boardStatusLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_boardStatusLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_boardStatusLabel, 0);
    lv_obj_set_y(ui_boardStatusLabel, 60);
    lv_obj_set_align(ui_boardStatusLabel, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_boardStatusLabel, "23.4  C");
    lv_obj_set_style_text_color(ui_boardStatusLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_boardStatusLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_boardStatusLabel, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_uptimeLabel = lv_label_create(ui_Home);
    lv_obj_set_width(ui_uptimeLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_uptimeLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_uptimeLabel, 0);
    lv_obj_set_y(ui_uptimeLabel, 80);
    lv_obj_set_align(ui_uptimeLabel, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_uptimeLabel, "5d 7h 56' 32''");
    lv_obj_set_style_text_color(ui_uptimeLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_uptimeLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_uptimeLabel, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dateTimeLabel = lv_label_create(ui_Home);
    lv_obj_set_width(ui_dateTimeLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_dateTimeLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_dateTimeLabel, 0);
    lv_obj_set_y(ui_dateTimeLabel, 100);
    lv_obj_set_align(ui_dateTimeLabel, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_dateTimeLabel, "18:54 22/01/2019 UDT");
    lv_obj_set_style_text_color(ui_dateTimeLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_dateTimeLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_dateTimeLabel, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

}
void ui_VPNSTATUS_screen_init(void)
{
    ui_VPNSTATUS = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_VPNSTATUS, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_VPNSTATUS, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_VPNSTATUS, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_VPNSTATUS, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_VPNSTATUS, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_VPNSTATUS_Logo = lv_img_create(ui_VPNSTATUS);
    lv_img_set_src(ui_VPNSTATUS_Logo, &ui_img_vpn_png);
    lv_obj_set_width(ui_VPNSTATUS_Logo, LV_SIZE_CONTENT);   /// 46
    lv_obj_set_height(ui_VPNSTATUS_Logo, LV_SIZE_CONTENT);    /// 61
    lv_obj_set_x(ui_VPNSTATUS_Logo, 29);
    lv_obj_set_y(ui_VPNSTATUS_Logo, 7);
    lv_obj_set_align(ui_VPNSTATUS_Logo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_VPNSTATUS_Logo, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_VPNSTATUS_Logo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_VPNSTATUS_StatusImage = lv_img_create(ui_VPNSTATUS);
    lv_img_set_src(ui_VPNSTATUS_StatusImage, &ui_img_status_tree_png);
    lv_obj_set_width(ui_VPNSTATUS_StatusImage, LV_SIZE_CONTENT);   /// 15
    lv_obj_set_height(ui_VPNSTATUS_StatusImage, LV_SIZE_CONTENT);    /// 98
    lv_obj_set_x(ui_VPNSTATUS_StatusImage, -49);
    lv_obj_set_y(ui_VPNSTATUS_StatusImage, -7);
    lv_obj_set_align(ui_VPNSTATUS_StatusImage, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_VPNSTATUS_StatusImage, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_VPNSTATUS_StatusImage, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_VPNSTATUS_Uplink_Label = lv_label_create(ui_VPNSTATUS);
    lv_obj_set_width(ui_VPNSTATUS_Uplink_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_VPNSTATUS_Uplink_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_VPNSTATUS_Uplink_Label, 30);
    lv_obj_set_y(ui_VPNSTATUS_Uplink_Label, 9);
    lv_label_set_text(ui_VPNSTATUS_Uplink_Label, "Physical Uplink");
    lv_obj_set_style_text_color(ui_VPNSTATUS_Uplink_Label, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_VPNSTATUS_Uplink_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_VPNSTATUS_Uplink_Label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_VPNSTATUS_Uplink_Fail = lv_img_create(ui_VPNSTATUS);
    lv_img_set_src(ui_VPNSTATUS_Uplink_Fail, &ui_img_status_fail_png);
    lv_obj_set_width(ui_VPNSTATUS_Uplink_Fail, LV_SIZE_CONTENT);   /// 15
    lv_obj_set_height(ui_VPNSTATUS_Uplink_Fail, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_x(ui_VPNSTATUS_Uplink_Fail, -49);
    lv_obj_set_y(ui_VPNSTATUS_Uplink_Fail, -49);
    lv_obj_set_align(ui_VPNSTATUS_Uplink_Fail, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_VPNSTATUS_Uplink_Fail, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_VPNSTATUS_Uplink_Fail, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_VPNSTATUS_Uplink_Pass = lv_img_create(ui_VPNSTATUS);
    lv_img_set_src(ui_VPNSTATUS_Uplink_Pass, &ui_img_status_pass_png);
    lv_obj_set_width(ui_VPNSTATUS_Uplink_Pass, LV_SIZE_CONTENT);   /// 15
    lv_obj_set_height(ui_VPNSTATUS_Uplink_Pass, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_x(ui_VPNSTATUS_Uplink_Pass, -49);
    lv_obj_set_y(ui_VPNSTATUS_Uplink_Pass, -49);
    lv_obj_set_align(ui_VPNSTATUS_Uplink_Pass, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_VPNSTATUS_Uplink_Pass, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_VPNSTATUS_Uplink_Pass, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_VPNSTATUS_IP_Label = lv_label_create(ui_VPNSTATUS);
    lv_obj_set_width(ui_VPNSTATUS_IP_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_VPNSTATUS_IP_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_VPNSTATUS_IP_Label, 30);
    lv_obj_set_y(ui_VPNSTATUS_IP_Label, 30);
    lv_label_set_text(ui_VPNSTATUS_IP_Label, "IP Address");
    lv_obj_set_style_text_color(ui_VPNSTATUS_IP_Label, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_VPNSTATUS_IP_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_VPNSTATUS_IP_Label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_VPNSTATUS_IP_Fail = lv_img_create(ui_VPNSTATUS);
    lv_img_set_src(ui_VPNSTATUS_IP_Fail, &ui_img_status_fail_png);
    lv_obj_set_width(ui_VPNSTATUS_IP_Fail, LV_SIZE_CONTENT);   /// 15
    lv_obj_set_height(ui_VPNSTATUS_IP_Fail, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_x(ui_VPNSTATUS_IP_Fail, -49);
    lv_obj_set_y(ui_VPNSTATUS_IP_Fail, -28);
    lv_obj_set_align(ui_VPNSTATUS_IP_Fail, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_VPNSTATUS_IP_Fail, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_VPNSTATUS_IP_Fail, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_VPNSTATUS_IP_Pass = lv_img_create(ui_VPNSTATUS);
    lv_img_set_src(ui_VPNSTATUS_IP_Pass, &ui_img_status_pass_png);
    lv_obj_set_width(ui_VPNSTATUS_IP_Pass, LV_SIZE_CONTENT);   /// 15
    lv_obj_set_height(ui_VPNSTATUS_IP_Pass, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_x(ui_VPNSTATUS_IP_Pass, -49);
    lv_obj_set_y(ui_VPNSTATUS_IP_Pass, -28);
    lv_obj_set_align(ui_VPNSTATUS_IP_Pass, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_VPNSTATUS_IP_Pass, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_VPNSTATUS_IP_Pass, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_VPNSTATUS_Gateway_Label = lv_label_create(ui_VPNSTATUS);
    lv_obj_set_width(ui_VPNSTATUS_Gateway_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_VPNSTATUS_Gateway_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_VPNSTATUS_Gateway_Label, 30);
    lv_obj_set_y(ui_VPNSTATUS_Gateway_Label, 51);
    lv_label_set_text(ui_VPNSTATUS_Gateway_Label, "Gateway");
    lv_obj_set_style_text_color(ui_VPNSTATUS_Gateway_Label, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_VPNSTATUS_Gateway_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_VPNSTATUS_Gateway_Label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_VPNSTATUS_Gateway_Fail = lv_img_create(ui_VPNSTATUS);
    lv_img_set_src(ui_VPNSTATUS_Gateway_Fail, &ui_img_status_fail_png);
    lv_obj_set_width(ui_VPNSTATUS_Gateway_Fail, LV_SIZE_CONTENT);   /// 15
    lv_obj_set_height(ui_VPNSTATUS_Gateway_Fail, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_x(ui_VPNSTATUS_Gateway_Fail, -49);
    lv_obj_set_y(ui_VPNSTATUS_Gateway_Fail, -7);
    lv_obj_set_align(ui_VPNSTATUS_Gateway_Fail, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_VPNSTATUS_Gateway_Fail, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_VPNSTATUS_Gateway_Fail, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_VPNSTATUS_Gateway_Pass = lv_img_create(ui_VPNSTATUS);
    lv_img_set_src(ui_VPNSTATUS_Gateway_Pass, &ui_img_status_pass_png);
    lv_obj_set_width(ui_VPNSTATUS_Gateway_Pass, LV_SIZE_CONTENT);   /// 15
    lv_obj_set_height(ui_VPNSTATUS_Gateway_Pass, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_x(ui_VPNSTATUS_Gateway_Pass, -49);
    lv_obj_set_y(ui_VPNSTATUS_Gateway_Pass, -7);
    lv_obj_set_align(ui_VPNSTATUS_Gateway_Pass, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_VPNSTATUS_Gateway_Pass, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_VPNSTATUS_Gateway_Pass, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_VPNSTATUS_Internet_Label = lv_label_create(ui_VPNSTATUS);
    lv_obj_set_width(ui_VPNSTATUS_Internet_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_VPNSTATUS_Internet_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_VPNSTATUS_Internet_Label, 30);
    lv_obj_set_y(ui_VPNSTATUS_Internet_Label, 72);
    lv_label_set_text(ui_VPNSTATUS_Internet_Label, "Internet");
    lv_obj_set_style_text_color(ui_VPNSTATUS_Internet_Label, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_VPNSTATUS_Internet_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_VPNSTATUS_Internet_Label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_VPNSTATUS_Internet_Fail = lv_img_create(ui_VPNSTATUS);
    lv_img_set_src(ui_VPNSTATUS_Internet_Fail, &ui_img_status_fail_png);
    lv_obj_set_width(ui_VPNSTATUS_Internet_Fail, LV_SIZE_CONTENT);   /// 15
    lv_obj_set_height(ui_VPNSTATUS_Internet_Fail, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_x(ui_VPNSTATUS_Internet_Fail, -49);
    lv_obj_set_y(ui_VPNSTATUS_Internet_Fail, 14);
    lv_obj_set_align(ui_VPNSTATUS_Internet_Fail, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_VPNSTATUS_Internet_Fail, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_VPNSTATUS_Internet_Fail, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_VPNSTATUS_Internet_Pass = lv_img_create(ui_VPNSTATUS);
    lv_img_set_src(ui_VPNSTATUS_Internet_Pass, &ui_img_status_pass_png);
    lv_obj_set_width(ui_VPNSTATUS_Internet_Pass, LV_SIZE_CONTENT);   /// 15
    lv_obj_set_height(ui_VPNSTATUS_Internet_Pass, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_x(ui_VPNSTATUS_Internet_Pass, -49);
    lv_obj_set_y(ui_VPNSTATUS_Internet_Pass, 14);
    lv_obj_set_align(ui_VPNSTATUS_Internet_Pass, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_VPNSTATUS_Internet_Pass, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_VPNSTATUS_Internet_Pass, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_VPNSTATUS_VPN_Label = lv_label_create(ui_VPNSTATUS);
    lv_obj_set_width(ui_VPNSTATUS_VPN_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_VPNSTATUS_VPN_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_VPNSTATUS_VPN_Label, 30);
    lv_obj_set_y(ui_VPNSTATUS_VPN_Label, 93);
    lv_label_set_text(ui_VPNSTATUS_VPN_Label, "VPN ports");
    lv_obj_set_style_text_color(ui_VPNSTATUS_VPN_Label, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_VPNSTATUS_VPN_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_VPNSTATUS_VPN_Label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_VPNSTATUS_VPN_Fail = lv_img_create(ui_VPNSTATUS);
    lv_img_set_src(ui_VPNSTATUS_VPN_Fail, &ui_img_status_fail_png);
    lv_obj_set_width(ui_VPNSTATUS_VPN_Fail, LV_SIZE_CONTENT);   /// 15
    lv_obj_set_height(ui_VPNSTATUS_VPN_Fail, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_x(ui_VPNSTATUS_VPN_Fail, -49);
    lv_obj_set_y(ui_VPNSTATUS_VPN_Fail, 35);
    lv_obj_set_align(ui_VPNSTATUS_VPN_Fail, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_VPNSTATUS_VPN_Fail, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_VPNSTATUS_VPN_Fail, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_VPNSTATUS_VPN_Pass = lv_img_create(ui_VPNSTATUS);
    lv_img_set_src(ui_VPNSTATUS_VPN_Pass, &ui_img_status_pass_png);
    lv_obj_set_width(ui_VPNSTATUS_VPN_Pass, LV_SIZE_CONTENT);   /// 15
    lv_obj_set_height(ui_VPNSTATUS_VPN_Pass, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_x(ui_VPNSTATUS_VPN_Pass, -49);
    lv_obj_set_y(ui_VPNSTATUS_VPN_Pass, 35);
    lv_obj_set_align(ui_VPNSTATUS_VPN_Pass, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_VPNSTATUS_VPN_Pass, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_VPNSTATUS_VPN_Pass, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_VPNSTATUS_BarDown = lv_obj_create(ui_VPNSTATUS);
    lv_obj_set_width(ui_VPNSTATUS_BarDown, 128);
    lv_obj_set_height(ui_VPNSTATUS_BarDown, 16);
    lv_obj_set_x(ui_VPNSTATUS_BarDown, 0);
    lv_obj_set_y(ui_VPNSTATUS_BarDown, 56);
    lv_obj_set_align(ui_VPNSTATUS_BarDown, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_VPNSTATUS_BarDown, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_VPNSTATUS_BarDown, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_VPNSTATUS_BarDown, lv_color_hex(0x525552), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_VPNSTATUS_BarDown, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_VPNSTATUS_BarDown, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_VPNSTATUS_RowLeft = lv_img_create(ui_VPNSTATUS);
    lv_img_set_src(ui_VPNSTATUS_RowLeft, &ui_img_row_l_png);
    lv_obj_set_width(ui_VPNSTATUS_RowLeft, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_VPNSTATUS_RowLeft, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_VPNSTATUS_RowLeft, 3);
    lv_obj_set_y(ui_VPNSTATUS_RowLeft, 115);
    lv_obj_add_flag(ui_VPNSTATUS_RowLeft, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_VPNSTATUS_RowLeft, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_VPNSTATUS_RowRight = lv_img_create(ui_VPNSTATUS);
    lv_img_set_src(ui_VPNSTATUS_RowRight, &ui_img_row_r_png);
    lv_obj_set_width(ui_VPNSTATUS_RowRight, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_VPNSTATUS_RowRight, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_VPNSTATUS_RowRight, 113);
    lv_obj_set_y(ui_VPNSTATUS_RowRight, 115);
    lv_obj_add_flag(ui_VPNSTATUS_RowRight, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_VPNSTATUS_RowRight, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}
void ui_WANIPCONFIG_screen_init(void)
{
    ui_WANIPCONFIG = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_WANIPCONFIG, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_WANIPCONFIG, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_WANIPCONFIG, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Logo = lv_img_create(ui_WANIPCONFIG);
    lv_img_set_src(ui_WANIPCONFIG_Logo, &ui_img_network_png);
    lv_obj_set_width(ui_WANIPCONFIG_Logo, LV_SIZE_CONTENT);   /// 20
    lv_obj_set_height(ui_WANIPCONFIG_Logo, LV_SIZE_CONTENT);    /// 16
    lv_obj_set_x(ui_WANIPCONFIG_Logo, -49);
    lv_obj_set_y(ui_WANIPCONFIG_Logo, -53);
    lv_obj_set_align(ui_WANIPCONFIG_Logo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WANIPCONFIG_Logo, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WANIPCONFIG_Logo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_WANIPCONFIG_PageLabel = lv_label_create(ui_WANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_PageLabel, 50);
    lv_obj_set_height(ui_WANIPCONFIG_PageLabel, 13);
    lv_obj_set_x(ui_WANIPCONFIG_PageLabel, 29);
    lv_obj_set_y(ui_WANIPCONFIG_PageLabel, 4);
    lv_label_set_text(ui_WANIPCONFIG_PageLabel, "WAN");
    lv_obj_set_style_text_color(ui_WANIPCONFIG_PageLabel, lv_color_hex(0xB4B2B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WANIPCONFIG_PageLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_WANIPCONFIG_PageLabel, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WANIPCONFIG_PageLabel, &ui_font_arialbd, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_BarUp = lv_obj_create(ui_WANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_BarUp, 120);
    lv_obj_set_height(ui_WANIPCONFIG_BarUp, 1);
    lv_obj_set_x(ui_WANIPCONFIG_BarUp, 0);
    lv_obj_set_y(ui_WANIPCONFIG_BarUp, -43);
    lv_obj_set_align(ui_WANIPCONFIG_BarUp, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_WANIPCONFIG_BarUp, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_WANIPCONFIG_BarUp, lv_color_hex(0xB4B2B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_WANIPCONFIG_BarUp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_WANIPCONFIG_BarUp, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_DHCP_Label = lv_label_create(ui_WANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_DHCP_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WANIPCONFIG_DHCP_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WANIPCONFIG_DHCP_Label, 3);
    lv_obj_set_y(ui_WANIPCONFIG_DHCP_Label, 28);
    lv_label_set_text(ui_WANIPCONFIG_DHCP_Label, "DHCP Client:");
    lv_obj_set_style_text_color(ui_WANIPCONFIG_DHCP_Label, lv_color_hex(0x6A6D62), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WANIPCONFIG_DHCP_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WANIPCONFIG_DHCP_Label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_DHCP_OFF = lv_img_create(ui_WANIPCONFIG);
    lv_img_set_src(ui_WANIPCONFIG_DHCP_OFF, &ui_img_sel_off_png);
    lv_obj_set_width(ui_WANIPCONFIG_DHCP_OFF, LV_SIZE_CONTENT);   /// 25
    lv_obj_set_height(ui_WANIPCONFIG_DHCP_OFF, LV_SIZE_CONTENT);    /// 14
    lv_obj_set_x(ui_WANIPCONFIG_DHCP_OFF, 41);
    lv_obj_set_y(ui_WANIPCONFIG_DHCP_OFF, -29);
    lv_obj_set_align(ui_WANIPCONFIG_DHCP_OFF, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WANIPCONFIG_DHCP_OFF, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WANIPCONFIG_DHCP_OFF, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_WANIPCONFIG_DHCP_ON = lv_img_create(ui_WANIPCONFIG);
    lv_img_set_src(ui_WANIPCONFIG_DHCP_ON, &ui_img_sel_on_png);
    lv_obj_set_width(ui_WANIPCONFIG_DHCP_ON, LV_SIZE_CONTENT);   /// 25
    lv_obj_set_height(ui_WANIPCONFIG_DHCP_ON, LV_SIZE_CONTENT);    /// 14
    lv_obj_set_x(ui_WANIPCONFIG_DHCP_ON, 41);
    lv_obj_set_y(ui_WANIPCONFIG_DHCP_ON, -29);
    lv_obj_set_align(ui_WANIPCONFIG_DHCP_ON, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WANIPCONFIG_DHCP_ON, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WANIPCONFIG_DHCP_ON, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_WANIPCONFIG_IP_Label = lv_label_create(ui_WANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_IP_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WANIPCONFIG_IP_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WANIPCONFIG_IP_Label, 3);
    lv_obj_set_y(ui_WANIPCONFIG_IP_Label, 47);
    lv_label_set_text(ui_WANIPCONFIG_IP_Label, "IP Address:");
    lv_obj_set_style_text_color(ui_WANIPCONFIG_IP_Label, lv_color_hex(0x6A6D62), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WANIPCONFIG_IP_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WANIPCONFIG_IP_Label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_IP_Value = lv_label_create(ui_WANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_IP_Value, 132);
    lv_obj_set_height(ui_WANIPCONFIG_IP_Value, 15);
    lv_obj_set_x(ui_WANIPCONFIG_IP_Value, 3);
    lv_obj_set_y(ui_WANIPCONFIG_IP_Value, 62);
    lv_label_set_text(ui_WANIPCONFIG_IP_Value, "255.255.255.255/24");
    lv_obj_set_style_text_color(ui_WANIPCONFIG_IP_Value, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WANIPCONFIG_IP_Value, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WANIPCONFIG_IP_Value, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Gateway_Label = lv_label_create(ui_WANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_Gateway_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WANIPCONFIG_Gateway_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WANIPCONFIG_Gateway_Label, 3);
    lv_obj_set_y(ui_WANIPCONFIG_Gateway_Label, 79);
    lv_label_set_text(ui_WANIPCONFIG_Gateway_Label, "Gateway:");
    lv_obj_set_style_text_color(ui_WANIPCONFIG_Gateway_Label, lv_color_hex(0x6A6D62), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WANIPCONFIG_Gateway_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WANIPCONFIG_Gateway_Label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Label3 = lv_label_create(ui_WANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_Label3, 132);
    lv_obj_set_height(ui_WANIPCONFIG_Label3, 15);
    lv_obj_set_x(ui_WANIPCONFIG_Label3, 3);
    lv_obj_set_y(ui_WANIPCONFIG_Label3, 95);
    lv_label_set_text(ui_WANIPCONFIG_Label3, "255.255.255.255");
    lv_obj_set_style_text_color(ui_WANIPCONFIG_Label3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WANIPCONFIG_Label3, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_BarDown = lv_obj_create(ui_WANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_BarDown, 128);
    lv_obj_set_height(ui_WANIPCONFIG_BarDown, 16);
    lv_obj_set_x(ui_WANIPCONFIG_BarDown, 0);
    lv_obj_set_y(ui_WANIPCONFIG_BarDown, 56);
    lv_obj_set_align(ui_WANIPCONFIG_BarDown, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_WANIPCONFIG_BarDown, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_WANIPCONFIG_BarDown, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_WANIPCONFIG_BarDown, lv_color_hex(0x545454), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_WANIPCONFIG_BarDown, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_WANIPCONFIG_BarDown, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_RowLeft = lv_img_create(ui_WANIPCONFIG);
    lv_img_set_src(ui_WANIPCONFIG_RowLeft, &ui_img_row_l_png);
    lv_obj_set_width(ui_WANIPCONFIG_RowLeft, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_WANIPCONFIG_RowLeft, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_WANIPCONFIG_RowLeft, 3);
    lv_obj_set_y(ui_WANIPCONFIG_RowLeft, 115);
    lv_obj_add_flag(ui_WANIPCONFIG_RowLeft, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WANIPCONFIG_RowLeft, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_WANIPCONFIG_RowDown = lv_img_create(ui_WANIPCONFIG);
    lv_img_set_src(ui_WANIPCONFIG_RowDown, &ui_img_row_d_png);
    lv_obj_set_width(ui_WANIPCONFIG_RowDown, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_WANIPCONFIG_RowDown, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_WANIPCONFIG_RowDown, 59);
    lv_obj_set_y(ui_WANIPCONFIG_RowDown, 115);
    lv_obj_add_flag(ui_WANIPCONFIG_RowDown, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WANIPCONFIG_RowDown, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_WANIPCONFIG_RowRight = lv_img_create(ui_WANIPCONFIG);
    lv_img_set_src(ui_WANIPCONFIG_RowRight, &ui_img_row_r_png);
    lv_obj_set_width(ui_WANIPCONFIG_RowRight, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_WANIPCONFIG_RowRight, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_WANIPCONFIG_RowRight, 113);
    lv_obj_set_y(ui_WANIPCONFIG_RowRight, 115);
    lv_obj_add_flag(ui_WANIPCONFIG_RowRight, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WANIPCONFIG_RowRight, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}
void ui_LANIPCONFIG_screen_init(void)
{
    ui_LANIPCONFIG = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_LANIPCONFIG, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_LANIPCONFIG, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_LANIPCONFIG, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LANIPCONFIG_Logo = lv_img_create(ui_LANIPCONFIG);
    lv_img_set_src(ui_LANIPCONFIG_Logo, &ui_img_network_png);
    lv_obj_set_width(ui_LANIPCONFIG_Logo, LV_SIZE_CONTENT);   /// 20
    lv_obj_set_height(ui_LANIPCONFIG_Logo, LV_SIZE_CONTENT);    /// 16
    lv_obj_set_x(ui_LANIPCONFIG_Logo, -49);
    lv_obj_set_y(ui_LANIPCONFIG_Logo, -53);
    lv_obj_set_align(ui_LANIPCONFIG_Logo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_LANIPCONFIG_Logo, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_LANIPCONFIG_Logo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LANIPCONFIG_PageLabel = lv_label_create(ui_LANIPCONFIG);
    lv_obj_set_width(ui_LANIPCONFIG_PageLabel, 50);
    lv_obj_set_height(ui_LANIPCONFIG_PageLabel, 13);
    lv_obj_set_x(ui_LANIPCONFIG_PageLabel, 29);
    lv_obj_set_y(ui_LANIPCONFIG_PageLabel, 4);
    lv_label_set_text(ui_LANIPCONFIG_PageLabel, "LAN");
    lv_obj_set_style_text_color(ui_LANIPCONFIG_PageLabel, lv_color_hex(0xB4B2B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LANIPCONFIG_PageLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_LANIPCONFIG_PageLabel, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LANIPCONFIG_PageLabel, &ui_font_arialbd, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LANIPCONFIG_BarUp = lv_obj_create(ui_LANIPCONFIG);
    lv_obj_set_width(ui_LANIPCONFIG_BarUp, 120);
    lv_obj_set_height(ui_LANIPCONFIG_BarUp, 1);
    lv_obj_set_x(ui_LANIPCONFIG_BarUp, 0);
    lv_obj_set_y(ui_LANIPCONFIG_BarUp, -43);
    lv_obj_set_align(ui_LANIPCONFIG_BarUp, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_LANIPCONFIG_BarUp, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_LANIPCONFIG_BarUp, lv_color_hex(0xB4B2B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_LANIPCONFIG_BarUp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_LANIPCONFIG_BarUp, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LANIPCONFIG_DHCP_Label = lv_label_create(ui_LANIPCONFIG);
    lv_obj_set_width(ui_LANIPCONFIG_DHCP_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LANIPCONFIG_DHCP_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LANIPCONFIG_DHCP_Label, 3);
    lv_obj_set_y(ui_LANIPCONFIG_DHCP_Label, 28);
    lv_label_set_text(ui_LANIPCONFIG_DHCP_Label, "DHCP Server:");
    lv_obj_set_style_text_color(ui_LANIPCONFIG_DHCP_Label, lv_color_hex(0x6A6D62), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LANIPCONFIG_DHCP_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LANIPCONFIG_DHCP_Label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LANIPCONFIG_DHCP_OFF = lv_img_create(ui_LANIPCONFIG);
    lv_img_set_src(ui_LANIPCONFIG_DHCP_OFF, &ui_img_sel_off_png);
    lv_obj_set_width(ui_LANIPCONFIG_DHCP_OFF, LV_SIZE_CONTENT);   /// 25
    lv_obj_set_height(ui_LANIPCONFIG_DHCP_OFF, LV_SIZE_CONTENT);    /// 14
    lv_obj_set_x(ui_LANIPCONFIG_DHCP_OFF, 41);
    lv_obj_set_y(ui_LANIPCONFIG_DHCP_OFF, -29);
    lv_obj_set_align(ui_LANIPCONFIG_DHCP_OFF, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_LANIPCONFIG_DHCP_OFF, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_LANIPCONFIG_DHCP_OFF, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LANIPCONFIG_DHCP_ON = lv_img_create(ui_LANIPCONFIG);
    lv_img_set_src(ui_LANIPCONFIG_DHCP_ON, &ui_img_sel_on_png);
    lv_obj_set_width(ui_LANIPCONFIG_DHCP_ON, LV_SIZE_CONTENT);   /// 25
    lv_obj_set_height(ui_LANIPCONFIG_DHCP_ON, LV_SIZE_CONTENT);    /// 14
    lv_obj_set_x(ui_LANIPCONFIG_DHCP_ON, 41);
    lv_obj_set_y(ui_LANIPCONFIG_DHCP_ON, -29);
    lv_obj_set_align(ui_LANIPCONFIG_DHCP_ON, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_LANIPCONFIG_DHCP_ON, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_LANIPCONFIG_DHCP_ON, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LANIPCONFIG_IP_Label = lv_label_create(ui_LANIPCONFIG);
    lv_obj_set_width(ui_LANIPCONFIG_IP_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LANIPCONFIG_IP_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LANIPCONFIG_IP_Label, 3);
    lv_obj_set_y(ui_LANIPCONFIG_IP_Label, 47);
    lv_label_set_text(ui_LANIPCONFIG_IP_Label, "IP Address:");
    lv_obj_set_style_text_color(ui_LANIPCONFIG_IP_Label, lv_color_hex(0x6A6D62), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LANIPCONFIG_IP_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LANIPCONFIG_IP_Label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Label10 = lv_label_create(ui_LANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_Label10, 132);
    lv_obj_set_height(ui_WANIPCONFIG_Label10, 15);
    lv_obj_set_x(ui_WANIPCONFIG_Label10, 3);
    lv_obj_set_y(ui_WANIPCONFIG_Label10, 62);
    lv_label_set_text(ui_WANIPCONFIG_Label10, "255.255.255.255/24");
    lv_obj_set_style_text_color(ui_WANIPCONFIG_Label10, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WANIPCONFIG_Label10, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LANIPCONFIG_BarDown = lv_obj_create(ui_LANIPCONFIG);
    lv_obj_set_width(ui_LANIPCONFIG_BarDown, 128);
    lv_obj_set_height(ui_LANIPCONFIG_BarDown, 16);
    lv_obj_set_x(ui_LANIPCONFIG_BarDown, 0);
    lv_obj_set_y(ui_LANIPCONFIG_BarDown, 56);
    lv_obj_set_align(ui_LANIPCONFIG_BarDown, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_LANIPCONFIG_BarDown, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_LANIPCONFIG_BarDown, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_LANIPCONFIG_BarDown, lv_color_hex(0x545454), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_LANIPCONFIG_BarDown, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_LANIPCONFIG_BarDown, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LANIPCONFIG_RowLeft = lv_img_create(ui_LANIPCONFIG);
    lv_img_set_src(ui_LANIPCONFIG_RowLeft, &ui_img_row_l_png);
    lv_obj_set_width(ui_LANIPCONFIG_RowLeft, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_LANIPCONFIG_RowLeft, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_LANIPCONFIG_RowLeft, 3);
    lv_obj_set_y(ui_LANIPCONFIG_RowLeft, 115);
    lv_obj_add_flag(ui_LANIPCONFIG_RowLeft, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_LANIPCONFIG_RowLeft, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LANIPCONFIG_RowDown = lv_img_create(ui_LANIPCONFIG);
    lv_img_set_src(ui_LANIPCONFIG_RowDown, &ui_img_row_d_png);
    lv_obj_set_width(ui_LANIPCONFIG_RowDown, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_LANIPCONFIG_RowDown, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_LANIPCONFIG_RowDown, 59);
    lv_obj_set_y(ui_LANIPCONFIG_RowDown, 115);
    lv_obj_add_flag(ui_LANIPCONFIG_RowDown, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_LANIPCONFIG_RowDown, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LANIPCONFIG_RowRight = lv_img_create(ui_LANIPCONFIG);
    lv_img_set_src(ui_LANIPCONFIG_RowRight, &ui_img_row_r_png);
    lv_obj_set_width(ui_LANIPCONFIG_RowRight, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_LANIPCONFIG_RowRight, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_LANIPCONFIG_RowRight, 113);
    lv_obj_set_y(ui_LANIPCONFIG_RowRight, 115);
    lv_obj_add_flag(ui_LANIPCONFIG_RowRight, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_LANIPCONFIG_RowRight, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}
void ui_WLANIPCONFIG_screen_init(void)
{
    ui_WLANIPCONFIG = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_WLANIPCONFIG, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_WLANIPCONFIG, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_WLANIPCONFIG, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WLANIPCONFIG_Logo = lv_img_create(ui_WLANIPCONFIG);
    lv_img_set_src(ui_WLANIPCONFIG_Logo, &ui_img_network_png);
    lv_obj_set_width(ui_WLANIPCONFIG_Logo, LV_SIZE_CONTENT);   /// 20
    lv_obj_set_height(ui_WLANIPCONFIG_Logo, LV_SIZE_CONTENT);    /// 16
    lv_obj_set_x(ui_WLANIPCONFIG_Logo, -49);
    lv_obj_set_y(ui_WLANIPCONFIG_Logo, -53);
    lv_obj_set_align(ui_WLANIPCONFIG_Logo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WLANIPCONFIG_Logo, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WLANIPCONFIG_Logo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_WLANIPCONFIG_PageLabel = lv_label_create(ui_WLANIPCONFIG);
    lv_obj_set_width(ui_WLANIPCONFIG_PageLabel, 50);
    lv_obj_set_height(ui_WLANIPCONFIG_PageLabel, 13);
    lv_obj_set_x(ui_WLANIPCONFIG_PageLabel, 29);
    lv_obj_set_y(ui_WLANIPCONFIG_PageLabel, 4);
    lv_label_set_text(ui_WLANIPCONFIG_PageLabel, "Wi-Fi");
    lv_obj_set_style_text_color(ui_WLANIPCONFIG_PageLabel, lv_color_hex(0xB4B2B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WLANIPCONFIG_PageLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_WLANIPCONFIG_PageLabel, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WLANIPCONFIG_PageLabel, &ui_font_arialbd, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WLANIPCONFIG_BarUp = lv_obj_create(ui_WLANIPCONFIG);
    lv_obj_set_width(ui_WLANIPCONFIG_BarUp, 120);
    lv_obj_set_height(ui_WLANIPCONFIG_BarUp, 1);
    lv_obj_set_x(ui_WLANIPCONFIG_BarUp, 0);
    lv_obj_set_y(ui_WLANIPCONFIG_BarUp, -43);
    lv_obj_set_align(ui_WLANIPCONFIG_BarUp, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_WLANIPCONFIG_BarUp, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_WLANIPCONFIG_BarUp, lv_color_hex(0xB4B2B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_WLANIPCONFIG_BarUp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_WLANIPCONFIG_BarUp, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WLANIPCONFIG_DHCP_Label = lv_label_create(ui_WLANIPCONFIG);
    lv_obj_set_width(ui_WLANIPCONFIG_DHCP_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WLANIPCONFIG_DHCP_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WLANIPCONFIG_DHCP_Label, 3);
    lv_obj_set_y(ui_WLANIPCONFIG_DHCP_Label, 28);
    lv_label_set_text(ui_WLANIPCONFIG_DHCP_Label, "DHCP Client:");
    lv_obj_set_style_text_color(ui_WLANIPCONFIG_DHCP_Label, lv_color_hex(0x6A6D62), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WLANIPCONFIG_DHCP_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WLANIPCONFIG_DHCP_Label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WLANIPCONFIG_DHCP_OFF = lv_img_create(ui_WLANIPCONFIG);
    lv_img_set_src(ui_WLANIPCONFIG_DHCP_OFF, &ui_img_sel_off_png);
    lv_obj_set_width(ui_WLANIPCONFIG_DHCP_OFF, LV_SIZE_CONTENT);   /// 25
    lv_obj_set_height(ui_WLANIPCONFIG_DHCP_OFF, LV_SIZE_CONTENT);    /// 14
    lv_obj_set_x(ui_WLANIPCONFIG_DHCP_OFF, 41);
    lv_obj_set_y(ui_WLANIPCONFIG_DHCP_OFF, -29);
    lv_obj_set_align(ui_WLANIPCONFIG_DHCP_OFF, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WLANIPCONFIG_DHCP_OFF, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WLANIPCONFIG_DHCP_OFF, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_WLANIPCONFIG_DHCP_ON = lv_img_create(ui_WLANIPCONFIG);
    lv_img_set_src(ui_WLANIPCONFIG_DHCP_ON, &ui_img_sel_on_png);
    lv_obj_set_width(ui_WLANIPCONFIG_DHCP_ON, LV_SIZE_CONTENT);   /// 25
    lv_obj_set_height(ui_WLANIPCONFIG_DHCP_ON, LV_SIZE_CONTENT);    /// 14
    lv_obj_set_x(ui_WLANIPCONFIG_DHCP_ON, 41);
    lv_obj_set_y(ui_WLANIPCONFIG_DHCP_ON, -29);
    lv_obj_set_align(ui_WLANIPCONFIG_DHCP_ON, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WLANIPCONFIG_DHCP_ON, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WLANIPCONFIG_DHCP_ON, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_WLANIPCONFIG_ip_Label = lv_label_create(ui_WLANIPCONFIG);
    lv_obj_set_width(ui_WLANIPCONFIG_ip_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WLANIPCONFIG_ip_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WLANIPCONFIG_ip_Label, 3);
    lv_obj_set_y(ui_WLANIPCONFIG_ip_Label, 47);
    lv_label_set_text(ui_WLANIPCONFIG_ip_Label, "IP Address:");
    lv_obj_set_style_text_color(ui_WLANIPCONFIG_ip_Label, lv_color_hex(0x6A6D62), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WLANIPCONFIG_ip_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WLANIPCONFIG_ip_Label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Label6 = lv_label_create(ui_WLANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_Label6, 132);
    lv_obj_set_height(ui_WANIPCONFIG_Label6, 15);
    lv_obj_set_x(ui_WANIPCONFIG_Label6, 3);
    lv_obj_set_y(ui_WANIPCONFIG_Label6, 62);
    lv_label_set_text(ui_WANIPCONFIG_Label6, "255.255.255.255/24");
    lv_obj_set_style_text_color(ui_WANIPCONFIG_Label6, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WANIPCONFIG_Label6, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WLANIPCONFIG_Gateway_Label = lv_label_create(ui_WLANIPCONFIG);
    lv_obj_set_width(ui_WLANIPCONFIG_Gateway_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WLANIPCONFIG_Gateway_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WLANIPCONFIG_Gateway_Label, 3);
    lv_obj_set_y(ui_WLANIPCONFIG_Gateway_Label, 79);
    lv_label_set_text(ui_WLANIPCONFIG_Gateway_Label, "Gateway:");
    lv_obj_set_style_text_color(ui_WLANIPCONFIG_Gateway_Label, lv_color_hex(0x6A6D62), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WLANIPCONFIG_Gateway_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WLANIPCONFIG_Gateway_Label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Label7 = lv_label_create(ui_WLANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_Label7, 132);
    lv_obj_set_height(ui_WANIPCONFIG_Label7, 15);
    lv_obj_set_x(ui_WANIPCONFIG_Label7, 3);
    lv_obj_set_y(ui_WANIPCONFIG_Label7, 95);
    lv_label_set_text(ui_WANIPCONFIG_Label7, "255.255.255.255");
    lv_obj_set_style_text_color(ui_WANIPCONFIG_Label7, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WANIPCONFIG_Label7, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WLANIPCONFIG_BarDown = lv_obj_create(ui_WLANIPCONFIG);
    lv_obj_set_width(ui_WLANIPCONFIG_BarDown, 128);
    lv_obj_set_height(ui_WLANIPCONFIG_BarDown, 16);
    lv_obj_set_x(ui_WLANIPCONFIG_BarDown, 0);
    lv_obj_set_y(ui_WLANIPCONFIG_BarDown, 56);
    lv_obj_set_align(ui_WLANIPCONFIG_BarDown, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_WLANIPCONFIG_BarDown, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_WLANIPCONFIG_BarDown, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_WLANIPCONFIG_BarDown, lv_color_hex(0x545454), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_WLANIPCONFIG_BarDown, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_WLANIPCONFIG_BarDown, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WLANIPCONFIG_RowLeft = lv_img_create(ui_WLANIPCONFIG);
    lv_img_set_src(ui_WLANIPCONFIG_RowLeft, &ui_img_row_l_png);
    lv_obj_set_width(ui_WLANIPCONFIG_RowLeft, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_WLANIPCONFIG_RowLeft, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_WLANIPCONFIG_RowLeft, 3);
    lv_obj_set_y(ui_WLANIPCONFIG_RowLeft, 115);
    lv_obj_add_flag(ui_WLANIPCONFIG_RowLeft, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WLANIPCONFIG_RowLeft, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_WLANIPCONFIG_RowDown = lv_img_create(ui_WLANIPCONFIG);
    lv_img_set_src(ui_WLANIPCONFIG_RowDown, &ui_img_row_d_png);
    lv_obj_set_width(ui_WLANIPCONFIG_RowDown, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_WLANIPCONFIG_RowDown, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_WLANIPCONFIG_RowDown, 59);
    lv_obj_set_y(ui_WLANIPCONFIG_RowDown, 115);
    lv_obj_add_flag(ui_WLANIPCONFIG_RowDown, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WLANIPCONFIG_RowDown, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_WLANIPCONFIG_RowRight = lv_img_create(ui_WLANIPCONFIG);
    lv_img_set_src(ui_WLANIPCONFIG_RowRight, &ui_img_row_r_png);
    lv_obj_set_width(ui_WLANIPCONFIG_RowRight, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_WLANIPCONFIG_RowRight, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_WLANIPCONFIG_RowRight, 113);
    lv_obj_set_y(ui_WLANIPCONFIG_RowRight, 115);
    lv_obj_add_flag(ui_WLANIPCONFIG_RowRight, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WLANIPCONFIG_RowRight, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Home_screen_init();
    ui_VPNSTATUS_screen_init();
    ui_WANIPCONFIG_screen_init();
    ui_LANIPCONFIG_screen_init();
    ui_WLANIPCONFIG_screen_init();
    lv_disp_load_scr(ui_Home);
}
