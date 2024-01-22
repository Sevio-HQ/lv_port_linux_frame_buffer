// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: sevio_ui_02

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_MOBILE;
lv_obj_t * ui_MOBILE_Logo;
lv_obj_t * ui_MOBILE_PageLabel;
lv_obj_t * ui_MOBILE_BarUp;
lv_obj_t * ui_MOBILE_Status_label;
lv_obj_t * ui_MobileStatus_Panel;
lv_obj_t * ui_MobileStatus_Label4;
lv_obj_t * ui_MOBILE_operator_Label;
lv_obj_t * ui_MOBILE_operator_Value;
lv_obj_t * ui_MOBILE_APN_label;
lv_obj_t * ui_MOBILE_APN__Value;
lv_obj_t * ui_MOBILE_NO_Signal;
lv_obj_t * ui_MOBILE_Signal1;
lv_obj_t * ui_MOBILE_Signal2;
lv_obj_t * ui_MOBILE_Signal3;
lv_obj_t * ui_MOBILE_Signal4;
lv_obj_t * ui_MOBILE_Signal5;
lv_obj_t * ui_MOBILE_BarDown;
lv_obj_t * ui_MOBILE_RowLeft;
lv_obj_t * ui_MOBILE_RowDown;
lv_obj_t * ui_MOBILE_RowRight;
lv_obj_t * ui_MOBILE_Image12;
lv_obj_t * ui_GPS_Screen;
lv_obj_t * ui_GPS_label;
lv_obj_t * ui_GPS_Panel3;
lv_obj_t * ui_GPSLabel9;
lv_obj_t * ui_GPS_Label12;
lv_obj_t * ui_GPS_Label1;
lv_obj_t * ui_GPSLabel2;
lv_obj_t * ui_GPS_Label3;
lv_obj_t * ui_GPS_Label10;
lv_obj_t * ui_GPS_Label11;
lv_obj_t * ui_GPS_Screen_Image3;
lv_obj_t * ui_GPS_Latitude_label;
lv_obj_t * ui_GPS_Longitude_label;
lv_obj_t * ui_GPS_LastFix_label;
lv_obj_t * ui_GPS_altitude_label;
lv_obj_t * ui_GPS_altitude_label1;

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

    ui_MOBILE_Logo = lv_img_create(ui_MOBILE);
    lv_img_set_src(ui_MOBILE_Logo, &ui_img_sim2_png);
    lv_obj_set_width(ui_MOBILE_Logo, LV_SIZE_CONTENT);   /// 21
    lv_obj_set_height(ui_MOBILE_Logo, LV_SIZE_CONTENT);    /// 13
    lv_obj_set_x(ui_MOBILE_Logo, -49);
    lv_obj_set_y(ui_MOBILE_Logo, -53);
    lv_obj_set_align(ui_MOBILE_Logo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MOBILE_Logo, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_MOBILE_Logo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MOBILE_PageLabel = lv_label_create(ui_MOBILE);
    lv_obj_set_width(ui_MOBILE_PageLabel, 102);
    lv_obj_set_height(ui_MOBILE_PageLabel, 18);
    lv_obj_set_x(ui_MOBILE_PageLabel, 29);
    lv_obj_set_y(ui_MOBILE_PageLabel, 4);
    lv_label_set_text(ui_MOBILE_PageLabel, "MOBILE");
    lv_obj_set_style_text_color(ui_MOBILE_PageLabel, lv_color_hex(0xB4B2B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MOBILE_PageLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_MOBILE_PageLabel, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MOBILE_PageLabel, &ui_font_arialbd, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MOBILE_BarUp = lv_obj_create(ui_MOBILE);
    lv_obj_set_width(ui_MOBILE_BarUp, 120);
    lv_obj_set_height(ui_MOBILE_BarUp, 1);
    lv_obj_set_x(ui_MOBILE_BarUp, 0);
    lv_obj_set_y(ui_MOBILE_BarUp, -43);
    lv_obj_set_align(ui_MOBILE_BarUp, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_MOBILE_BarUp, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_MOBILE_BarUp, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_MOBILE_BarUp, lv_color_hex(0xB4B2B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MOBILE_BarUp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_MOBILE_BarUp, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MOBILE_Status_label = lv_label_create(ui_MOBILE);
    lv_obj_set_width(ui_MOBILE_Status_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MOBILE_Status_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MOBILE_Status_label, 3);
    lv_obj_set_y(ui_MOBILE_Status_label, 28);
    lv_label_set_text(ui_MOBILE_Status_label, "Status:");
    lv_obj_set_style_text_color(ui_MOBILE_Status_label, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MOBILE_Status_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MOBILE_Status_label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MobileStatus_Panel = lv_obj_create(ui_MOBILE);
    lv_obj_set_width(ui_MobileStatus_Panel, 77);
    lv_obj_set_height(ui_MobileStatus_Panel, 14);
    lv_obj_set_x(ui_MobileStatus_Panel, 21);
    lv_obj_set_y(ui_MobileStatus_Panel, -30);
    lv_obj_set_align(ui_MobileStatus_Panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_MobileStatus_Panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_MobileStatus_Panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_MobileStatus_Panel, lv_color_hex(0x2563EB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MobileStatus_Panel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_MobileStatus_Panel, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MobileStatus_Label4 = lv_label_create(ui_MOBILE);
    lv_obj_set_width(ui_MobileStatus_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MobileStatus_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MobileStatus_Label4, 21);
    lv_obj_set_y(ui_MobileStatus_Label4, -29);
    lv_obj_set_align(ui_MobileStatus_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MobileStatus_Label4, "REGISTERED");
    lv_obj_set_style_text_color(ui_MobileStatus_Label4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MobileStatus_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_MobileStatus_Label4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MobileStatus_Label4, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MOBILE_operator_Label = lv_label_create(ui_MOBILE);
    lv_obj_set_width(ui_MOBILE_operator_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MOBILE_operator_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MOBILE_operator_Label, 3);
    lv_obj_set_y(ui_MOBILE_operator_Label, 47);
    lv_label_set_text(ui_MOBILE_operator_Label, "Operator:");
    lv_obj_set_style_text_color(ui_MOBILE_operator_Label, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MOBILE_operator_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MOBILE_operator_Label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MOBILE_operator_Value = lv_label_create(ui_MOBILE);
    lv_obj_set_width(ui_MOBILE_operator_Value, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MOBILE_operator_Value, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MOBILE_operator_Value, 3);
    lv_obj_set_y(ui_MOBILE_operator_Value, 62);
    lv_label_set_text(ui_MOBILE_operator_Value, "vodafone IT");
    lv_obj_set_style_text_color(ui_MOBILE_operator_Value, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MOBILE_operator_Value, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MOBILE_operator_Value, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MOBILE_APN_label = lv_label_create(ui_MOBILE);
    lv_obj_set_width(ui_MOBILE_APN_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MOBILE_APN_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MOBILE_APN_label, 3);
    lv_obj_set_y(ui_MOBILE_APN_label, 79);
    lv_label_set_text(ui_MOBILE_APN_label, "APN:");
    lv_obj_set_style_text_color(ui_MOBILE_APN_label, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MOBILE_APN_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MOBILE_APN_label, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MOBILE_APN__Value = lv_label_create(ui_MOBILE);
    lv_obj_set_width(ui_MOBILE_APN__Value, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MOBILE_APN__Value, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MOBILE_APN__Value, 3);
    lv_obj_set_y(ui_MOBILE_APN__Value, 95);
    lv_label_set_text(ui_MOBILE_APN__Value, "web.omnitel.it");
    lv_obj_set_style_text_color(ui_MOBILE_APN__Value, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MOBILE_APN__Value, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MOBILE_APN__Value, &ui_font_dejavusans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MOBILE_NO_Signal = lv_img_create(ui_MOBILE);
    lv_img_set_src(ui_MOBILE_NO_Signal, &ui_img_signal_0_png);
    lv_obj_set_width(ui_MOBILE_NO_Signal, LV_SIZE_CONTENT);   /// 40
    lv_obj_set_height(ui_MOBILE_NO_Signal, LV_SIZE_CONTENT);    /// 16
    lv_obj_set_x(ui_MOBILE_NO_Signal, 39);
    lv_obj_set_y(ui_MOBILE_NO_Signal, 18);
    lv_obj_set_align(ui_MOBILE_NO_Signal, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MOBILE_NO_Signal, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_MOBILE_NO_Signal, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MOBILE_Signal1 = lv_img_create(ui_MOBILE);
    lv_img_set_src(ui_MOBILE_Signal1, &ui_img_signal_1_png);
    lv_obj_set_width(ui_MOBILE_Signal1, LV_SIZE_CONTENT);   /// 40
    lv_obj_set_height(ui_MOBILE_Signal1, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_x(ui_MOBILE_Signal1, 39);
    lv_obj_set_y(ui_MOBILE_Signal1, 18);
    lv_obj_set_align(ui_MOBILE_Signal1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MOBILE_Signal1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_MOBILE_Signal1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MOBILE_Signal2 = lv_img_create(ui_MOBILE);
    lv_img_set_src(ui_MOBILE_Signal2, &ui_img_signal_2_png);
    lv_obj_set_width(ui_MOBILE_Signal2, LV_SIZE_CONTENT);   /// 40
    lv_obj_set_height(ui_MOBILE_Signal2, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_x(ui_MOBILE_Signal2, 39);
    lv_obj_set_y(ui_MOBILE_Signal2, 18);
    lv_obj_set_align(ui_MOBILE_Signal2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MOBILE_Signal2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_MOBILE_Signal2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MOBILE_Signal3 = lv_img_create(ui_MOBILE);
    lv_img_set_src(ui_MOBILE_Signal3, &ui_img_signal_3_png);
    lv_obj_set_width(ui_MOBILE_Signal3, LV_SIZE_CONTENT);   /// 40
    lv_obj_set_height(ui_MOBILE_Signal3, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_x(ui_MOBILE_Signal3, 39);
    lv_obj_set_y(ui_MOBILE_Signal3, 18);
    lv_obj_set_align(ui_MOBILE_Signal3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MOBILE_Signal3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_MOBILE_Signal3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MOBILE_Signal4 = lv_img_create(ui_MOBILE);
    lv_img_set_src(ui_MOBILE_Signal4, &ui_img_signal_4_png);
    lv_obj_set_width(ui_MOBILE_Signal4, LV_SIZE_CONTENT);   /// 40
    lv_obj_set_height(ui_MOBILE_Signal4, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_x(ui_MOBILE_Signal4, 39);
    lv_obj_set_y(ui_MOBILE_Signal4, 18);
    lv_obj_set_align(ui_MOBILE_Signal4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MOBILE_Signal4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_MOBILE_Signal4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MOBILE_Signal5 = lv_img_create(ui_MOBILE);
    lv_img_set_src(ui_MOBILE_Signal5, &ui_img_signal_5_png);
    lv_obj_set_width(ui_MOBILE_Signal5, LV_SIZE_CONTENT);   /// 40
    lv_obj_set_height(ui_MOBILE_Signal5, LV_SIZE_CONTENT);    /// 16
    lv_obj_set_x(ui_MOBILE_Signal5, 39);
    lv_obj_set_y(ui_MOBILE_Signal5, 18);
    lv_obj_set_align(ui_MOBILE_Signal5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MOBILE_Signal5, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_MOBILE_Signal5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MOBILE_BarDown = lv_obj_create(ui_MOBILE);
    lv_obj_set_width(ui_MOBILE_BarDown, 128);
    lv_obj_set_height(ui_MOBILE_BarDown, 16);
    lv_obj_set_x(ui_MOBILE_BarDown, 0);
    lv_obj_set_y(ui_MOBILE_BarDown, 56);
    lv_obj_set_align(ui_MOBILE_BarDown, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_MOBILE_BarDown, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_MOBILE_BarDown, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_MOBILE_BarDown, lv_color_hex(0x525552), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MOBILE_BarDown, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_MOBILE_BarDown, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MOBILE_RowLeft = lv_img_create(ui_MOBILE);
    lv_img_set_src(ui_MOBILE_RowLeft, &ui_img_row_l_png);
    lv_obj_set_width(ui_MOBILE_RowLeft, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_MOBILE_RowLeft, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_MOBILE_RowLeft, 3);
    lv_obj_set_y(ui_MOBILE_RowLeft, 115);
    lv_obj_add_flag(ui_MOBILE_RowLeft, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_MOBILE_RowLeft, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MOBILE_RowDown = lv_img_create(ui_MOBILE);
    lv_img_set_src(ui_MOBILE_RowDown, &ui_img_row_d_png);
    lv_obj_set_width(ui_MOBILE_RowDown, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_MOBILE_RowDown, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_MOBILE_RowDown, 59);
    lv_obj_set_y(ui_MOBILE_RowDown, 115);
    lv_obj_add_flag(ui_MOBILE_RowDown, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_MOBILE_RowDown, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MOBILE_RowRight = lv_img_create(ui_MOBILE);
    lv_img_set_src(ui_MOBILE_RowRight, &ui_img_row_r_png);
    lv_obj_set_width(ui_MOBILE_RowRight, LV_SIZE_CONTENT);   /// 11
    lv_obj_set_height(ui_MOBILE_RowRight, LV_SIZE_CONTENT);    /// 11
    lv_obj_set_x(ui_MOBILE_RowRight, 113);
    lv_obj_set_y(ui_MOBILE_RowRight, 115);
    lv_obj_add_flag(ui_MOBILE_RowRight, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_MOBILE_RowRight, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MOBILE_Image12 = lv_img_create(ui_MOBILE);
    lv_img_set_src(ui_MOBILE_Image12, &ui_img_sim_png);
    lv_obj_set_width(ui_MOBILE_Image12, LV_SIZE_CONTENT);   /// 21
    lv_obj_set_height(ui_MOBILE_Image12, LV_SIZE_CONTENT);    /// 13
    lv_obj_set_x(ui_MOBILE_Image12, -49);
    lv_obj_set_y(ui_MOBILE_Image12, -53);
    lv_obj_set_align(ui_MOBILE_Image12, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MOBILE_Image12, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_MOBILE_Image12, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

}
void ui_GPS_Screen_screen_init(void)
{
    ui_GPS_Screen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_GPS_Screen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_GPS_Screen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_GPS_Screen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_label = lv_label_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_label, 128);
    lv_obj_set_height(ui_GPS_label, 18);
    lv_obj_set_x(ui_GPS_label, 0);
    lv_obj_set_y(ui_GPS_label, -55);
    lv_obj_set_align(ui_GPS_label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_GPS_label, "GPS_ttt");
    lv_obj_set_style_text_color(ui_GPS_label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GPS_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_GPS_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GPS_label, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_GPS_label, lv_color_hex(0x5A5D5B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_GPS_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_Panel3 = lv_obj_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_Panel3, 80);
    lv_obj_set_height(ui_GPS_Panel3, 13);
    lv_obj_set_x(ui_GPS_Panel3, 23);
    lv_obj_set_y(ui_GPS_Panel3, -36);
    lv_obj_set_align(ui_GPS_Panel3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_GPS_Panel3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_GPS_Panel3, lv_color_hex(0x11F308), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_GPS_Panel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_GPS_Panel3, lv_color_hex(0x11F308), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_GPS_Panel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPSLabel9 = lv_label_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPSLabel9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GPSLabel9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GPSLabel9, 1);
    lv_obj_set_y(ui_GPSLabel9, -35);
    lv_obj_set_align(ui_GPSLabel9, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_GPSLabel9, "Status:");
    lv_obj_set_style_text_color(ui_GPSLabel9, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GPSLabel9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GPSLabel9, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_Label12 = lv_label_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_Label12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GPS_Label12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GPS_Label12, 23);
    lv_obj_set_y(ui_GPS_Label12, -36);
    lv_obj_set_align(ui_GPS_Label12, LV_ALIGN_CENTER);
    lv_label_set_text(ui_GPS_Label12, "REGISTERED");
    lv_obj_set_style_text_color(ui_GPS_Label12, lv_color_hex(0x211E1E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GPS_Label12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GPS_Label12, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_Label1 = lv_label_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GPS_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GPS_Label1, 1);
    lv_obj_set_y(ui_GPS_Label1, -20);
    lv_obj_set_align(ui_GPS_Label1, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_GPS_Label1, "Latitude:");
    lv_obj_set_style_text_color(ui_GPS_Label1, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GPS_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GPS_Label1, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPSLabel2 = lv_label_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPSLabel2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GPSLabel2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GPSLabel2, 1);
    lv_obj_set_y(ui_GPSLabel2, -5);
    lv_obj_set_align(ui_GPSLabel2, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_GPSLabel2, "Longitude:");
    lv_obj_set_style_text_color(ui_GPSLabel2, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GPSLabel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GPSLabel2, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_Label3 = lv_label_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GPS_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GPS_Label3, -15);
    lv_obj_set_y(ui_GPS_Label3, 10);
    lv_obj_set_align(ui_GPS_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_GPS_Label3, "Last fix:");
    lv_obj_set_style_text_color(ui_GPS_Label3, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GPS_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GPS_Label3, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_Label10 = lv_label_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_Label10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GPS_Label10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GPS_Label10, 0);
    lv_obj_set_y(ui_GPS_Label10, 25);
    lv_obj_set_align(ui_GPS_Label10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_GPS_Label10, "Altitude:");
    lv_obj_set_style_text_color(ui_GPS_Label10, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GPS_Label10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GPS_Label10, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_Label11 = lv_label_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_Label11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GPS_Label11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GPS_Label11, 10);
    lv_obj_set_y(ui_GPS_Label11, 40);
    lv_obj_set_align(ui_GPS_Label11, LV_ALIGN_CENTER);
    lv_label_set_text(ui_GPS_Label11, "Satellites:");
    lv_obj_set_style_text_color(ui_GPS_Label11, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GPS_Label11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GPS_Label11, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_Screen_Image3 = lv_img_create(ui_GPS_Screen);
    lv_img_set_src(ui_GPS_Screen_Image3, &ui_img_gps_png);
    lv_obj_set_width(ui_GPS_Screen_Image3, LV_SIZE_CONTENT);   /// 30
    lv_obj_set_height(ui_GPS_Screen_Image3, LV_SIZE_CONTENT);    /// 33
    lv_obj_set_x(ui_GPS_Screen_Image3, -47);
    lv_obj_set_y(ui_GPS_Screen_Image3, 30);
    lv_obj_set_align(ui_GPS_Screen_Image3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_GPS_Screen_Image3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_GPS_Screen_Image3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_GPS_Latitude_label = lv_label_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_Latitude_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GPS_Latitude_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GPS_Latitude_label, -1);
    lv_obj_set_y(ui_GPS_Latitude_label, -20);
    lv_obj_set_align(ui_GPS_Latitude_label, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_GPS_Latitude_label, "47°34.006'N");
    lv_obj_set_style_text_color(ui_GPS_Latitude_label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GPS_Latitude_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GPS_Latitude_label, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_Longitude_label = lv_label_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_Longitude_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GPS_Longitude_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GPS_Longitude_label, -1);
    lv_obj_set_y(ui_GPS_Longitude_label, -5);
    lv_obj_set_align(ui_GPS_Longitude_label, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_GPS_Longitude_label, "14°3.453'E");
    lv_obj_set_style_text_color(ui_GPS_Longitude_label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GPS_Longitude_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GPS_Longitude_label, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_LastFix_label = lv_label_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_LastFix_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GPS_LastFix_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GPS_LastFix_label, -1);
    lv_obj_set_y(ui_GPS_LastFix_label, 10);
    lv_obj_set_align(ui_GPS_LastFix_label, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_GPS_LastFix_label, "15:56:23");
    lv_obj_set_style_text_color(ui_GPS_LastFix_label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GPS_LastFix_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GPS_LastFix_label, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_altitude_label = lv_label_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_altitude_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GPS_altitude_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GPS_altitude_label, -1);
    lv_obj_set_y(ui_GPS_altitude_label, 25);
    lv_obj_set_align(ui_GPS_altitude_label, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_GPS_altitude_label, "123m");
    lv_obj_set_style_text_color(ui_GPS_altitude_label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GPS_altitude_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GPS_altitude_label, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GPS_altitude_label1 = lv_label_create(ui_GPS_Screen);
    lv_obj_set_width(ui_GPS_altitude_label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GPS_altitude_label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GPS_altitude_label1, -1);
    lv_obj_set_y(ui_GPS_altitude_label1, 40);
    lv_obj_set_align(ui_GPS_altitude_label1, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_GPS_altitude_label1, "5/6");
    lv_obj_set_style_text_color(ui_GPS_altitude_label1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GPS_altitude_label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GPS_altitude_label1, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

}

void ui2_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_MOBILE_screen_init();
    ui_GPS_Screen_screen_init();
    lv_disp_load_scr(ui_MOBILE);
}
