// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: sevio_ui_02


#include "ui.h"
#include "ui_helpers.h"
#include "ui_comp.h"

uint32_t LV_EVENT_GET_COMP_CHILD;

typedef struct {
uint32_t child_idx;
lv_obj_t* child;
} ui_comp_get_child_t;

lv_obj_t * ui_comp_get_child(lv_obj_t *comp, uint32_t child_idx) {
ui_comp_get_child_t info;
info.child = NULL;
info.child_idx = child_idx;
lv_event_send(comp, LV_EVENT_GET_COMP_CHILD, &info);
 return info.child;
}

void get_component_child_event_cb(lv_event_t* e) {
lv_obj_t** c = lv_event_get_user_data(e);
ui_comp_get_child_t* info = lv_event_get_param(e);
info->child = c[info->child_idx];
 }

void del_component_child_event_cb(lv_event_t* e) {
lv_obj_t** c = lv_event_get_user_data(e);
lv_mem_free(c); 
}


// COMPONENT DHCP NEG Panel

lv_obj_t *ui_DHCP_NEG_Panel_create(lv_obj_t *comp_parent) {

lv_obj_t *cui_DHCP_NEG_Panel;
cui_DHCP_NEG_Panel = lv_obj_create(comp_parent);
lv_obj_set_width( cui_DHCP_NEG_Panel, 128);
lv_obj_set_height( cui_DHCP_NEG_Panel, 17);
lv_obj_set_x( cui_DHCP_NEG_Panel, 0 );
lv_obj_set_y( cui_DHCP_NEG_Panel, -10 );
lv_obj_set_align( cui_DHCP_NEG_Panel, LV_ALIGN_CENTER );
lv_obj_clear_flag( cui_DHCP_NEG_Panel, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(cui_DHCP_NEG_Panel, 6, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(cui_DHCP_NEG_Panel, lv_color_hex(0x11F108), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(cui_DHCP_NEG_Panel, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(cui_DHCP_NEG_Panel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(cui_DHCP_NEG_Panel, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(cui_DHCP_NEG_Panel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(cui_DHCP_NEG_Panel, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(cui_DHCP_NEG_Panel, lv_color_hex(0xF10808), LV_PART_MAIN | LV_STATE_CHECKED );
lv_obj_set_style_bg_opa(cui_DHCP_NEG_Panel, 255, LV_PART_MAIN| LV_STATE_CHECKED);

lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_DHCP_NEG_PANEL_NUM);
children[UI_COMP_DHCP_NEG_PANEL_DHCP_NEG_PANEL] = cui_DHCP_NEG_Panel;
lv_obj_add_event_cb(cui_DHCP_NEG_Panel, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
lv_obj_add_event_cb(cui_DHCP_NEG_Panel, del_component_child_event_cb, LV_EVENT_DELETE, children);
return cui_DHCP_NEG_Panel; 
}

