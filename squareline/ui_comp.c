// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: sevio_ui_01


#include "ui.h"
#include "ui_helpers.h"
#include "ui_comp.h"

uint32_t LV_EVENT_GET_COMP_CHILD;

typedef struct {
    uint32_t child_idx;
    lv_obj_t * child;
} ui_comp_get_child_t;

lv_obj_t * ui_comp_get_child(lv_obj_t * comp, uint32_t child_idx)
{
    ui_comp_get_child_t info;
    info.child = NULL;
    info.child_idx = child_idx;
    lv_event_send(comp, LV_EVENT_GET_COMP_CHILD, &info);
    return info.child;
}

void get_component_child_event_cb(lv_event_t * e)
{
    lv_obj_t ** c = lv_event_get_user_data(e);
    ui_comp_get_child_t * info = lv_event_get_param(e);
    info->child = c[info->child_idx];
}

void del_component_child_event_cb(lv_event_t * e)
{
    lv_obj_t ** c = lv_event_get_user_data(e);
    lv_mem_free(c);
}


// COMPONENT boardStatusLabel

lv_obj_t * ui_boardStatusLabel_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_boardStatusLabel;
    cui_boardStatusLabel = lv_label_create(comp_parent);
    lv_obj_set_width(cui_boardStatusLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_boardStatusLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_boardStatusLabel, 0);
    lv_obj_set_y(cui_boardStatusLabel, 57);
    lv_obj_set_align(cui_boardStatusLabel, LV_ALIGN_TOP_MID);
    lv_label_set_text(cui_boardStatusLabel, "23.4°C");
    lv_obj_set_style_text_color(cui_boardStatusLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_boardStatusLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(cui_boardStatusLabel, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(cui_boardStatusLabel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_boardStatusLabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_BOARDSTATUSLABEL_NUM);
    children[UI_COMP_BOARDSTATUSLABEL_BOARDSTATUSLABEL] = cui_boardStatusLabel;
    lv_obj_add_event_cb(cui_boardStatusLabel, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_boardStatusLabel, del_component_child_event_cb, LV_EVENT_DELETE, children);
    return cui_boardStatusLabel;
}



// COMPONENT Home Image1

lv_obj_t * ui_Home_Image1_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_Home_Image1;
    cui_Home_Image1 = lv_img_create(comp_parent);
    lv_obj_set_width(cui_Home_Image1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_Home_Image1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_Home_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(cui_Home_Image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(cui_Home_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_HOME_IMAGE1_NUM);
    children[UI_COMP_HOME_IMAGE1_HOME_IMAGE1] = cui_Home_Image1;
    lv_obj_add_event_cb(cui_Home_Image1, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_Home_Image1, del_component_child_event_cb, LV_EVENT_DELETE, children);
    return cui_Home_Image1;
}

