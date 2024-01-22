#
# Makefile
#
CC ?= gcc
LVGL_DIR_NAME ?= lvgl
LVGL_DIR ?= ${shell pwd}
INCLUDE_FLAGS = -I$(LVGL_DIR)/ui/ -I$(LVGL_DIR)/squareline/ -I$(LVGL_DIR)/squareline2/
DEFINE_FLAGS = -DLIBUBUS
LIB_FLAGS += -lubox -lubus -lgps
CFLAGS += -O1 -g3 -I$(LVGL_DIR)/ -Wall -Wshadow -Wundef -Wmissing-prototypes -Wall -Wextra \
-Wno-unused-function -Wno-error=strict-prototypes -Wpointer-arith -fno-strict-aliasing \
-Wno-error=cpp -Wuninitialized -Wno-unused-parameter -Wno-missing-field-initializers \
-Wtype-limits -Wsizeof-pointer-memaccess -Wno-format-nonliteral -Wno-cast-qual \
-Wunreachable-code -Wno-switch-default -Wreturn-type -Wmultichar -Wformat-security \
-Wno-ignored-qualifiers -Wno-error=pedantic -Wno-sign-compare -Wno-error=missing-prototypes \
-Wdouble-promotion -Wdeprecated -Wempty-body -Wtype-limits -Wshift-negative-value -Wno-unused-value \
-Wno-unused-parameter -Wno-missing-field-initializers -Wuninitialized -Wall -Wextra -Wno-unused-parameter \
-Wno-missing-field-initializers -Wtype-limits -Wsizeof-pointer-memaccess -Wno-format-nonliteral \
-Wpointer-arith -Wno-cast-qual -Wmissing-prototypes -Wunreachable-code -Wno-switch-default \
-Wreturn-type -Wmultichar -Wformat-security -Wno-ignored-qualifiers -Wno-sign-compare
LDFLAGS ?= -lm
BIN = ui_sevio


#Collect the files to compile
MAINSRC = ./main.c

include $(LVGL_DIR)/lvgl/lvgl.mk
include $(LVGL_DIR)/lv_drivers/lv_drivers.mk

UI_GEN_SRC = \
    $(LVGL_DIR)/squareline/ui.c \
    $(LVGL_DIR)/squareline/ui_img_logo_png.c \
	$(LVGL_DIR)/squareline/ui_img_network_png.c \
	$(LVGL_DIR)/squareline/ui_img_row_d_png.c \
	$(LVGL_DIR)/squareline/ui_img_row_l_png.c \
	$(LVGL_DIR)/squareline/ui_img_row_r_png.c \
	$(LVGL_DIR)/squareline/ui_img_sel_on_png.c \
	$(LVGL_DIR)/squareline/ui_img_status_fail_png.c \
	$(LVGL_DIR)/squareline/ui_img_status_pass_png.c \
	$(LVGL_DIR)/squareline/ui_img_status_tree_png.c \
    $(LVGL_DIR)/squareline/ui_img_vpn_png.c \
    $(LVGL_DIR)/squareline/ui_helpers.c \
    $(LVGL_DIR)/squareline/ui_comp.c \
    $(LVGL_DIR)/squareline2/ui2.c \
	$(LVGL_DIR)/squareline2/ui_img_signal_0_png.c \
    $(LVGL_DIR)/squareline2/ui_img_signal_1_png.c \
    $(LVGL_DIR)/squareline2/ui_img_signal_2_png.c \
    $(LVGL_DIR)/squareline2/ui_img_signal_3_png.c \
    $(LVGL_DIR)/squareline2/ui_img_signal_4_png.c \
    $(LVGL_DIR)/squareline2/ui_img_signal_5_png.c \
    $(LVGL_DIR)/squareline2/ui_img_sim_png.c \
    $(LVGL_DIR)/squareline2/ui_img_gnss_png.c \
	$(LVGL_DIR)/squareline2/ui_img_io_png.c \
	$(LVGL_DIR)/squareline2/ui_img_port_png.c \
	$(LVGL_DIR)/squareline2/ui_img_wifi_png.c \
    $(LVGL_DIR)/squareline/ui_font_dejavusans.c \
    $(LVGL_DIR)/squareline/ui_font_arialbd.c

UI_SRC = $(LVGL_DIR)/ui/ui_update.c  $(LVGL_DIR)/ui/ubus.c $(LVGL_DIR)/ui/ui_gps.c $(LVGL_DIR)/ui/ui_gsm.c $(LVGL_DIR)/ui/gpsdclient.c
CSRCS +=$(LVGL_DIR)/mouse_cursor_icon.c $(UI_GEN_SRC) $(UI_SRC)
OBJEXT ?= .o

AOBJS = $(ASRCS:.S=$(OBJEXT))
COBJS = $(CSRCS:.c=$(OBJEXT))

MAINOBJ = $(MAINSRC:.c=$(OBJEXT))

SRCS = $(ASRCS) $(CSRCS) $(MAINSRC)
OBJS = $(AOBJS) $(COBJS)

## MAINOBJ -> OBJFILES

all: cenv default


%.o: %.c
	@$(CC)  $(CFLAGS) $(INCLUDE_FLAGS) $(DEFINE_FLAGS) -c $< -o $@
	@echo "CC $<"

default: $(AOBJS) $(COBJS) $(MAINOBJ)
	$(CC) -o $(BIN) $(MAINOBJ) $(AOBJS) $(COBJS) $(LDFLAGS) $(LIB_FLAGS)

clean:
	rm -f $(BIN) $(AOBJS) $(COBJS) $(MAINOBJ)

cenv:
	@echo $(CFLAGS)
