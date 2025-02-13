// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: sevio_ui

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t *ui_Home;
lv_obj_t *ui_Screen1_Image1;
lv_obj_t *ui_Screen1_Label1;
lv_obj_t *ui_boardStatusLabel;
lv_obj_t *ui_uptimeLabel;
lv_obj_t *ui_dateTimeLabel;
lv_obj_t *ui_VPNSTATUS;
lv_obj_t *ui_Screen1_Panel1;
lv_obj_t *ui_Screen1_Label3;
lv_obj_t *ui_Screen2_Label4;
lv_obj_t *ui_Screen2_Button1;
lv_obj_t *ui_Screen2_Label5;
lv_obj_t *ui_WANIPCONFIG;
lv_obj_t *ui_Screen2_Label1;
lv_obj_t *ui_WANIPCONFIG_Panel2;
lv_obj_t *ui_WANIPCONFIG_Label1;
lv_obj_t *ui_WANIPCONFIG_Label2;
lv_obj_t *ui_WANIPCONFIG_Label3;
lv_obj_t *ui_WANIPCONFIG_Image1;
lv_obj_t *ui_WANIPCONFIG_Label4;
lv_obj_t *ui_WANIPCONFIG_Image2;
lv_obj_t *ui_WANIPCONFIG_Button_RG;
lv_obj_t *ui_WANIPCONFIG_ButtonDN;
lv_obj_t *ui_WANIPCONFIG_Button_LF;
lv_obj_t *ui_LANIPCONFIG;
lv_obj_t *ui_Screen2_Label3;
lv_obj_t *ui_WANIPCONFIG_Panel3;
lv_obj_t *ui_WANIPCONFIG_Label9;
lv_obj_t *ui_WANIPCONFIG_Label10;
lv_obj_t *ui_WANIPCONFIG_Image5;
lv_obj_t *ui_WANIPCONFIG_Label12;
lv_obj_t *ui_WANIPCONFIG_Image6;
lv_obj_t *ui_WLANIPCONFIG;
lv_obj_t *ui_Screen2_Label2;
lv_obj_t *ui_WANIPCONFIG_Panel1;
lv_obj_t *ui_WANIPCONFIG_Label5;
lv_obj_t *ui_WANIPCONFIG_Label6;
lv_obj_t *ui_WANIPCONFIG_Label7;
lv_obj_t *ui_WANIPCONFIG_Image3;
lv_obj_t *ui_WANIPCONFIG_Label8;
lv_obj_t *ui_WANIPCONFIG_Image4;
lv_obj_t *ui_Splash;
lv_obj_t *ui_Screen1_Image2;

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
lv_obj_clear_flag( ui_Home, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Home, lv_color_hex(0xA29C9D), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Home, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Home, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Home, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen1_Image1 = lv_img_create(ui_Home);
lv_img_set_src(ui_Screen1_Image1, &ui_img_logo_png);
lv_obj_set_width( ui_Screen1_Image1, 128);
lv_obj_set_height( ui_Screen1_Image1, 60);
lv_obj_set_x( ui_Screen1_Image1, 0 );
lv_obj_set_y( ui_Screen1_Image1, -5 );
lv_obj_set_align( ui_Screen1_Image1, LV_ALIGN_TOP_MID );
lv_obj_add_flag( ui_Screen1_Image1, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Screen1_Image1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Screen1_Label1 = lv_label_create(ui_Home);
lv_obj_set_width( ui_Screen1_Label1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Label1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Screen1_Label1, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen1_Label1,"ST: MRRVWQB");
lv_obj_set_style_text_align(ui_Screen1_Label1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_dir(ui_Screen1_Label1, LV_GRAD_DIR_HOR, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_boardStatusLabel = lv_label_create(ui_Home);
lv_obj_set_width( ui_boardStatusLabel, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_boardStatusLabel, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_boardStatusLabel, 0 );
lv_obj_set_y( ui_boardStatusLabel, 75 );
lv_obj_set_align( ui_boardStatusLabel, LV_ALIGN_TOP_MID );
lv_label_set_text(ui_boardStatusLabel,"24.3V / 1.43A / 23.4°C");

ui_uptimeLabel = lv_label_create(ui_Home);
lv_obj_set_width( ui_uptimeLabel, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_uptimeLabel, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_uptimeLabel, 0 );
lv_obj_set_y( ui_uptimeLabel, 91 );
lv_obj_set_align( ui_uptimeLabel, LV_ALIGN_TOP_MID );
lv_label_set_text(ui_uptimeLabel,"5d 7h 56' 32''");

ui_dateTimeLabel = lv_label_create(ui_Home);
lv_obj_set_width( ui_dateTimeLabel, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_dateTimeLabel, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_dateTimeLabel, 0 );
lv_obj_set_y( ui_dateTimeLabel, 107 );
lv_obj_set_align( ui_dateTimeLabel, LV_ALIGN_TOP_MID );
lv_label_set_text(ui_dateTimeLabel,"18:54 22/01/2019");

}
void ui_VPNSTATUS_screen_init(void)
{
ui_VPNSTATUS = lv_obj_create(NULL);
lv_obj_clear_flag( ui_VPNSTATUS, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_VPNSTATUS, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_VPNSTATUS, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_VPNSTATUS, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_VPNSTATUS, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen1_Panel1 = lv_obj_create(ui_VPNSTATUS);
lv_obj_set_width( ui_Screen1_Panel1, 124);
lv_obj_set_height( ui_Screen1_Panel1, 14);
lv_obj_set_x( ui_Screen1_Panel1, 0 );
lv_obj_set_y( ui_Screen1_Panel1, -31 );
lv_obj_set_align( ui_Screen1_Panel1, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_Screen1_Panel1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Screen1_Panel1, lv_color_hex(0x0EF65D), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen1_Panel1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_Screen1_Panel1, lv_color_hex(0x02FF58), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_Screen1_Panel1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen1_Label3 = lv_label_create(ui_VPNSTATUS);
lv_obj_set_width( ui_Screen1_Label3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Label3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Label3, -1 );
lv_obj_set_y( ui_Screen1_Label3, -32 );
lv_obj_set_align( ui_Screen1_Label3, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen1_Label3,"CONNECTED PORT");
lv_obj_set_style_text_color(ui_Screen1_Label3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Screen1_Label3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Screen1_Label3, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_Screen1_Label3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_Screen1_Label3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen2_Label4 = lv_label_create(ui_VPNSTATUS);
lv_obj_set_width( ui_Screen2_Label4, 128);
lv_obj_set_height( ui_Screen2_Label4, 18);
lv_obj_set_x( ui_Screen2_Label4, 0 );
lv_obj_set_y( ui_Screen2_Label4, -55 );
lv_obj_set_align( ui_Screen2_Label4, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen2_Label4,"VPN STATUS");
lv_obj_set_style_text_color(ui_Screen2_Label4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Screen2_Label4, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Screen2_Label4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Screen2_Label4, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Screen2_Label4, lv_color_hex(0x5A5D5B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen2_Label4, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen2_Button1 = lv_btn_create(ui_VPNSTATUS);
lv_obj_set_width( ui_Screen2_Button1, 123);
lv_obj_set_height( ui_Screen2_Button1, 15);
lv_obj_set_x( ui_Screen2_Button1, -1 );
lv_obj_set_y( ui_Screen2_Button1, -11 );
lv_obj_set_align( ui_Screen2_Button1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Screen2_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Screen2_Button1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Screen2_Button1, lv_color_hex(0xFF0225), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen2_Button1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_Screen2_Button1, lv_color_hex(0xAA3747), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_Screen2_Button1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen2_Label5 = lv_label_create(ui_VPNSTATUS);
lv_obj_set_width( ui_Screen2_Label5, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen2_Label5, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen2_Label5, 0 );
lv_obj_set_y( ui_Screen2_Label5, -11 );
lv_obj_set_align( ui_Screen2_Label5, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen2_Label5,"VPN");
lv_obj_set_style_text_color(ui_Screen2_Label5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Screen2_Label5, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

}
void ui_WANIPCONFIG_screen_init(void)
{
ui_WANIPCONFIG = lv_obj_create(NULL);
lv_obj_clear_flag( ui_WANIPCONFIG, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_WANIPCONFIG, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_WANIPCONFIG, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen2_Label1 = lv_label_create(ui_WANIPCONFIG);
lv_obj_set_width( ui_Screen2_Label1, 128);
lv_obj_set_height( ui_Screen2_Label1, 18);
lv_obj_set_x( ui_Screen2_Label1, 0 );
lv_obj_set_y( ui_Screen2_Label1, -55 );
lv_obj_set_align( ui_Screen2_Label1, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen2_Label1,"IP CONFIG. - WAN");
lv_obj_set_style_text_color(ui_Screen2_Label1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Screen2_Label1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Screen2_Label1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Screen2_Label1, &lv_font_montserrat_12, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Screen2_Label1, lv_color_hex(0x5A5D5B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen2_Label1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_Panel2 = lv_obj_create(ui_WANIPCONFIG);
lv_obj_set_width( ui_WANIPCONFIG_Panel2, 70);
lv_obj_set_height( ui_WANIPCONFIG_Panel2, 13);
lv_obj_set_x( ui_WANIPCONFIG_Panel2, 27 );
lv_obj_set_y( ui_WANIPCONFIG_Panel2, -33 );
lv_obj_set_align( ui_WANIPCONFIG_Panel2, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_WANIPCONFIG_Panel2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_WANIPCONFIG_Panel2, lv_color_hex(0x11F308), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_WANIPCONFIG_Panel2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_WANIPCONFIG_Panel2, lv_color_hex(0x11F308), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_WANIPCONFIG_Panel2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_Label1 = lv_label_create(ui_WANIPCONFIG);
lv_obj_set_width( ui_WANIPCONFIG_Label1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_WANIPCONFIG_Label1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_WANIPCONFIG_Label1, -38 );
lv_obj_set_y( ui_WANIPCONFIG_Label1, -34 );
lv_obj_set_align( ui_WANIPCONFIG_Label1, LV_ALIGN_CENTER );
lv_label_set_text(ui_WANIPCONFIG_Label1,"DHCP:");
lv_obj_set_style_text_color(ui_WANIPCONFIG_Label1, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_WANIPCONFIG_Label1, &lv_font_montserrat_12, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_Label2 = lv_label_create(ui_WANIPCONFIG);
lv_obj_set_width( ui_WANIPCONFIG_Label2, 120);
lv_obj_set_height( ui_WANIPCONFIG_Label2, 15);
lv_obj_set_x( ui_WANIPCONFIG_Label2, 5 );
lv_obj_set_y( ui_WANIPCONFIG_Label2, -9 );
lv_obj_set_align( ui_WANIPCONFIG_Label2, LV_ALIGN_LEFT_MID );
lv_label_set_text(ui_WANIPCONFIG_Label2,"IP:  192.168.134.27/24");
lv_obj_set_style_text_color(ui_WANIPCONFIG_Label2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_WANIPCONFIG_Label2, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_WANIPCONFIG_Label2, lv_color_hex(0x6E6F6E), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_WANIPCONFIG_Label2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_WANIPCONFIG_Label2, 1, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_WANIPCONFIG_Label2, LV_BORDER_SIDE_FULL, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_Label3 = lv_label_create(ui_WANIPCONFIG);
lv_obj_set_width( ui_WANIPCONFIG_Label3, 120);
lv_obj_set_height( ui_WANIPCONFIG_Label3, 15);
lv_obj_set_x( ui_WANIPCONFIG_Label3, 5 );
lv_obj_set_y( ui_WANIPCONFIG_Label3, 11 );
lv_obj_set_align( ui_WANIPCONFIG_Label3, LV_ALIGN_LEFT_MID );
lv_label_set_text(ui_WANIPCONFIG_Label3,"GW:  192.168.1.254");
lv_obj_set_style_text_color(ui_WANIPCONFIG_Label3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_WANIPCONFIG_Label3, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_WANIPCONFIG_Label3, lv_color_hex(0x6E6F6E), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_WANIPCONFIG_Label3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_WANIPCONFIG_Label3, 1, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_WANIPCONFIG_Label3, LV_BORDER_SIDE_FULL, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_Image1 = lv_img_create(ui_WANIPCONFIG);
lv_img_set_src(ui_WANIPCONFIG_Image1, &ui_img_eth_img_png);
lv_obj_set_width( ui_WANIPCONFIG_Image1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_WANIPCONFIG_Image1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_WANIPCONFIG_Image1, -47 );
lv_obj_set_y( ui_WANIPCONFIG_Image1, 34 );
lv_obj_set_align( ui_WANIPCONFIG_Image1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_WANIPCONFIG_Image1, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_WANIPCONFIG_Image1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_WANIPCONFIG_Label4 = lv_label_create(ui_WANIPCONFIG);
lv_obj_set_width( ui_WANIPCONFIG_Label4, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_WANIPCONFIG_Label4, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_WANIPCONFIG_Label4, 28 );
lv_obj_set_y( ui_WANIPCONFIG_Label4, -33 );
lv_obj_set_align( ui_WANIPCONFIG_Label4, LV_ALIGN_CENTER );
lv_label_set_text(ui_WANIPCONFIG_Label4,"ENABLED");
lv_obj_set_style_text_color(ui_WANIPCONFIG_Label4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label4, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_WANIPCONFIG_Label4, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_Image2 = lv_img_create(ui_WANIPCONFIG);
lv_img_set_src(ui_WANIPCONFIG_Image2, &ui_img_frecce_d_r_png);
lv_obj_set_width( ui_WANIPCONFIG_Image2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_WANIPCONFIG_Image2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_WANIPCONFIG_Image2, 2 );
lv_obj_set_y( ui_WANIPCONFIG_Image2, 0 );
lv_obj_set_align( ui_WANIPCONFIG_Image2, LV_ALIGN_BOTTOM_MID );
lv_obj_add_flag( ui_WANIPCONFIG_Image2, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_WANIPCONFIG_Image2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_WANIPCONFIG_Button_RG = lv_btn_create(ui_WANIPCONFIG);
lv_obj_set_width( ui_WANIPCONFIG_Button_RG, 16);
lv_obj_set_height( ui_WANIPCONFIG_Button_RG, 18);
lv_obj_set_x( ui_WANIPCONFIG_Button_RG, 55 );
lv_obj_set_y( ui_WANIPCONFIG_Button_RG, 55 );
lv_obj_set_align( ui_WANIPCONFIG_Button_RG, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_WANIPCONFIG_Button_RG, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_WANIPCONFIG_Button_RG, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_opa(ui_WANIPCONFIG_Button_RG, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_ButtonDN = lv_btn_create(ui_WANIPCONFIG);
lv_obj_set_width( ui_WANIPCONFIG_ButtonDN, 15);
lv_obj_set_height( ui_WANIPCONFIG_ButtonDN, 20);
lv_obj_set_x( ui_WANIPCONFIG_ButtonDN, 1 );
lv_obj_set_y( ui_WANIPCONFIG_ButtonDN, 55 );
lv_obj_set_align( ui_WANIPCONFIG_ButtonDN, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_WANIPCONFIG_ButtonDN, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_WANIPCONFIG_ButtonDN, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_opa(ui_WANIPCONFIG_ButtonDN, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_Button_LF = lv_btn_create(ui_WANIPCONFIG);
lv_obj_set_width( ui_WANIPCONFIG_Button_LF, 15);
lv_obj_set_height( ui_WANIPCONFIG_Button_LF, 19);
lv_obj_set_x( ui_WANIPCONFIG_Button_LF, -52 );
lv_obj_set_y( ui_WANIPCONFIG_Button_LF, 56 );
lv_obj_set_align( ui_WANIPCONFIG_Button_LF, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_WANIPCONFIG_Button_LF, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_WANIPCONFIG_Button_LF, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_opa(ui_WANIPCONFIG_Button_LF, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

}
void ui_LANIPCONFIG_screen_init(void)
{
ui_LANIPCONFIG = lv_obj_create(NULL);
lv_obj_clear_flag( ui_LANIPCONFIG, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_LANIPCONFIG, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_LANIPCONFIG, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen2_Label3 = lv_label_create(ui_LANIPCONFIG);
lv_obj_set_width( ui_Screen2_Label3, 128);
lv_obj_set_height( ui_Screen2_Label3, 18);
lv_obj_set_x( ui_Screen2_Label3, 0 );
lv_obj_set_y( ui_Screen2_Label3, -55 );
lv_obj_set_align( ui_Screen2_Label3, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen2_Label3,"IP CONFIG. - LAN");
lv_obj_set_style_text_color(ui_Screen2_Label3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Screen2_Label3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Screen2_Label3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Screen2_Label3, &lv_font_montserrat_12, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Screen2_Label3, lv_color_hex(0x5A5D5B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen2_Label3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_Panel3 = lv_obj_create(ui_LANIPCONFIG);
lv_obj_set_width( ui_WANIPCONFIG_Panel3, 70);
lv_obj_set_height( ui_WANIPCONFIG_Panel3, 13);
lv_obj_set_x( ui_WANIPCONFIG_Panel3, 27 );
lv_obj_set_y( ui_WANIPCONFIG_Panel3, -33 );
lv_obj_set_align( ui_WANIPCONFIG_Panel3, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_WANIPCONFIG_Panel3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_WANIPCONFIG_Panel3, lv_color_hex(0x11F308), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_WANIPCONFIG_Panel3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_WANIPCONFIG_Panel3, lv_color_hex(0x11F308), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_WANIPCONFIG_Panel3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_Label9 = lv_label_create(ui_LANIPCONFIG);
lv_obj_set_width( ui_WANIPCONFIG_Label9, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_WANIPCONFIG_Label9, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_WANIPCONFIG_Label9, -38 );
lv_obj_set_y( ui_WANIPCONFIG_Label9, -34 );
lv_obj_set_align( ui_WANIPCONFIG_Label9, LV_ALIGN_CENTER );
lv_label_set_text(ui_WANIPCONFIG_Label9,"DHCP:");
lv_obj_set_style_text_color(ui_WANIPCONFIG_Label9, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label9, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_WANIPCONFIG_Label9, &lv_font_montserrat_12, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_Label10 = lv_label_create(ui_LANIPCONFIG);
lv_obj_set_width( ui_WANIPCONFIG_Label10, 120);
lv_obj_set_height( ui_WANIPCONFIG_Label10, 15);
lv_obj_set_x( ui_WANIPCONFIG_Label10, 5 );
lv_obj_set_y( ui_WANIPCONFIG_Label10, -9 );
lv_obj_set_align( ui_WANIPCONFIG_Label10, LV_ALIGN_LEFT_MID );
lv_label_set_text(ui_WANIPCONFIG_Label10,"IP:  192.168.134.27/24");
lv_obj_set_style_text_color(ui_WANIPCONFIG_Label10, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label10, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_WANIPCONFIG_Label10, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_WANIPCONFIG_Label10, lv_color_hex(0x6E6F6E), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_WANIPCONFIG_Label10, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_WANIPCONFIG_Label10, 1, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_WANIPCONFIG_Label10, LV_BORDER_SIDE_FULL, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_Image5 = lv_img_create(ui_LANIPCONFIG);
lv_img_set_src(ui_WANIPCONFIG_Image5, &ui_img_eth_img_png);
lv_obj_set_width( ui_WANIPCONFIG_Image5, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_WANIPCONFIG_Image5, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_WANIPCONFIG_Image5, -47 );
lv_obj_set_y( ui_WANIPCONFIG_Image5, 34 );
lv_obj_set_align( ui_WANIPCONFIG_Image5, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_WANIPCONFIG_Image5, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_WANIPCONFIG_Image5, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_WANIPCONFIG_Label12 = lv_label_create(ui_LANIPCONFIG);
lv_obj_set_width( ui_WANIPCONFIG_Label12, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_WANIPCONFIG_Label12, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_WANIPCONFIG_Label12, 28 );
lv_obj_set_y( ui_WANIPCONFIG_Label12, -33 );
lv_obj_set_align( ui_WANIPCONFIG_Label12, LV_ALIGN_CENTER );
lv_label_set_text(ui_WANIPCONFIG_Label12,"ENABLED");
lv_obj_set_style_text_color(ui_WANIPCONFIG_Label12, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label12, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_WANIPCONFIG_Label12, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_Image6 = lv_img_create(ui_LANIPCONFIG);
lv_img_set_src(ui_WANIPCONFIG_Image6, &ui_img_frecce_d_r_png);
lv_obj_set_width( ui_WANIPCONFIG_Image6, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_WANIPCONFIG_Image6, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_WANIPCONFIG_Image6, LV_ALIGN_BOTTOM_MID );
lv_obj_add_flag( ui_WANIPCONFIG_Image6, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_WANIPCONFIG_Image6, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

}
void ui_WLANIPCONFIG_screen_init(void)
{
ui_WLANIPCONFIG = lv_obj_create(NULL);
lv_obj_clear_flag( ui_WLANIPCONFIG, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_WLANIPCONFIG, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_WLANIPCONFIG, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen2_Label2 = lv_label_create(ui_WLANIPCONFIG);
lv_obj_set_width( ui_Screen2_Label2, 128);
lv_obj_set_height( ui_Screen2_Label2, 18);
lv_obj_set_x( ui_Screen2_Label2, 0 );
lv_obj_set_y( ui_Screen2_Label2, -55 );
lv_obj_set_align( ui_Screen2_Label2, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen2_Label2,"IP CONFIG. - WLAN");
lv_obj_set_style_text_color(ui_Screen2_Label2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Screen2_Label2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Screen2_Label2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Screen2_Label2, &lv_font_montserrat_12, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Screen2_Label2, lv_color_hex(0x5A5D5B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen2_Label2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_Panel1 = lv_obj_create(ui_WLANIPCONFIG);
lv_obj_set_width( ui_WANIPCONFIG_Panel1, 70);
lv_obj_set_height( ui_WANIPCONFIG_Panel1, 13);
lv_obj_set_x( ui_WANIPCONFIG_Panel1, 27 );
lv_obj_set_y( ui_WANIPCONFIG_Panel1, -33 );
lv_obj_set_align( ui_WANIPCONFIG_Panel1, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_WANIPCONFIG_Panel1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_WANIPCONFIG_Panel1, lv_color_hex(0x11F308), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_WANIPCONFIG_Panel1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_WANIPCONFIG_Panel1, lv_color_hex(0x11F308), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_WANIPCONFIG_Panel1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_Label5 = lv_label_create(ui_WLANIPCONFIG);
lv_obj_set_width( ui_WANIPCONFIG_Label5, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_WANIPCONFIG_Label5, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_WANIPCONFIG_Label5, -38 );
lv_obj_set_y( ui_WANIPCONFIG_Label5, -34 );
lv_obj_set_align( ui_WANIPCONFIG_Label5, LV_ALIGN_CENTER );
lv_label_set_text(ui_WANIPCONFIG_Label5,"DHCP:");
lv_obj_set_style_text_color(ui_WANIPCONFIG_Label5, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label5, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_WANIPCONFIG_Label5, &lv_font_montserrat_12, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_Label6 = lv_label_create(ui_WLANIPCONFIG);
lv_obj_set_width( ui_WANIPCONFIG_Label6, 120);
lv_obj_set_height( ui_WANIPCONFIG_Label6, 15);
lv_obj_set_x( ui_WANIPCONFIG_Label6, 5 );
lv_obj_set_y( ui_WANIPCONFIG_Label6, -9 );
lv_obj_set_align( ui_WANIPCONFIG_Label6, LV_ALIGN_LEFT_MID );
lv_label_set_text(ui_WANIPCONFIG_Label6,"IP:  192.168.134.27/24");
lv_obj_set_style_text_color(ui_WANIPCONFIG_Label6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label6, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_WANIPCONFIG_Label6, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_WANIPCONFIG_Label6, lv_color_hex(0x6E6F6E), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_WANIPCONFIG_Label6, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_WANIPCONFIG_Label6, 1, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_WANIPCONFIG_Label6, LV_BORDER_SIDE_FULL, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_Label7 = lv_label_create(ui_WLANIPCONFIG);
lv_obj_set_width( ui_WANIPCONFIG_Label7, 120);
lv_obj_set_height( ui_WANIPCONFIG_Label7, 15);
lv_obj_set_x( ui_WANIPCONFIG_Label7, 5 );
lv_obj_set_y( ui_WANIPCONFIG_Label7, 11 );
lv_obj_set_align( ui_WANIPCONFIG_Label7, LV_ALIGN_LEFT_MID );
lv_label_set_text(ui_WANIPCONFIG_Label7,"GW:  192.168.1.254");
lv_obj_set_style_text_color(ui_WANIPCONFIG_Label7, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label7, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_WANIPCONFIG_Label7, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_WANIPCONFIG_Label7, lv_color_hex(0x6E6F6E), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_WANIPCONFIG_Label7, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_WANIPCONFIG_Label7, 1, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_WANIPCONFIG_Label7, LV_BORDER_SIDE_FULL, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_Image3 = lv_img_create(ui_WLANIPCONFIG);
lv_img_set_src(ui_WANIPCONFIG_Image3, &ui_img_wifi_img2_png);
lv_obj_set_width( ui_WANIPCONFIG_Image3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_WANIPCONFIG_Image3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_WANIPCONFIG_Image3, -47 );
lv_obj_set_y( ui_WANIPCONFIG_Image3, 34 );
lv_obj_set_align( ui_WANIPCONFIG_Image3, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_WANIPCONFIG_Image3, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_WANIPCONFIG_Image3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_WANIPCONFIG_Label8 = lv_label_create(ui_WLANIPCONFIG);
lv_obj_set_width( ui_WANIPCONFIG_Label8, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_WANIPCONFIG_Label8, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_WANIPCONFIG_Label8, 28 );
lv_obj_set_y( ui_WANIPCONFIG_Label8, -33 );
lv_obj_set_align( ui_WANIPCONFIG_Label8, LV_ALIGN_CENTER );
lv_label_set_text(ui_WANIPCONFIG_Label8,"ENABLED");
lv_obj_set_style_text_color(ui_WANIPCONFIG_Label8, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label8, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_WANIPCONFIG_Label8, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_Image4 = lv_img_create(ui_WLANIPCONFIG);
lv_img_set_src(ui_WANIPCONFIG_Image4, &ui_img_frecce_d_r_png);
lv_obj_set_width( ui_WANIPCONFIG_Image4, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_WANIPCONFIG_Image4, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_WANIPCONFIG_Image4, LV_ALIGN_BOTTOM_MID );
lv_obj_add_flag( ui_WANIPCONFIG_Image4, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_WANIPCONFIG_Image4, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

}
void ui_Splash_screen_init(void)
{
ui_Splash = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Splash, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Screen1_Image2 = lv_img_create(ui_Splash);
lv_img_set_src(ui_Screen1_Image2, &ui_img_logo_png);
lv_obj_set_width( ui_Screen1_Image2, LV_SIZE_CONTENT);  /// 128
lv_obj_set_height( ui_Screen1_Image2, LV_SIZE_CONTENT);   /// 64
lv_obj_set_x( ui_Screen1_Image2, -1 );
lv_obj_set_y( ui_Screen1_Image2, 0 );
lv_obj_set_align( ui_Screen1_Image2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Screen1_Image2, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Screen1_Image2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

}

void ui_init( void )
{
lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_Home_screen_init();
ui_VPNSTATUS_screen_init();
ui_WANIPCONFIG_screen_init();
ui_LANIPCONFIG_screen_init();
ui_WLANIPCONFIG_screen_init();
ui_Splash_screen_init();
lv_disp_load_scr( ui_Home);
}
