// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: sevio_ui_02

#include "ui.h"
#include "ui_helpers.h"
#include "ui_comp.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t *ui_MOBILE;
lv_obj_t *ui_Screen2_Label1;
lv_obj_t *ui_WANIPCONFIG_Panel2;
lv_obj_t *ui_MOBILE_Status_label;
lv_obj_t *ui_WANIPCONFIG_Label4;
lv_obj_t *ui_WANIPCONFIG_Image2;
lv_obj_t *ui_WANIPCONFIG_Button_RG;
lv_obj_t *ui_WANIPCONFIG_ButtonDN;
lv_obj_t *ui_WANIPCONFIG_Button_LF;
lv_obj_t *ui_MOBILE_operator_Label;
lv_obj_t *ui_MOBILE_APN_label;
lv_obj_t *ui_MOBILE_operator_Value;
lv_obj_t *ui_MOBILE_APN__Value;
lv_obj_t *ui_MOBILE_Image1;
lv_obj_t *ui_MOBILE_Image2;
lv_obj_t *ui_GPS_Screen;
lv_obj_t *ui_GPS_label;
lv_obj_t *ui_GPS_Panel3;
lv_obj_t *ui_GPSLabel9;
lv_obj_t *ui_GPS_Label12;
lv_obj_t *ui_GPS_Image6;
lv_obj_t *ui_GPS_Label1;
lv_obj_t *ui_GPSLabel2;
lv_obj_t *ui_GPS_Label3;
lv_obj_t *ui_GPS_Label10;
lv_obj_t *ui_GPS_Label11;
lv_obj_t *ui_GPS_Screen_Image3;
lv_obj_t *ui_GPS_Latitude_label;
lv_obj_t *ui_GPS_Longitude_label;
lv_obj_t *ui_GPS_LastFix_label;
lv_obj_t *ui_GPS_altitude_label;
lv_obj_t *ui_GPS_altitude_label1;

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
lv_obj_clear_flag( ui_MOBILE, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_MOBILE, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_MOBILE, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen2_Label1 = lv_label_create(ui_MOBILE);
lv_obj_set_width( ui_Screen2_Label1, 128);
lv_obj_set_height( ui_Screen2_Label1, 18);
lv_obj_set_x( ui_Screen2_Label1, 0 );
lv_obj_set_y( ui_Screen2_Label1, -55 );
lv_obj_set_align( ui_Screen2_Label1, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen2_Label1,"MOBILE");
lv_obj_set_style_text_color(ui_Screen2_Label1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Screen2_Label1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Screen2_Label1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Screen2_Label1, &lv_font_montserrat_12, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Screen2_Label1, lv_color_hex(0x5A5D5B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen2_Label1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_Panel2 = lv_obj_create(ui_MOBILE);
lv_obj_set_width( ui_WANIPCONFIG_Panel2, 77);
lv_obj_set_height( ui_WANIPCONFIG_Panel2, 13);
lv_obj_set_x( ui_WANIPCONFIG_Panel2, 23 );
lv_obj_set_y( ui_WANIPCONFIG_Panel2, -33 );
lv_obj_set_align( ui_WANIPCONFIG_Panel2, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_WANIPCONFIG_Panel2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_WANIPCONFIG_Panel2, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_WANIPCONFIG_Panel2, lv_color_hex(0x11F308), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_WANIPCONFIG_Panel2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_WANIPCONFIG_Panel2, lv_color_hex(0x11F308), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_WANIPCONFIG_Panel2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_MOBILE_Status_label = lv_label_create(ui_MOBILE);
lv_obj_set_width( ui_MOBILE_Status_label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_MOBILE_Status_label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_MOBILE_Status_label, 1 );
lv_obj_set_y( ui_MOBILE_Status_label, -34 );
lv_obj_set_align( ui_MOBILE_Status_label, LV_ALIGN_LEFT_MID );
lv_label_set_text(ui_MOBILE_Status_label,"Status:");
lv_obj_set_style_text_color(ui_MOBILE_Status_label, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_MOBILE_Status_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_MOBILE_Status_label, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_Label4 = lv_label_create(ui_MOBILE);
lv_obj_set_width( ui_WANIPCONFIG_Label4, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_WANIPCONFIG_Label4, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_WANIPCONFIG_Label4, 25 );
lv_obj_set_y( ui_WANIPCONFIG_Label4, -33 );
lv_obj_set_align( ui_WANIPCONFIG_Label4, LV_ALIGN_CENTER );
lv_label_set_text(ui_WANIPCONFIG_Label4,"REGISTERED");
lv_obj_set_style_text_color(ui_WANIPCONFIG_Label4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_WANIPCONFIG_Label4, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_WANIPCONFIG_Label4, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_Image2 = lv_img_create(ui_MOBILE);
lv_img_set_src(ui_WANIPCONFIG_Image2, &ui_img_frecce_d_r_png);
lv_obj_set_width( ui_WANIPCONFIG_Image2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_WANIPCONFIG_Image2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_WANIPCONFIG_Image2, 2 );
lv_obj_set_y( ui_WANIPCONFIG_Image2, 0 );
lv_obj_set_align( ui_WANIPCONFIG_Image2, LV_ALIGN_BOTTOM_MID );
lv_obj_add_flag( ui_WANIPCONFIG_Image2, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_WANIPCONFIG_Image2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_WANIPCONFIG_Button_RG = lv_btn_create(ui_MOBILE);
lv_obj_set_width( ui_WANIPCONFIG_Button_RG, 16);
lv_obj_set_height( ui_WANIPCONFIG_Button_RG, 18);
lv_obj_set_x( ui_WANIPCONFIG_Button_RG, 55 );
lv_obj_set_y( ui_WANIPCONFIG_Button_RG, 55 );
lv_obj_set_align( ui_WANIPCONFIG_Button_RG, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_WANIPCONFIG_Button_RG, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_WANIPCONFIG_Button_RG, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_opa(ui_WANIPCONFIG_Button_RG, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_ButtonDN = lv_btn_create(ui_MOBILE);
lv_obj_set_width( ui_WANIPCONFIG_ButtonDN, 15);
lv_obj_set_height( ui_WANIPCONFIG_ButtonDN, 20);
lv_obj_set_x( ui_WANIPCONFIG_ButtonDN, 1 );
lv_obj_set_y( ui_WANIPCONFIG_ButtonDN, 55 );
lv_obj_set_align( ui_WANIPCONFIG_ButtonDN, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_WANIPCONFIG_ButtonDN, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_WANIPCONFIG_ButtonDN, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_opa(ui_WANIPCONFIG_ButtonDN, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_WANIPCONFIG_Button_LF = lv_btn_create(ui_MOBILE);
lv_obj_set_width( ui_WANIPCONFIG_Button_LF, 15);
lv_obj_set_height( ui_WANIPCONFIG_Button_LF, 19);
lv_obj_set_x( ui_WANIPCONFIG_Button_LF, -52 );
lv_obj_set_y( ui_WANIPCONFIG_Button_LF, 56 );
lv_obj_set_align( ui_WANIPCONFIG_Button_LF, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_WANIPCONFIG_Button_LF, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_WANIPCONFIG_Button_LF, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_opa(ui_WANIPCONFIG_Button_LF, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_MOBILE_operator_Label = lv_label_create(ui_MOBILE);
lv_obj_set_width( ui_MOBILE_operator_Label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_MOBILE_operator_Label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_MOBILE_operator_Label, 1 );
lv_obj_set_y( ui_MOBILE_operator_Label, -15 );
lv_obj_set_align( ui_MOBILE_operator_Label, LV_ALIGN_LEFT_MID );
lv_label_set_text(ui_MOBILE_operator_Label,"Operator:");
lv_obj_set_style_text_color(ui_MOBILE_operator_Label, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_MOBILE_operator_Label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_MOBILE_operator_Label, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_MOBILE_APN_label = lv_label_create(ui_MOBILE);
lv_obj_set_width( ui_MOBILE_APN_label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_MOBILE_APN_label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_MOBILE_APN_label, 1 );
lv_obj_set_y( ui_MOBILE_APN_label, 3 );
lv_obj_set_align( ui_MOBILE_APN_label, LV_ALIGN_LEFT_MID );
lv_label_set_text(ui_MOBILE_APN_label,"APN:");
lv_obj_set_style_text_color(ui_MOBILE_APN_label, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_MOBILE_APN_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_MOBILE_APN_label, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_MOBILE_operator_Value = lv_label_create(ui_MOBILE);
lv_obj_set_width( ui_MOBILE_operator_Value, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_MOBILE_operator_Value, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_MOBILE_operator_Value, -1 );
lv_obj_set_y( ui_MOBILE_operator_Value, -15 );
lv_obj_set_align( ui_MOBILE_operator_Value, LV_ALIGN_RIGHT_MID );
lv_label_set_text(ui_MOBILE_operator_Value,"vodafone IT");
lv_obj_set_style_text_color(ui_MOBILE_operator_Value, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_MOBILE_operator_Value, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_MOBILE_operator_Value, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_MOBILE_APN__Value = lv_label_create(ui_MOBILE);
lv_obj_set_width( ui_MOBILE_APN__Value, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_MOBILE_APN__Value, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_MOBILE_APN__Value, -1 );
lv_obj_set_y( ui_MOBILE_APN__Value, 3 );
lv_obj_set_align( ui_MOBILE_APN__Value, LV_ALIGN_RIGHT_MID );
lv_label_set_text(ui_MOBILE_APN__Value,"web.omnitel.it");
lv_obj_set_style_text_color(ui_MOBILE_APN__Value, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_MOBILE_APN__Value, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_MOBILE_APN__Value, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_MOBILE_Image1 = lv_img_create(ui_MOBILE);
lv_img_set_src(ui_MOBILE_Image1, &ui_img_sim_png);
lv_obj_set_width( ui_MOBILE_Image1, LV_SIZE_CONTENT);  /// 25
lv_obj_set_height( ui_MOBILE_Image1, LV_SIZE_CONTENT);   /// 26
lv_obj_set_x( ui_MOBILE_Image1, -48 );
lv_obj_set_y( ui_MOBILE_Image1, 29 );
lv_obj_set_align( ui_MOBILE_Image1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_MOBILE_Image1, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_MOBILE_Image1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_img_set_zoom(ui_MOBILE_Image1,200);

ui_MOBILE_Image2 = lv_img_create(ui_MOBILE);
lv_img_set_src(ui_MOBILE_Image2, &ui_img_mediumsignal_png);
lv_obj_set_width( ui_MOBILE_Image2, LV_SIZE_CONTENT);  /// 30
lv_obj_set_height( ui_MOBILE_Image2, LV_SIZE_CONTENT);   /// 19
lv_obj_set_x( ui_MOBILE_Image2, 42 );
lv_obj_set_y( ui_MOBILE_Image2, 32 );
lv_obj_set_align( ui_MOBILE_Image2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_MOBILE_Image2, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_MOBILE_Image2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_img_set_zoom(ui_MOBILE_Image2,280);

}
void ui_GPS_Screen_screen_init(void)
{
ui_GPS_Screen = lv_obj_create(NULL);
lv_obj_clear_flag( ui_GPS_Screen, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_GPS_Screen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_GPS_Screen, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_GPS_label = lv_label_create(ui_GPS_Screen);
lv_obj_set_width( ui_GPS_label, 128);
lv_obj_set_height( ui_GPS_label, 18);
lv_obj_set_x( ui_GPS_label, 0 );
lv_obj_set_y( ui_GPS_label, -55 );
lv_obj_set_align( ui_GPS_label, LV_ALIGN_CENTER );
lv_label_set_text(ui_GPS_label,"GPS");
lv_obj_set_style_text_color(ui_GPS_label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_GPS_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_GPS_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_GPS_label, &lv_font_montserrat_12, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_GPS_label, lv_color_hex(0x5A5D5B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_GPS_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_GPS_Panel3 = lv_obj_create(ui_GPS_Screen);
lv_obj_set_width( ui_GPS_Panel3, 80);
lv_obj_set_height( ui_GPS_Panel3, 13);
lv_obj_set_x( ui_GPS_Panel3, 23 );
lv_obj_set_y( ui_GPS_Panel3, -36 );
lv_obj_set_align( ui_GPS_Panel3, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_GPS_Panel3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_GPS_Panel3, lv_color_hex(0x11F308), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_GPS_Panel3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_GPS_Panel3, lv_color_hex(0x11F308), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_GPS_Panel3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_GPSLabel9 = lv_label_create(ui_GPS_Screen);
lv_obj_set_width( ui_GPSLabel9, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_GPSLabel9, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_GPSLabel9, 1 );
lv_obj_set_y( ui_GPSLabel9, -35 );
lv_obj_set_align( ui_GPSLabel9, LV_ALIGN_LEFT_MID );
lv_label_set_text(ui_GPSLabel9,"Status:");
lv_obj_set_style_text_color(ui_GPSLabel9, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_GPSLabel9, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_GPSLabel9, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_GPS_Label12 = lv_label_create(ui_GPS_Screen);
lv_obj_set_width( ui_GPS_Label12, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_GPS_Label12, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_GPS_Label12, 23 );
lv_obj_set_y( ui_GPS_Label12, -36 );
lv_obj_set_align( ui_GPS_Label12, LV_ALIGN_CENTER );
lv_label_set_text(ui_GPS_Label12,"REGISTERED");
lv_obj_set_style_text_color(ui_GPS_Label12, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_GPS_Label12, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_GPS_Label12, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_GPS_Image6 = lv_img_create(ui_GPS_Screen);
lv_img_set_src(ui_GPS_Image6, &ui_img_frecce_d_r_png);
lv_obj_set_width( ui_GPS_Image6, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_GPS_Image6, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_GPS_Image6, LV_ALIGN_BOTTOM_MID );
lv_obj_add_flag( ui_GPS_Image6, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_GPS_Image6, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_GPS_Label1 = lv_label_create(ui_GPS_Screen);
lv_obj_set_width( ui_GPS_Label1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_GPS_Label1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_GPS_Label1, 1 );
lv_obj_set_y( ui_GPS_Label1, -20 );
lv_obj_set_align( ui_GPS_Label1, LV_ALIGN_LEFT_MID );
lv_label_set_text(ui_GPS_Label1,"Latitude:");
lv_obj_set_style_text_color(ui_GPS_Label1, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_GPS_Label1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_GPS_Label1, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_GPSLabel2 = lv_label_create(ui_GPS_Screen);
lv_obj_set_width( ui_GPSLabel2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_GPSLabel2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_GPSLabel2, 1 );
lv_obj_set_y( ui_GPSLabel2, -5 );
lv_obj_set_align( ui_GPSLabel2, LV_ALIGN_LEFT_MID );
lv_label_set_text(ui_GPSLabel2,"Longitude:");
lv_obj_set_style_text_color(ui_GPSLabel2, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_GPSLabel2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_GPSLabel2, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_GPS_Label3 = lv_label_create(ui_GPS_Screen);
lv_obj_set_width( ui_GPS_Label3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_GPS_Label3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_GPS_Label3, -15 );
lv_obj_set_y( ui_GPS_Label3, 10 );
lv_obj_set_align( ui_GPS_Label3, LV_ALIGN_CENTER );
lv_label_set_text(ui_GPS_Label3,"Last fix:");
lv_obj_set_style_text_color(ui_GPS_Label3, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_GPS_Label3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_GPS_Label3, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_GPS_Label10 = lv_label_create(ui_GPS_Screen);
lv_obj_set_width( ui_GPS_Label10, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_GPS_Label10, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_GPS_Label10, 0 );
lv_obj_set_y( ui_GPS_Label10, 25 );
lv_obj_set_align( ui_GPS_Label10, LV_ALIGN_CENTER );
lv_label_set_text(ui_GPS_Label10,"Altitude:");
lv_obj_set_style_text_color(ui_GPS_Label10, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_GPS_Label10, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_GPS_Label10, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_GPS_Label11 = lv_label_create(ui_GPS_Screen);
lv_obj_set_width( ui_GPS_Label11, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_GPS_Label11, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_GPS_Label11, 10 );
lv_obj_set_y( ui_GPS_Label11, 40 );
lv_obj_set_align( ui_GPS_Label11, LV_ALIGN_CENTER );
lv_label_set_text(ui_GPS_Label11,"Satellites:");
lv_obj_set_style_text_color(ui_GPS_Label11, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_GPS_Label11, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_GPS_Label11, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_GPS_Screen_Image3 = lv_img_create(ui_GPS_Screen);
lv_img_set_src(ui_GPS_Screen_Image3, &ui_img_gps_png);
lv_obj_set_width( ui_GPS_Screen_Image3, LV_SIZE_CONTENT);  /// 30
lv_obj_set_height( ui_GPS_Screen_Image3, LV_SIZE_CONTENT);   /// 33
lv_obj_set_x( ui_GPS_Screen_Image3, -47 );
lv_obj_set_y( ui_GPS_Screen_Image3, 30 );
lv_obj_set_align( ui_GPS_Screen_Image3, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_GPS_Screen_Image3, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_GPS_Screen_Image3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_GPS_Latitude_label = lv_label_create(ui_GPS_Screen);
lv_obj_set_width( ui_GPS_Latitude_label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_GPS_Latitude_label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_GPS_Latitude_label, -1 );
lv_obj_set_y( ui_GPS_Latitude_label, -20 );
lv_obj_set_align( ui_GPS_Latitude_label, LV_ALIGN_RIGHT_MID );
lv_label_set_text(ui_GPS_Latitude_label,"47°34.006'N");
lv_obj_set_style_text_color(ui_GPS_Latitude_label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_GPS_Latitude_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_GPS_Latitude_label, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_GPS_Longitude_label = lv_label_create(ui_GPS_Screen);
lv_obj_set_width( ui_GPS_Longitude_label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_GPS_Longitude_label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_GPS_Longitude_label, -1 );
lv_obj_set_y( ui_GPS_Longitude_label, -5 );
lv_obj_set_align( ui_GPS_Longitude_label, LV_ALIGN_RIGHT_MID );
lv_label_set_text(ui_GPS_Longitude_label,"14°3.453'E");
lv_obj_set_style_text_color(ui_GPS_Longitude_label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_GPS_Longitude_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_GPS_Longitude_label, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_GPS_LastFix_label = lv_label_create(ui_GPS_Screen);
lv_obj_set_width( ui_GPS_LastFix_label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_GPS_LastFix_label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_GPS_LastFix_label, -1 );
lv_obj_set_y( ui_GPS_LastFix_label, 10 );
lv_obj_set_align( ui_GPS_LastFix_label, LV_ALIGN_RIGHT_MID );
lv_label_set_text(ui_GPS_LastFix_label,"15:56:23");
lv_obj_set_style_text_color(ui_GPS_LastFix_label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_GPS_LastFix_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_GPS_LastFix_label, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_GPS_altitude_label = lv_label_create(ui_GPS_Screen);
lv_obj_set_width( ui_GPS_altitude_label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_GPS_altitude_label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_GPS_altitude_label, -1 );
lv_obj_set_y( ui_GPS_altitude_label, 25 );
lv_obj_set_align( ui_GPS_altitude_label, LV_ALIGN_RIGHT_MID );
lv_label_set_text(ui_GPS_altitude_label,"123m");
lv_obj_set_style_text_color(ui_GPS_altitude_label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_GPS_altitude_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_GPS_altitude_label, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_GPS_altitude_label1 = lv_label_create(ui_GPS_Screen);
lv_obj_set_width( ui_GPS_altitude_label1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_GPS_altitude_label1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_GPS_altitude_label1, -1 );
lv_obj_set_y( ui_GPS_altitude_label1, 40 );
lv_obj_set_align( ui_GPS_altitude_label1, LV_ALIGN_RIGHT_MID );
lv_label_set_text(ui_GPS_altitude_label1,"5/6");
lv_obj_set_style_text_color(ui_GPS_altitude_label1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_GPS_altitude_label1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_GPS_altitude_label1, &lv_font_montserrat_10, LV_PART_MAIN| LV_STATE_DEFAULT);

}

void ui_init( void )
{LV_EVENT_GET_COMP_CHILD = lv_event_register_id();

lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_MOBILE_screen_init();
ui_GPS_Screen_screen_init();
lv_disp_load_scr( ui_MOBILE);
}
