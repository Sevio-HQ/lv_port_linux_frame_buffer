// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: sevio_ui_01

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Home;
lv_obj_t * ui_Home_Image1;
lv_obj_t * ui_Home_Image2;
lv_obj_t * ui_Screen1_Label1;
lv_obj_t * ui_boardStatusLabel;
lv_obj_t * ui_uptimeLabel;
lv_obj_t * ui_dateTimeLabel;
lv_obj_t * ui_VPNSTATUS;
lv_obj_t * ui_VPNSTATUS_Image3;
lv_obj_t * ui_VPNSTATUS_Image17;
lv_obj_t * ui_VPNSTATUS_Label1;
lv_obj_t * ui_VPNSTATUS_Label2;
lv_obj_t * ui_VPNSTATUS_Label3;
lv_obj_t * ui_VPNSTATUS_Label4;
lv_obj_t * ui_VPNSTATUS_Label5;
lv_obj_t * ui_VPNSTATUS_Panel3;
lv_obj_t * ui_VPNSTATUS_Image13;
lv_obj_t * ui_VPNSTATUS_Image14;
lv_obj_t * ui_VPNSTATUS_Image18;
lv_obj_t * ui_VPNSTATUS_Image19;
lv_obj_t * ui_WANIPCONFIG;
lv_obj_t * ui_Screen2_Label1;
lv_obj_t * ui_VPNSTATUS_Panel1;
lv_obj_t * ui_WANIPCONFIG_Label1;
lv_obj_t * ui_WANIPCONFIG_Button_RG;
lv_obj_t * ui_WANIPCONFIG_ButtonDN;
lv_obj_t * ui_WANIPCONFIG_Button_LF;
lv_obj_t * ui_WANIPCONFIG_Panel4;
lv_obj_t * ui_WANIPCONFIG_Label11;
lv_obj_t * ui_WANIPCONFIG_Image21;
lv_obj_t * ui_VPNSTATUS_Image1;
lv_obj_t * ui_VPNSTATUS_Image2;
lv_obj_t * ui_WANIPCONFIG_Label13;
lv_obj_t * ui_WANIPCONFIG_Label14;
lv_obj_t * ui_WANIPCONFIG_Label15;
lv_obj_t * ui_WANIPCONFIG_Image24;
lv_obj_t * ui_LANIPCONFIG;
lv_obj_t * ui_Screen2_Label3;
lv_obj_t * ui_WANIPCONFIG_Label3;
lv_obj_t * ui_WANIPCONFIG_Label2;
lv_obj_t * ui_WANIPCONFIG_Panel2;
lv_obj_t * ui_WANIPCONFIG_Panel3;
lv_obj_t * ui_WANIPCONFIG_Label4;
lv_obj_t * ui_WANIPCONFIG_Label9;
lv_obj_t * ui_WANIPCONFIG_Label10;
lv_obj_t * ui_WANIPCONFIG_Label12;
lv_obj_t * ui_WANIPCONFIG_Image6;
lv_obj_t * ui_WLANIPCONFIG;
lv_obj_t * ui_Screen2_Label2;
lv_obj_t * ui_WANIPCONFIG_Panel1;
lv_obj_t * ui_WANIPCONFIG_Label5;
lv_obj_t * ui_WANIPCONFIG_Label6;
lv_obj_t * ui_WANIPCONFIG_Label7;
lv_obj_t * ui_WANIPCONFIG_Label8;
lv_obj_t * ui_WANIPCONFIG_Image4;

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

    ui_Home_Image1 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Home_Image1, &ui_img_logo_png);
    lv_obj_set_width(ui_Home_Image1, LV_SIZE_CONTENT);   /// 113
    lv_obj_set_height(ui_Home_Image1, LV_SIZE_CONTENT);    /// 112
    lv_obj_set_align(ui_Home_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Home_Image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Home_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Home_Image2 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Home_Image2, &ui_img_row_r_png);
    lv_obj_set_width(ui_Home_Image2, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_Home_Image2, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_Home_Image2, 115);
    lv_obj_set_y(ui_Home_Image2, 115);
    lv_obj_add_flag(ui_Home_Image2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Home_Image2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Screen1_Label1 = lv_label_create(ui_Home);
    lv_obj_set_width(ui_Screen1_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen1_Label1, 0);
    lv_obj_set_y(ui_Screen1_Label1, 25);
    lv_obj_set_align(ui_Screen1_Label1, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Screen1_Label1, "MRRVWQB");
    lv_obj_set_style_text_color(ui_Screen1_Label1, lv_color_hex(0xD1D0D0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen1_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Screen1_Label1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Screen1_Label1, &ui_font_tahomabd, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_boardStatusLabel = lv_label_create(ui_Home);
    lv_obj_set_width(ui_boardStatusLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_boardStatusLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_boardStatusLabel, 0);
    lv_obj_set_y(ui_boardStatusLabel, 60);
    lv_obj_set_align(ui_boardStatusLabel, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_boardStatusLabel, "23.4  C");
    lv_obj_set_style_text_color(ui_boardStatusLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_boardStatusLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_boardStatusLabel, &ui_font_tahoma, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_uptimeLabel = lv_label_create(ui_Home);
    lv_obj_set_width(ui_uptimeLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_uptimeLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_uptimeLabel, 0);
    lv_obj_set_y(ui_uptimeLabel, 75);
    lv_obj_set_align(ui_uptimeLabel, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_uptimeLabel, "5d 7h 56' 32''");
    lv_obj_set_style_text_color(ui_uptimeLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_uptimeLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_uptimeLabel, &ui_font_tahoma, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dateTimeLabel = lv_label_create(ui_Home);
    lv_obj_set_width(ui_dateTimeLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_dateTimeLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_dateTimeLabel, 0);
    lv_obj_set_y(ui_dateTimeLabel, 90);
    lv_obj_set_align(ui_dateTimeLabel, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_dateTimeLabel, "18:54 22/01/2019 UDT");
    lv_obj_set_style_text_color(ui_dateTimeLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_dateTimeLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_dateTimeLabel, &ui_font_tahoma, LV_PART_MAIN | LV_STATE_DEFAULT);

}
void ui_VPNSTATUS_screen_init(void)
{
    ui_VPNSTATUS = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_VPNSTATUS, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_VPNSTATUS, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_VPNSTATUS, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_VPNSTATUS, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_VPNSTATUS, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_VPNSTATUS_Image3 = lv_img_create(ui_VPNSTATUS);
    lv_img_set_src(ui_VPNSTATUS_Image3, &ui_img_status_tree_png);
    lv_obj_set_width(ui_VPNSTATUS_Image3, LV_SIZE_CONTENT);   /// 15
    lv_obj_set_height(ui_VPNSTATUS_Image3, LV_SIZE_CONTENT);    /// 98
    lv_obj_set_x(ui_VPNSTATUS_Image3, -49);
    lv_obj_set_y(ui_VPNSTATUS_Image3, -7);
    lv_obj_set_align(ui_VPNSTATUS_Image3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_VPNSTATUS_Image3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_VPNSTATUS_Image3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_VPNSTATUS_Image17 = lv_img_create(ui_VPNSTATUS);
    lv_img_set_src(ui_VPNSTATUS_Image17, &ui_img_vpn_png);
    lv_obj_set_width(ui_VPNSTATUS_Image17, LV_SIZE_CONTENT);   /// 46
    lv_obj_set_height(ui_VPNSTATUS_Image17, LV_SIZE_CONTENT);    /// 61
    lv_obj_set_x(ui_VPNSTATUS_Image17, 29);
    lv_obj_set_y(ui_VPNSTATUS_Image17, 7);
    lv_obj_set_align(ui_VPNSTATUS_Image17, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_VPNSTATUS_Image17, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_VPNSTATUS_Image17, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_VPNSTATUS_Label1 = lv_label_create(ui_VPNSTATUS);
    lv_obj_set_width(ui_VPNSTATUS_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_VPNSTATUS_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_VPNSTATUS_Label1, 30);
    lv_obj_set_y(ui_VPNSTATUS_Label1, 9);
    lv_label_set_text(ui_VPNSTATUS_Label1, "Physical Uplink");
    lv_obj_set_style_text_color(ui_VPNSTATUS_Label1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_VPNSTATUS_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_VPNSTATUS_Label1, &ui_font_tahoma, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_VPNSTATUS_Label2 = lv_label_create(ui_VPNSTATUS);
    lv_obj_set_width(ui_VPNSTATUS_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_VPNSTATUS_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_VPNSTATUS_Label2, 30);
    lv_obj_set_y(ui_VPNSTATUS_Label2, 30);
    lv_label_set_text(ui_VPNSTATUS_Label2, "IP Address");
    lv_obj_set_style_text_color(ui_VPNSTATUS_Label2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_VPNSTATUS_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_VPNSTATUS_Label2, &ui_font_tahoma, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_VPNSTATUS_Label3 = lv_label_create(ui_VPNSTATUS);
    lv_obj_set_width(ui_VPNSTATUS_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_VPNSTATUS_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_VPNSTATUS_Label3, 30);
    lv_obj_set_y(ui_VPNSTATUS_Label3, 51);
    lv_label_set_text(ui_VPNSTATUS_Label3, "Gateway");
    lv_obj_set_style_text_color(ui_VPNSTATUS_Label3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_VPNSTATUS_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_VPNSTATUS_Label3, &ui_font_tahoma, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_VPNSTATUS_Label4 = lv_label_create(ui_VPNSTATUS);
    lv_obj_set_width(ui_VPNSTATUS_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_VPNSTATUS_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_VPNSTATUS_Label4, 30);
    lv_obj_set_y(ui_VPNSTATUS_Label4, 72);
    lv_label_set_text(ui_VPNSTATUS_Label4, "Internet");
    lv_obj_set_style_text_color(ui_VPNSTATUS_Label4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_VPNSTATUS_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_VPNSTATUS_Label4, &ui_font_tahoma, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_VPNSTATUS_Label5 = lv_label_create(ui_VPNSTATUS);
    lv_obj_set_width(ui_VPNSTATUS_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_VPNSTATUS_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_VPNSTATUS_Label5, 30);
    lv_obj_set_y(ui_VPNSTATUS_Label5, 93);
    lv_label_set_text(ui_VPNSTATUS_Label5, "VPN ports");
    lv_obj_set_style_text_color(ui_VPNSTATUS_Label5, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_VPNSTATUS_Label5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_VPNSTATUS_Label5, &ui_font_tahoma, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_VPNSTATUS_Panel3 = lv_obj_create(ui_VPNSTATUS);
    lv_obj_set_width(ui_VPNSTATUS_Panel3, 128);
    lv_obj_set_height(ui_VPNSTATUS_Panel3, 15);
    lv_obj_set_x(ui_VPNSTATUS_Panel3, 0);
    lv_obj_set_y(ui_VPNSTATUS_Panel3, 56);
    lv_obj_set_align(ui_VPNSTATUS_Panel3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_VPNSTATUS_Panel3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_VPNSTATUS_Panel3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_VPNSTATUS_Panel3, lv_color_hex(0x444444), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_VPNSTATUS_Panel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_VPNSTATUS_Panel3, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_VPNSTATUS_Image13 = lv_img_create(ui_VPNSTATUS);
    lv_img_set_src(ui_VPNSTATUS_Image13, &ui_img_row_r_png);
    lv_obj_set_width(ui_VPNSTATUS_Image13, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_VPNSTATUS_Image13, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_VPNSTATUS_Image13, 113);
    lv_obj_set_y(ui_VPNSTATUS_Image13, 115);
    lv_obj_add_flag(ui_VPNSTATUS_Image13, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_VPNSTATUS_Image13, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_VPNSTATUS_Image14 = lv_img_create(ui_VPNSTATUS);
    lv_img_set_src(ui_VPNSTATUS_Image14, &ui_img_row_l_png);
    lv_obj_set_width(ui_VPNSTATUS_Image14, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_VPNSTATUS_Image14, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_VPNSTATUS_Image14, 3);
    lv_obj_set_y(ui_VPNSTATUS_Image14, 115);
    lv_obj_add_flag(ui_VPNSTATUS_Image14, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_VPNSTATUS_Image14, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_VPNSTATUS_Image18 = lv_img_create(ui_VPNSTATUS);
    lv_img_set_src(ui_VPNSTATUS_Image18, &ui_img_status_pass_png);
    lv_obj_set_width(ui_VPNSTATUS_Image18, LV_SIZE_CONTENT);   /// 15
    lv_obj_set_height(ui_VPNSTATUS_Image18, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_x(ui_VPNSTATUS_Image18, -49);
    lv_obj_set_y(ui_VPNSTATUS_Image18, -49);
    lv_obj_set_align(ui_VPNSTATUS_Image18, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_VPNSTATUS_Image18, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_VPNSTATUS_Image18, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_VPNSTATUS_Image19 = lv_img_create(ui_VPNSTATUS);
    lv_img_set_src(ui_VPNSTATUS_Image19, &ui_img_status_fail_png);
    lv_obj_set_width(ui_VPNSTATUS_Image19, LV_SIZE_CONTENT);   /// 15
    lv_obj_set_height(ui_VPNSTATUS_Image19, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_x(ui_VPNSTATUS_Image19, -49);
    lv_obj_set_y(ui_VPNSTATUS_Image19, -28);
    lv_obj_set_align(ui_VPNSTATUS_Image19, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_VPNSTATUS_Image19, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_VPNSTATUS_Image19, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}
void ui_WANIPCONFIG_screen_init(void)
{
    ui_WANIPCONFIG = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_WANIPCONFIG, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_WANIPCONFIG, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_WANIPCONFIG, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen2_Label1 = lv_label_create(ui_WANIPCONFIG);
    lv_obj_set_width(ui_Screen2_Label1, 50);
    lv_obj_set_height(ui_Screen2_Label1, 13);
    lv_obj_set_x(ui_Screen2_Label1, 27);
    lv_obj_set_y(ui_Screen2_Label1, 4);
    lv_label_set_text(ui_Screen2_Label1, "WAN");
    lv_obj_set_style_text_color(ui_Screen2_Label1, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen2_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Screen2_Label1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Screen2_Label1, &ui_font_tahomabd, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_VPNSTATUS_Panel1 = lv_obj_create(ui_WANIPCONFIG);
    lv_obj_set_width(ui_VPNSTATUS_Panel1, 128);
    lv_obj_set_height(ui_VPNSTATUS_Panel1, 15);
    lv_obj_set_x(ui_VPNSTATUS_Panel1, 0);
    lv_obj_set_y(ui_VPNSTATUS_Panel1, 56);
    lv_obj_set_align(ui_VPNSTATUS_Panel1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_VPNSTATUS_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_VPNSTATUS_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_VPNSTATUS_Panel1, lv_color_hex(0x545454), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_VPNSTATUS_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_VPNSTATUS_Panel1, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Label1 = lv_label_create(ui_WANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WANIPCONFIG_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WANIPCONFIG_Label1, 3);
    lv_obj_set_y(ui_WANIPCONFIG_Label1, 27);
    lv_label_set_text(ui_WANIPCONFIG_Label1, "DHCP Client:");
    lv_obj_set_style_text_color(ui_WANIPCONFIG_Label1, lv_color_hex(0x6A6D62), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WANIPCONFIG_Label1, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Button_RG = lv_btn_create(ui_WANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_Button_RG, 16);
    lv_obj_set_height(ui_WANIPCONFIG_Button_RG, 18);
    lv_obj_set_x(ui_WANIPCONFIG_Button_RG, 55);
    lv_obj_set_y(ui_WANIPCONFIG_Button_RG, 55);
    lv_obj_set_align(ui_WANIPCONFIG_Button_RG, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WANIPCONFIG_Button_RG, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_WANIPCONFIG_Button_RG, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_opa(ui_WANIPCONFIG_Button_RG, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_ButtonDN = lv_btn_create(ui_WANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_ButtonDN, 15);
    lv_obj_set_height(ui_WANIPCONFIG_ButtonDN, 20);
    lv_obj_set_x(ui_WANIPCONFIG_ButtonDN, 1);
    lv_obj_set_y(ui_WANIPCONFIG_ButtonDN, 55);
    lv_obj_set_align(ui_WANIPCONFIG_ButtonDN, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WANIPCONFIG_ButtonDN, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_WANIPCONFIG_ButtonDN, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_opa(ui_WANIPCONFIG_ButtonDN, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Button_LF = lv_btn_create(ui_WANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_Button_LF, 15);
    lv_obj_set_height(ui_WANIPCONFIG_Button_LF, 19);
    lv_obj_set_x(ui_WANIPCONFIG_Button_LF, -52);
    lv_obj_set_y(ui_WANIPCONFIG_Button_LF, 56);
    lv_obj_set_align(ui_WANIPCONFIG_Button_LF, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WANIPCONFIG_Button_LF, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_WANIPCONFIG_Button_LF, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_opa(ui_WANIPCONFIG_Button_LF, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Panel4 = lv_obj_create(ui_WANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_Panel4, 120);
    lv_obj_set_height(ui_WANIPCONFIG_Panel4, 1);
    lv_obj_set_x(ui_WANIPCONFIG_Panel4, 0);
    lv_obj_set_y(ui_WANIPCONFIG_Panel4, -43);
    lv_obj_set_align(ui_WANIPCONFIG_Panel4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_WANIPCONFIG_Panel4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_WANIPCONFIG_Panel4, lv_color_hex(0xB6B7B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_WANIPCONFIG_Panel4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_WANIPCONFIG_Panel4, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Label11 = lv_label_create(ui_WANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_Label11, 132);
    lv_obj_set_height(ui_WANIPCONFIG_Label11, 15);
    lv_obj_set_x(ui_WANIPCONFIG_Label11, 3);
    lv_obj_set_y(ui_WANIPCONFIG_Label11, 62);
    lv_label_set_text(ui_WANIPCONFIG_Label11, "255.255.255.255/24");
    lv_obj_set_style_text_color(ui_WANIPCONFIG_Label11, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WANIPCONFIG_Label11, &ui_font_tahoma, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Image21 = lv_img_create(ui_WANIPCONFIG);
    lv_img_set_src(ui_WANIPCONFIG_Image21, &ui_img_sel_on_png);
    lv_obj_set_width(ui_WANIPCONFIG_Image21, LV_SIZE_CONTENT);   /// 24
    lv_obj_set_height(ui_WANIPCONFIG_Image21, LV_SIZE_CONTENT);    /// 14
    lv_obj_set_x(ui_WANIPCONFIG_Image21, 41);
    lv_obj_set_y(ui_WANIPCONFIG_Image21, -29);
    lv_obj_set_align(ui_WANIPCONFIG_Image21, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WANIPCONFIG_Image21, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WANIPCONFIG_Image21, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_VPNSTATUS_Image1 = lv_img_create(ui_WANIPCONFIG);
    lv_img_set_src(ui_VPNSTATUS_Image1, &ui_img_row_r_png);
    lv_obj_set_width(ui_VPNSTATUS_Image1, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_VPNSTATUS_Image1, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_VPNSTATUS_Image1, 113);
    lv_obj_set_y(ui_VPNSTATUS_Image1, 115);
    lv_obj_add_flag(ui_VPNSTATUS_Image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_VPNSTATUS_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_VPNSTATUS_Image2 = lv_img_create(ui_WANIPCONFIG);
    lv_img_set_src(ui_VPNSTATUS_Image2, &ui_img_row_l_png);
    lv_obj_set_width(ui_VPNSTATUS_Image2, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_VPNSTATUS_Image2, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_VPNSTATUS_Image2, 3);
    lv_obj_set_y(ui_VPNSTATUS_Image2, 115);
    lv_obj_add_flag(ui_VPNSTATUS_Image2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_VPNSTATUS_Image2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_WANIPCONFIG_Label13 = lv_label_create(ui_WANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_Label13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WANIPCONFIG_Label13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WANIPCONFIG_Label13, 3);
    lv_obj_set_y(ui_WANIPCONFIG_Label13, 47);
    lv_label_set_text(ui_WANIPCONFIG_Label13, "IP Address:");
    lv_obj_set_style_text_color(ui_WANIPCONFIG_Label13, lv_color_hex(0x6A6D62), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WANIPCONFIG_Label13, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Label14 = lv_label_create(ui_WANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_Label14, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WANIPCONFIG_Label14, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WANIPCONFIG_Label14, 3);
    lv_obj_set_y(ui_WANIPCONFIG_Label14, 79);
    lv_label_set_text(ui_WANIPCONFIG_Label14, "Gateway:");
    lv_obj_set_style_text_color(ui_WANIPCONFIG_Label14, lv_color_hex(0x6A6D62), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WANIPCONFIG_Label14, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Label15 = lv_label_create(ui_WANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_Label15, 132);
    lv_obj_set_height(ui_WANIPCONFIG_Label15, 15);
    lv_obj_set_x(ui_WANIPCONFIG_Label15, 3);
    lv_obj_set_y(ui_WANIPCONFIG_Label15, 95);
    lv_label_set_text(ui_WANIPCONFIG_Label15, "255.255.255.255");
    lv_obj_set_style_text_color(ui_WANIPCONFIG_Label15, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label15, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WANIPCONFIG_Label15, &ui_font_tahoma, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Image24 = lv_img_create(ui_WANIPCONFIG);
    lv_img_set_src(ui_WANIPCONFIG_Image24, &ui_img_network_png);
    lv_obj_set_width(ui_WANIPCONFIG_Image24, LV_SIZE_CONTENT);   /// 20
    lv_obj_set_height(ui_WANIPCONFIG_Image24, LV_SIZE_CONTENT);    /// 16
    lv_obj_set_x(ui_WANIPCONFIG_Image24, -50);
    lv_obj_set_y(ui_WANIPCONFIG_Image24, -53);
    lv_obj_set_align(ui_WANIPCONFIG_Image24, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WANIPCONFIG_Image24, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WANIPCONFIG_Image24, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}
void ui_LANIPCONFIG_screen_init(void)
{
    ui_LANIPCONFIG = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_LANIPCONFIG, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_LANIPCONFIG, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_LANIPCONFIG, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen2_Label3 = lv_label_create(ui_LANIPCONFIG);
    lv_obj_set_width(ui_Screen2_Label3, 128);
    lv_obj_set_height(ui_Screen2_Label3, 18);
    lv_obj_set_x(ui_Screen2_Label3, 0);
    lv_obj_set_y(ui_Screen2_Label3, -55);
    lv_obj_set_align(ui_Screen2_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen2_Label3, "IP CONFIG. - LAN");
    lv_obj_set_style_text_color(ui_Screen2_Label3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen2_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Screen2_Label3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Screen2_Label3, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Screen2_Label3, lv_color_hex(0x5A5D5B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen2_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Label3 = lv_label_create(ui_LANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_Label3, 135);
    lv_obj_set_height(ui_WANIPCONFIG_Label3, 15);
    lv_obj_set_x(ui_WANIPCONFIG_Label3, 5);
    lv_obj_set_y(ui_WANIPCONFIG_Label3, 20);
    lv_obj_set_align(ui_WANIPCONFIG_Label3, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_WANIPCONFIG_Label3, "GW:  192.168.1.254");
    lv_obj_set_style_text_color(ui_WANIPCONFIG_Label3, lv_color_hex(0xC3E666), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WANIPCONFIG_Label3, &ui_font_tahoma, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Label2 = lv_label_create(ui_LANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_Label2, 132);
    lv_obj_set_height(ui_WANIPCONFIG_Label2, 15);
    lv_obj_set_x(ui_WANIPCONFIG_Label2, 3);
    lv_obj_set_y(ui_WANIPCONFIG_Label2, 5);
    lv_obj_set_align(ui_WANIPCONFIG_Label2, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_WANIPCONFIG_Label2, "IP:  192.168.134.27/24");
    lv_obj_set_style_text_color(ui_WANIPCONFIG_Label2, lv_color_hex(0xC3E666), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WANIPCONFIG_Label2, &ui_font_tahoma, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Panel2 = lv_obj_create(ui_LANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_Panel2, 70);
    lv_obj_set_height(ui_WANIPCONFIG_Panel2, 13);
    lv_obj_set_x(ui_WANIPCONFIG_Panel2, 22);
    lv_obj_set_y(ui_WANIPCONFIG_Panel2, 39);
    lv_obj_set_align(ui_WANIPCONFIG_Panel2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_WANIPCONFIG_Panel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_WANIPCONFIG_Panel2, lv_color_hex(0x3C8F45), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_WANIPCONFIG_Panel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_WANIPCONFIG_Panel2, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Panel3 = lv_obj_create(ui_LANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_Panel3, 70);
    lv_obj_set_height(ui_WANIPCONFIG_Panel3, 13);
    lv_obj_set_x(ui_WANIPCONFIG_Panel3, 27);
    lv_obj_set_y(ui_WANIPCONFIG_Panel3, -33);
    lv_obj_set_align(ui_WANIPCONFIG_Panel3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_WANIPCONFIG_Panel3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_WANIPCONFIG_Panel3, lv_color_hex(0x11F308), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_WANIPCONFIG_Panel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_WANIPCONFIG_Panel3, lv_color_hex(0x11F308), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_WANIPCONFIG_Panel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Label4 = lv_label_create(ui_LANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WANIPCONFIG_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WANIPCONFIG_Label4, 20);
    lv_obj_set_y(ui_WANIPCONFIG_Label4, 39);
    lv_obj_set_align(ui_WANIPCONFIG_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_WANIPCONFIG_Label4, "ENABLED");
    lv_obj_set_style_text_color(ui_WANIPCONFIG_Label4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WANIPCONFIG_Label4, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Label9 = lv_label_create(ui_LANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_Label9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WANIPCONFIG_Label9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WANIPCONFIG_Label9, -38);
    lv_obj_set_y(ui_WANIPCONFIG_Label9, -34);
    lv_obj_set_align(ui_WANIPCONFIG_Label9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_WANIPCONFIG_Label9, "DHCP:");
    lv_obj_set_style_text_color(ui_WANIPCONFIG_Label9, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WANIPCONFIG_Label9, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Label10 = lv_label_create(ui_LANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_Label10, 120);
    lv_obj_set_height(ui_WANIPCONFIG_Label10, 15);
    lv_obj_set_x(ui_WANIPCONFIG_Label10, 6);
    lv_obj_set_y(ui_WANIPCONFIG_Label10, -19);
    lv_obj_set_align(ui_WANIPCONFIG_Label10, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_WANIPCONFIG_Label10, "IP:  192.168.134.27/24");
    lv_obj_set_style_text_color(ui_WANIPCONFIG_Label10, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WANIPCONFIG_Label10, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_WANIPCONFIG_Label10, lv_color_hex(0x6E6F6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_WANIPCONFIG_Label10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_WANIPCONFIG_Label10, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_WANIPCONFIG_Label10, LV_BORDER_SIDE_FULL, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Label12 = lv_label_create(ui_LANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_Label12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WANIPCONFIG_Label12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WANIPCONFIG_Label12, 28);
    lv_obj_set_y(ui_WANIPCONFIG_Label12, -33);
    lv_obj_set_align(ui_WANIPCONFIG_Label12, LV_ALIGN_CENTER);
    lv_label_set_text(ui_WANIPCONFIG_Label12, "ENABLED");
    lv_obj_set_style_text_color(ui_WANIPCONFIG_Label12, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WANIPCONFIG_Label12, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Image6 = lv_img_create(ui_LANIPCONFIG);
    lv_img_set_src(ui_WANIPCONFIG_Image6, &ui_img_frecce_d_r_png);
    lv_obj_set_width(ui_WANIPCONFIG_Image6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WANIPCONFIG_Image6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_WANIPCONFIG_Image6, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_WANIPCONFIG_Image6, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WANIPCONFIG_Image6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}
void ui_WLANIPCONFIG_screen_init(void)
{
    ui_WLANIPCONFIG = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_WLANIPCONFIG, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_WLANIPCONFIG, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_WLANIPCONFIG, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen2_Label2 = lv_label_create(ui_WLANIPCONFIG);
    lv_obj_set_width(ui_Screen2_Label2, 128);
    lv_obj_set_height(ui_Screen2_Label2, 18);
    lv_obj_set_x(ui_Screen2_Label2, 0);
    lv_obj_set_y(ui_Screen2_Label2, -55);
    lv_obj_set_align(ui_Screen2_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen2_Label2, "IP CONFIG. - WLAN");
    lv_obj_set_style_text_color(ui_Screen2_Label2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen2_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Screen2_Label2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Screen2_Label2, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Screen2_Label2, lv_color_hex(0x5A5D5B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen2_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Panel1 = lv_obj_create(ui_WLANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_Panel1, 70);
    lv_obj_set_height(ui_WANIPCONFIG_Panel1, 13);
    lv_obj_set_x(ui_WANIPCONFIG_Panel1, 27);
    lv_obj_set_y(ui_WANIPCONFIG_Panel1, -33);
    lv_obj_set_align(ui_WANIPCONFIG_Panel1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_WANIPCONFIG_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_WANIPCONFIG_Panel1, lv_color_hex(0x11F308), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_WANIPCONFIG_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_WANIPCONFIG_Panel1, lv_color_hex(0x11F308), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_WANIPCONFIG_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Label5 = lv_label_create(ui_WLANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WANIPCONFIG_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WANIPCONFIG_Label5, -38);
    lv_obj_set_y(ui_WANIPCONFIG_Label5, -34);
    lv_obj_set_align(ui_WANIPCONFIG_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_WANIPCONFIG_Label5, "DHCP:");
    lv_obj_set_style_text_color(ui_WANIPCONFIG_Label5, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WANIPCONFIG_Label5, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Label6 = lv_label_create(ui_WLANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_Label6, 120);
    lv_obj_set_height(ui_WANIPCONFIG_Label6, 15);
    lv_obj_set_x(ui_WANIPCONFIG_Label6, 5);
    lv_obj_set_y(ui_WANIPCONFIG_Label6, -9);
    lv_obj_set_align(ui_WANIPCONFIG_Label6, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_WANIPCONFIG_Label6, "IP:  192.168.134.27/24");
    lv_obj_set_style_text_color(ui_WANIPCONFIG_Label6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WANIPCONFIG_Label6, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_WANIPCONFIG_Label6, lv_color_hex(0x6E6F6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_WANIPCONFIG_Label6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_WANIPCONFIG_Label6, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_WANIPCONFIG_Label6, LV_BORDER_SIDE_FULL, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Label7 = lv_label_create(ui_WLANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_Label7, 120);
    lv_obj_set_height(ui_WANIPCONFIG_Label7, 15);
    lv_obj_set_x(ui_WANIPCONFIG_Label7, 5);
    lv_obj_set_y(ui_WANIPCONFIG_Label7, 11);
    lv_obj_set_align(ui_WANIPCONFIG_Label7, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_WANIPCONFIG_Label7, "GW:  192.168.1.254");
    lv_obj_set_style_text_color(ui_WANIPCONFIG_Label7, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WANIPCONFIG_Label7, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_WANIPCONFIG_Label7, lv_color_hex(0x6E6F6E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_WANIPCONFIG_Label7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_WANIPCONFIG_Label7, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_WANIPCONFIG_Label7, LV_BORDER_SIDE_FULL, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Label8 = lv_label_create(ui_WLANIPCONFIG);
    lv_obj_set_width(ui_WANIPCONFIG_Label8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WANIPCONFIG_Label8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WANIPCONFIG_Label8, 28);
    lv_obj_set_y(ui_WANIPCONFIG_Label8, -33);
    lv_obj_set_align(ui_WANIPCONFIG_Label8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_WANIPCONFIG_Label8, "ENABLED");
    lv_obj_set_style_text_color(ui_WANIPCONFIG_Label8, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WANIPCONFIG_Label8, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WANIPCONFIG_Image4 = lv_img_create(ui_WLANIPCONFIG);
    lv_img_set_src(ui_WANIPCONFIG_Image4, &ui_img_frecce_d_r_png);
    lv_obj_set_width(ui_WANIPCONFIG_Image4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WANIPCONFIG_Image4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_WANIPCONFIG_Image4, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_WANIPCONFIG_Image4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WANIPCONFIG_Image4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

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
