/*******************************************************************************
 * Size: 14 px
 * Bpp: 1
 * Opts: --bpp 1 --size 14 --font C:\Users\Stefano Bandi\Documents\GitHub\lv_port_linux_frame_buffer\sevio_ui_01\assets\fonts\tahomabd.ttf -o C:\Users\Stefano Bandi\Documents\GitHub\lv_port_linux_frame_buffer\sevio_ui_01\assets\fonts\ui_font_tahomabd.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_TAHOMABD
#define UI_FONT_TAHOMABD 1
#endif

#if UI_FONT_TAHOMABD

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xfc, 0x30,

    /* U+0022 "\"" */
    0xde, 0xf7, 0xb0,

    /* U+0023 "#" */
    0x9, 0x86, 0x47, 0xfc, 0x4c, 0x12, 0xc, 0x8f,
    0xf8, 0x98, 0x24, 0x19, 0x0,

    /* U+0024 "$" */
    0x10, 0x21, 0xf6, 0x8d, 0x1f, 0x1f, 0x9f, 0x17,
    0x2f, 0xf0, 0x81, 0x0,

    /* U+0025 "%" */
    0x78, 0x61, 0x99, 0x83, 0x33, 0x6, 0x6c, 0xc,
    0xdb, 0xcf, 0x6c, 0xc0, 0xd9, 0x83, 0x33, 0x6,
    0x66, 0x18, 0x78,

    /* U+0026 "&" */
    0x3c, 0xc, 0xc1, 0x98, 0x3f, 0x7, 0x99, 0xfb,
    0x33, 0xe6, 0x38, 0xe3, 0x87, 0xf8,

    /* U+0027 "'" */
    0xff,

    /* U+0028 "(" */
    0x3b, 0x99, 0xcc, 0x63, 0x18, 0xc6, 0x38, 0xc7,
    0x1c,

    /* U+0029 ")" */
    0xe3, 0x8c, 0x61, 0x8c, 0x63, 0x18, 0xcc, 0x67,
    0x70,

    /* U+002A "*" */
    0x18, 0x5a, 0x7e, 0x18, 0x7e, 0x5a, 0x18,

    /* U+002B "+" */
    0x18, 0xc, 0x6, 0x3, 0xf, 0xf8, 0xc0, 0x60,
    0x30, 0x18, 0x0,

    /* U+002C "," */
    0x76, 0x6c, 0xc0,

    /* U+002D "-" */
    0xf8,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0xc, 0x61, 0x86, 0x30, 0xc3, 0x8, 0x61, 0x86,
    0x30, 0xc0,

    /* U+0030 "0" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0x66, 0x3c,

    /* U+0031 "1" */
    0x31, 0xe0, 0xc1, 0x83, 0x6, 0xc, 0x18, 0x31,
    0xfc,

    /* U+0032 "2" */
    0xfd, 0xc, 0x18, 0x30, 0xe1, 0x87, 0x1c, 0x71,
    0xfc,

    /* U+0033 "3" */
    0x7c, 0x46, 0x6, 0x6, 0x1c, 0x3, 0x3, 0x3,
    0xc6, 0xfc,

    /* U+0034 "4" */
    0x6, 0x7, 0x7, 0x86, 0xc3, 0x63, 0x33, 0xfe,
    0xc, 0x6, 0x3, 0x0,

    /* U+0035 "5" */
    0x7f, 0x60, 0x60, 0x60, 0x7e, 0x7, 0x3, 0x3,
    0xc6, 0xfc,

    /* U+0036 "6" */
    0x1e, 0x60, 0x40, 0xde, 0xff, 0xc7, 0xc3, 0xc3,
    0x66, 0x3c,

    /* U+0037 "7" */
    0xfe, 0x1c, 0x30, 0xe1, 0x87, 0xe, 0x38, 0x70,
    0xc0,

    /* U+0038 "8" */
    0x3e, 0x63, 0x63, 0x73, 0x7e, 0x7f, 0xc7, 0xc3,
    0xe3, 0x7c,

    /* U+0039 "9" */
    0x3c, 0x66, 0xc3, 0xc3, 0xe3, 0xff, 0x7b, 0x2,
    0x6, 0x78,

    /* U+003A ":" */
    0xc0, 0x3,

    /* U+003B ";" */
    0x60, 0x0, 0x1b, 0x5b, 0x0,

    /* U+003C "<" */
    0x0, 0x83, 0xc7, 0xdf, 0xe, 0x3, 0xc0, 0x7c,
    0x7, 0x0, 0x80,

    /* U+003D "=" */
    0xff, 0x0, 0x0, 0x0, 0xff,

    /* U+003E ">" */
    0x80, 0x78, 0x1f, 0x1, 0xf0, 0x38, 0x79, 0xf1,
    0xc0, 0x80, 0x0,

    /* U+003F "?" */
    0xfd, 0xc, 0x18, 0x30, 0xc7, 0xc, 0x18, 0x0,
    0x60,

    /* U+0040 "@" */
    0x1f, 0x6, 0x39, 0xff, 0x79, 0xbf, 0x37, 0xe6,
    0xfc, 0xde, 0xfe, 0x60, 0x6, 0x0, 0x7c, 0x0,

    /* U+0041 "A" */
    0x1c, 0x7, 0x81, 0xe0, 0xf8, 0x37, 0x1c, 0xc7,
    0xf1, 0x8e, 0xe1, 0xb8, 0x60,

    /* U+0042 "B" */
    0xfc, 0xc6, 0xc6, 0xc6, 0xfe, 0xc3, 0xc3, 0xc3,
    0xc7, 0xfc,

    /* U+0043 "C" */
    0x1f, 0xb0, 0xd8, 0x38, 0xc, 0x6, 0x3, 0x1,
    0xc1, 0x61, 0x8f, 0xc0,

    /* U+0044 "D" */
    0xfc, 0x63, 0xb0, 0xd8, 0x3c, 0x1e, 0xf, 0x7,
    0x86, 0xc7, 0x7e, 0x0,

    /* U+0045 "E" */
    0xff, 0x83, 0x6, 0xf, 0xf8, 0x30, 0x60, 0xc1,
    0xfc,

    /* U+0046 "F" */
    0xff, 0x83, 0x6, 0xf, 0xf8, 0x30, 0x60, 0xc1,
    0x80,

    /* U+0047 "G" */
    0x1f, 0xb8, 0xd8, 0x38, 0xc, 0x6, 0x3f, 0x7,
    0xc3, 0x71, 0x8f, 0xc0,

    /* U+0048 "H" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3,

    /* U+0049 "I" */
    0xf9, 0x8c, 0x63, 0x18, 0xc6, 0x37, 0xc0,

    /* U+004A "J" */
    0x3c, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xf, 0xe0,

    /* U+004B "K" */
    0xc7, 0xce, 0xdc, 0xd8, 0xf8, 0xf8, 0xdc, 0xce,
    0xce, 0xc7,

    /* U+004C "L" */
    0xc1, 0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1,
    0xfc,

    /* U+004D "M" */
    0xe1, 0xf8, 0x7f, 0x3f, 0xcf, 0xde, 0xf7, 0xbd,
    0xef, 0x33, 0xc0, 0xf0, 0x30,

    /* U+004E "N" */
    0xe1, 0xf8, 0xfe, 0x7f, 0x3d, 0xde, 0x7f, 0x3f,
    0x8f, 0xc3, 0xe1, 0xc0,

    /* U+004F "O" */
    0x1e, 0x18, 0x6e, 0x1b, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x86, 0x61, 0x8f, 0xc0,

    /* U+0050 "P" */
    0xfe, 0xc7, 0xc3, 0xc3, 0xc6, 0xfc, 0xc0, 0xc0,
    0xc0, 0xc0,

    /* U+0051 "Q" */
    0x1e, 0x18, 0x66, 0x1b, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x87, 0x61, 0x87, 0xc0, 0x60, 0x18, 0x3,
    0xc0,

    /* U+0052 "R" */
    0xfe, 0x30, 0xcc, 0x33, 0xc, 0xc7, 0x3f, 0x8c,
    0xe3, 0x1c, 0xc7, 0x30, 0xe0,

    /* U+0053 "S" */
    0x3f, 0x43, 0xc0, 0xf8, 0xfe, 0x7f, 0x1f, 0x3,
    0xc2, 0xfc,

    /* U+0054 "T" */
    0xff, 0x8c, 0x6, 0x3, 0x1, 0x80, 0xc0, 0x60,
    0x30, 0x18, 0xc, 0x0,

    /* U+0055 "U" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0x66, 0x3c,

    /* U+0056 "V" */
    0xe1, 0xb8, 0xe6, 0x39, 0xcc, 0x77, 0xd, 0xc3,
    0xe0, 0x78, 0x1e, 0x7, 0x0,

    /* U+0057 "W" */
    0xe3, 0x9d, 0x8e, 0x76, 0x79, 0xdd, 0xe6, 0x77,
    0xd8, 0xdb, 0xe3, 0xef, 0x8f, 0x3c, 0x3c, 0xf0,
    0x71, 0xc0,

    /* U+0058 "X" */
    0xe3, 0x9c, 0xe3, 0xf0, 0xf8, 0x1e, 0x7, 0x83,
    0xe0, 0xdc, 0x73, 0xb8, 0xe0,

    /* U+0059 "Y" */
    0x73, 0x9c, 0xe3, 0xb0, 0x78, 0x1e, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0x0,

    /* U+005A "Z" */
    0xff, 0xf, 0xe, 0x1e, 0x1c, 0x38, 0x78, 0x70,
    0xf0, 0xff,

    /* U+005B "[" */
    0xfe, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x31, 0x8c,
    0x7c,

    /* U+005C "\\" */
    0xc1, 0x86, 0x18, 0x30, 0xc3, 0x6, 0x18, 0x60,
    0xc3, 0xc,

    /* U+005D "]" */
    0xf3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3f,

    /* U+005E "^" */
    0x8, 0xe, 0xf, 0x86, 0xe6, 0x33, 0xc,

    /* U+005F "_" */
    0xff, 0x80,

    /* U+0060 "`" */
    0x60,

    /* U+0061 "a" */
    0x7c, 0xc, 0x7b, 0xfc, 0x78, 0xff, 0xbb,

    /* U+0062 "b" */
    0xc1, 0x83, 0x7, 0xec, 0xf8, 0xf1, 0xe3, 0xc7,
    0x9b, 0xe0,

    /* U+0063 "c" */
    0x3e, 0xc7, 0x6, 0xc, 0x18, 0x18, 0x9f,

    /* U+0064 "d" */
    0x6, 0xc, 0x19, 0xf6, 0x78, 0xf1, 0xe3, 0xc7,
    0xcd, 0xf8,

    /* U+0065 "e" */
    0x3c, 0x8f, 0x1f, 0xfc, 0x18, 0x18, 0x9f,

    /* U+0066 "f" */
    0x3d, 0x86, 0x3e, 0x61, 0x86, 0x18, 0x61, 0x86,
    0x0,

    /* U+0067 "g" */
    0x3e, 0xcf, 0x1e, 0x3c, 0x78, 0xf9, 0xbf, 0x6,
    0x9, 0xe0,

    /* U+0068 "h" */
    0xc1, 0x83, 0x6, 0xef, 0xf8, 0xf1, 0xe3, 0xc7,
    0x8f, 0x18,

    /* U+0069 "i" */
    0xc3, 0xff, 0xfc,

    /* U+006A "j" */
    0x18, 0x0, 0x71, 0x8c, 0x63, 0x18, 0xc6, 0x31,
    0xf8,

    /* U+006B "k" */
    0xc1, 0x83, 0x6, 0x7d, 0xdf, 0x3c, 0x7c, 0xdd,
    0x9b, 0x38,

    /* U+006C "l" */
    0xff, 0xff, 0xfc,

    /* U+006D "m" */
    0xdc, 0xef, 0xff, 0xc6, 0x3c, 0x63, 0xc6, 0x3c,
    0x63, 0xc6, 0x3c, 0x63,

    /* U+006E "n" */
    0xdd, 0xff, 0x1e, 0x3c, 0x78, 0xf1, 0xe3,

    /* U+006F "o" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+0070 "p" */
    0xfd, 0x9f, 0x1e, 0x3c, 0x78, 0xf3, 0x7c, 0xc1,
    0x83, 0x0,

    /* U+0071 "q" */
    0x3e, 0xcf, 0x1e, 0x3c, 0x78, 0xf9, 0xbf, 0x6,
    0xc, 0x18,

    /* U+0072 "r" */
    0xfe, 0x31, 0x8c, 0x63, 0x18,

    /* U+0073 "s" */
    0x7d, 0x8b, 0x87, 0xe7, 0xc3, 0xa3, 0x7c,

    /* U+0074 "t" */
    0x61, 0x8f, 0xd8, 0x61, 0x86, 0x18, 0x60, 0xf0,

    /* U+0075 "u" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xff, 0xbb,

    /* U+0076 "v" */
    0xe7, 0x67, 0x66, 0x76, 0x3e, 0x3c, 0x3c, 0x1c,

    /* U+0077 "w" */
    0xe6, 0x36, 0x73, 0x67, 0x76, 0xf6, 0x7d, 0xe3,
    0xde, 0x39, 0xe3, 0x9c,

    /* U+0078 "x" */
    0xe7, 0x76, 0x3e, 0x3c, 0x3c, 0x3e, 0x76, 0xe7,

    /* U+0079 "y" */
    0xe7, 0x67, 0x66, 0x76, 0x3e, 0x3c, 0x3c, 0x18,
    0x18, 0x38, 0x30,

    /* U+007A "z" */
    0xfe, 0x1c, 0x71, 0xc3, 0x8e, 0x38, 0x7f,

    /* U+007B "{" */
    0xf, 0x18, 0x18, 0x18, 0x18, 0x18, 0x30, 0xe0,
    0x30, 0x18, 0x18, 0x18, 0x18, 0xf,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xf0,

    /* U+007D "}" */
    0xf0, 0x18, 0x18, 0x18, 0x18, 0x18, 0xc, 0x7,
    0xc, 0x18, 0x18, 0x18, 0x18, 0xf0,

    /* U+007E "~" */
    0x70, 0xf2, 0x3c, 0x4f, 0xe
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 66, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 77, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 110, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 7, .adv_w = 183, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 143, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 32, .adv_w = 269, .box_w = 15, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 51, .adv_w = 175, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 65, .adv_w = 62, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 66, .adv_w = 102, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 75, .adv_w = 102, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 84, .adv_w = 143, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 91, .adv_w = 183, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 70, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 105, .adv_w = 97, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 106, .adv_w = 70, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 107, .adv_w = 129, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 117, .adv_w = 143, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 143, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 143, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 145, .adv_w = 143, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 143, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 143, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 177, .adv_w = 143, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 187, .adv_w = 143, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 143, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 143, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 216, .adv_w = 81, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 218, .adv_w = 81, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 223, .adv_w = 183, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 183, .box_w = 8, .box_h = 5, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 239, .adv_w = 183, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 250, .adv_w = 127, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 259, .adv_w = 206, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 275, .adv_w = 153, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 288, .adv_w = 154, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 298, .adv_w = 150, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 310, .adv_w = 170, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 322, .adv_w = 138, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 331, .adv_w = 130, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 167, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 352, .adv_w = 171, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 362, .adv_w = 108, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 369, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 377, .adv_w = 156, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 387, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 396, .adv_w = 200, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 409, .adv_w = 173, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 421, .adv_w = 172, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 434, .adv_w = 147, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 444, .adv_w = 172, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 461, .adv_w = 163, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 474, .adv_w = 142, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 484, .adv_w = 137, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 496, .adv_w = 165, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 506, .adv_w = 151, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 519, .adv_w = 230, .box_w = 14, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 537, .adv_w = 153, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 550, .adv_w = 150, .box_w = 10, .box_h = 10, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 563, .adv_w = 139, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 573, .adv_w = 102, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 582, .adv_w = 129, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 592, .adv_w = 102, .box_w = 4, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 599, .adv_w = 183, .box_w = 9, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 606, .adv_w = 143, .box_w = 9, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 608, .adv_w = 122, .box_w = 4, .box_h = 1, .ofs_x = 2, .ofs_y = 10},
    {.bitmap_index = 609, .adv_w = 134, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 616, .adv_w = 142, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 626, .adv_w = 118, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 633, .adv_w = 141, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 643, .adv_w = 133, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 650, .adv_w = 86, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 659, .adv_w = 141, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 669, .adv_w = 143, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 679, .adv_w = 68, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 682, .adv_w = 81, .box_w = 5, .box_h = 14, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 691, .adv_w = 135, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 701, .adv_w = 68, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 704, .adv_w = 214, .box_w = 12, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 716, .adv_w = 143, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 723, .adv_w = 138, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 731, .adv_w = 141, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 741, .adv_w = 141, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 751, .adv_w = 97, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 756, .adv_w = 115, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 763, .adv_w = 93, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 771, .adv_w = 143, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 778, .adv_w = 130, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 786, .adv_w = 199, .box_w = 12, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 798, .adv_w = 135, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 806, .adv_w = 129, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 817, .adv_w = 118, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 824, .adv_w = 140, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 838, .adv_w = 143, .box_w = 2, .box_h = 14, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 842, .adv_w = 140, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 856, .adv_w = 183, .box_w = 10, .box_h = 4, .ofs_x = 1, .ofs_y = 3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_tahomabd = {
#else
lv_font_t ui_font_tahomabd = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 14,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_TAHOMABD*/

