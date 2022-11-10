#
# Makefile
#
CC ?= gcc
LVGL_DIR_NAME ?= lvgl
LVGL_DIR ?= ${shell pwd}
INCLUDE_FLAGS = -I$(LVGL_DIR)/ui/ -I$(LVGL_DIR)/squareline/
CFLAGS ?= -O3 -g0 -I$(LVGL_DIR)/ -Wall -Wshadow -Wundef -Wmissing-prototypes -Wall -Wextra -Wno-unused-function -Wno-error=strict-prototypes -Wpointer-arith -fno-strict-aliasing -Wno-error=cpp -Wuninitialized -Wno-unused-parameter -Wno-missing-field-initializers -Wtype-limits -Wsizeof-pointer-memaccess -Wno-format-nonliteral -Wno-cast-qual -Wunreachable-code -Wno-switch-default -Wreturn-type -Wmultichar -Wformat-security -Wno-ignored-qualifiers -Wno-error=pedantic -Wno-sign-compare -Wno-error=missing-prototypes -Wdouble-promotion -Wdeprecated -Wempty-body -Wtype-limits -Wshift-negative-value -Wno-unused-value -Wno-unused-parameter -Wno-missing-field-initializers -Wuninitialized -Wall -Wextra -Wno-unused-parameter -Wno-missing-field-initializers -Wtype-limits -Wsizeof-pointer-memaccess -Wno-format-nonliteral -Wpointer-arith -Wno-cast-qual -Wmissing-prototypes -Wunreachable-code -Wno-switch-default -Wreturn-type -Wmultichar -Wformat-security -Wno-ignored-qualifiers -Wno-sign-compare
LDFLAGS ?= -lm
BIN = ui_sevio


#Collect the files to compile
MAINSRC = ./main.c

include $(LVGL_DIR)/lvgl/lvgl.mk
include $(LVGL_DIR)/lv_drivers/lv_drivers.mk

UI_GEN_SRC = $(LVGL_DIR)/squareline/ui.c \
    $(LVGL_DIR)/squareline/ui_img_wifi_img2_png.c \
    $(LVGL_DIR)/squareline/ui_img_wifi_img_png.c \
    $(LVGL_DIR)/squareline/ui_img_eth_img_png.c \
    $(LVGL_DIR)/squareline/ui_img_frecce_d_r_png.c \
    $(LVGL_DIR)/squareline/ui_img_logo_png.c \
    $(LVGL_DIR)/squareline/ui_helpers.c 
UI_SRC = $(LVGL_DIR)/ui/ui_update.c
CSRCS +=$(LVGL_DIR)/mouse_cursor_icon.c $(UI_GEN_SRC) $(UI_SRC)
OBJEXT ?= .o

AOBJS = $(ASRCS:.S=$(OBJEXT))
COBJS = $(CSRCS:.c=$(OBJEXT))

MAINOBJ = $(MAINSRC:.c=$(OBJEXT))

SRCS = $(ASRCS) $(CSRCS) $(MAINSRC)
OBJS = $(AOBJS) $(COBJS)

## MAINOBJ -> OBJFILES

all: default

%.o: %.c
	@$(CC)  $(CFLAGS) $(INCLUDE_FLAGS) -c $< -o $@
	@echo "CC $<"
    
default: $(AOBJS) $(COBJS) $(MAINOBJ)
	$(CC) -o $(BIN) $(MAINOBJ) $(AOBJS) $(COBJS) $(LDFLAGS)

clean: 
	rm -f $(BIN) $(AOBJS) $(COBJS) $(MAINOBJ)

