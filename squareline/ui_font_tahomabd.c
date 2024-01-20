/*******************************************************************************
 * Size: 16 px
 * Bpp: 2
 * Opts: --bpp 2 --size 16 --font C:\Users\Stefano Bandi\Documents\GitHub\lv_port_linux_frame_buffer\sevio_ui_01\assets\fonts\DejaVuSansCondensed-Bold.ttf -o C:\Users\Stefano Bandi\Documents\GitHub\lv_port_linux_frame_buffer\sevio_ui_01\assets\fonts\ui_font_tahomabd.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
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

    /* U+0021 "!" */
    0xfb, 0xef, 0xbe, 0xfb, 0xdf, 0x6c, 0x3, 0xdf,
    0xbe,

    /* U+0022 "\"" */
    0xb2, 0xcb, 0x2c, 0xb2, 0xcb, 0x2c, 0x10, 0x40,

    /* U+0023 "#" */
    0x0, 0x74, 0xe0, 0x0, 0x70, 0xd0, 0x0, 0xb1,
    0xd0, 0xf, 0xff, 0xfc, 0xa, 0xfb, 0xe8, 0x1,
    0xc3, 0x80, 0x2, 0xc3, 0x40, 0x2b, 0xef, 0xe0,
    0x3f, 0xff, 0xf4, 0x3, 0x4f, 0x0, 0x7, 0xe,
    0x0, 0xb, 0xd, 0x0,

    /* U+0024 "$" */
    0x2, 0x80, 0x0, 0xa0, 0x2, 0xff, 0xc2, 0xff,
    0xf4, 0xf6, 0x80, 0x3f, 0xa0, 0x7, 0xff, 0x80,
    0x6f, 0xf8, 0x2, 0xaf, 0x10, 0xa7, 0xcf, 0xff,
    0xe1, 0xbf, 0xe0, 0x2, 0x80, 0x0, 0xa0, 0x0,
    0x14, 0x0,

    /* U+0025 "%" */
    0x1f, 0x80, 0x2c, 0x3, 0xde, 0x3, 0x40, 0x74,
    0xb0, 0xb0, 0x7, 0x4b, 0xd, 0x0, 0x78, 0xf2,
    0xc0, 0x2, 0xfc, 0x74, 0x0, 0x0, 0xe, 0x2f,
    0x80, 0x1, 0xc7, 0x9e, 0x0, 0x38, 0xb0, 0xf0,
    0x7, 0xb, 0xf, 0x0, 0xe0, 0x79, 0xe0, 0x2c,
    0x1, 0xf8,

    /* U+0026 "&" */
    0x1, 0xff, 0x40, 0x3, 0xff, 0x40, 0x7, 0xc0,
    0x40, 0x7, 0xc0, 0x0, 0x3, 0xf0, 0x0, 0xf,
    0xf8, 0x3d, 0x2f, 0xbd, 0x3d, 0x3d, 0x2f, 0xbc,
    0x3d, 0xf, 0xf8, 0x3f, 0x7, 0xf0, 0x1f, 0xff,
    0xf8, 0x7, 0xfd, 0x7e,

    /* U+0027 "'" */
    0xb2, 0xcb, 0x2c, 0x10,

    /* U+0028 "(" */
    0xf, 0x7, 0xc3, 0xd0, 0xf0, 0x7c, 0x2e, 0xb,
    0x82, 0xe0, 0xb8, 0x2f, 0x7, 0xc0, 0xf4, 0x2e,
    0x3, 0xc0, 0x10,

    /* U+0029 ")" */
    0xb4, 0xf, 0x3, 0xd0, 0xbc, 0x1f, 0x3, 0xc0,
    0xf4, 0x3d, 0xf, 0x7, 0xc1, 0xf0, 0xf8, 0x3c,
    0x2e, 0x1, 0x0,

    /* U+002A "*" */
    0x3, 0x40, 0x13, 0x44, 0x7b, 0xbc, 0xf, 0xd0,
    0x2f, 0xf4, 0xb3, 0x5c, 0x3, 0x40, 0x1, 0x0,

    /* U+002B "+" */
    0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0,
    0xf, 0x0, 0x0, 0xf0, 0x7, 0xff, 0xfe, 0x7f,
    0xff, 0xd0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xf,
    0x0, 0x0, 0xf0, 0x0,

    /* U+002C "," */
    0x5, 0x2f, 0x2f, 0x2e, 0x3c, 0x38,

    /* U+002D "-" */
    0x15, 0x43, 0xfc, 0x3f, 0xc0,

    /* U+002E "." */
    0x2, 0xfb, 0xef,

    /* U+002F "/" */
    0x1, 0xc0, 0x2c, 0x3, 0x80, 0x74, 0xb, 0x0,
    0xe0, 0xd, 0x1, 0xc0, 0x2c, 0x3, 0x80, 0x74,
    0xb, 0x0, 0xe0, 0x0,

    /* U+0030 "0" */
    0x2, 0xf8, 0x0, 0xff, 0xf0, 0x2f, 0x4f, 0x83,
    0xe0, 0xbc, 0x3d, 0x7, 0xc7, 0xd0, 0x7d, 0x7d,
    0x7, 0xd3, 0xd0, 0x7c, 0x3e, 0xb, 0xc2, 0xf4,
    0xf8, 0xf, 0xff, 0x0, 0x2f, 0x80,

    /* U+0031 "1" */
    0x2f, 0xe0, 0x1f, 0xf8, 0x2, 0x7e, 0x0, 0xf,
    0x80, 0x3, 0xe0, 0x0, 0xf8, 0x0, 0x3e, 0x0,
    0xf, 0x80, 0x3, 0xe0, 0x0, 0xf8, 0x7, 0xff,
    0xf1, 0xff, 0xfc,

    /* U+0032 "2" */
    0x6f, 0xe0, 0xff, 0xfc, 0xe0, 0xbe, 0x0, 0x3e,
    0x0, 0x3e, 0x0, 0xbc, 0x2, 0xf4, 0xb, 0xd0,
    0x2f, 0x40, 0xbe, 0x0, 0xff, 0xff, 0xff, 0xff,

    /* U+0033 "3" */
    0x1f, 0xf9, 0xb, 0xff, 0xc1, 0x42, 0xf8, 0x0,
    0x3e, 0x0, 0x2f, 0x0, 0xff, 0x40, 0x3f, 0xf0,
    0x0, 0x7e, 0x0, 0xf, 0xc9, 0x7, 0xe3, 0xff,
    0xf4, 0xbf, 0xe0,

    /* U+0034 "4" */
    0x0, 0x7f, 0x0, 0xf, 0xf0, 0x2, 0xff, 0x0,
    0x3e, 0xf0, 0xb, 0x2f, 0x1, 0xe2, 0xf0, 0x3c,
    0x2f, 0x7, 0x82, 0xf0, 0x7f, 0xff, 0xd7, 0xff,
    0xfd, 0x0, 0x2f, 0x0, 0x2, 0xf0,

    /* U+0035 "5" */
    0x7f, 0xfd, 0x1f, 0xff, 0x47, 0xc0, 0x1, 0xe0,
    0x0, 0x7f, 0xf4, 0x1f, 0xff, 0x45, 0x7, 0xf0,
    0x0, 0xfc, 0x0, 0x3f, 0x34, 0x1f, 0xcf, 0xff,
    0xc1, 0xbf, 0x80,

    /* U+0036 "6" */
    0x1, 0xff, 0x40, 0xbf, 0xf8, 0x1f, 0x80, 0x42,
    0xf0, 0x0, 0x3e, 0xbd, 0x3, 0xff, 0xf8, 0x3f,
    0x4f, 0xc3, 0xf0, 0x7c, 0x3f, 0x7, 0xc2, 0xf0,
    0xbc, 0xf, 0xff, 0x40, 0x2f, 0xd0,

    /* U+0037 "7" */
    0x3f, 0xff, 0xcf, 0xff, 0xf0, 0x1, 0xf8, 0x0,
    0x7c, 0x0, 0x3f, 0x0, 0x1f, 0x40, 0xb, 0xc0,
    0x3, 0xe0, 0x1, 0xf0, 0x0, 0xfc, 0x0, 0x7d,
    0x0, 0x2f, 0x0,

    /* U+0038 "8" */
    0x7, 0xfd, 0x1, 0xff, 0xf4, 0x3f, 0xf, 0xc3,
    0xe0, 0xbc, 0x1f, 0xf, 0x80, 0xbf, 0xe0, 0x1f,
    0xff, 0x3, 0xe0, 0xbc, 0x3d, 0x7, 0xc3, 0xf0,
    0xbc, 0x2f, 0xff, 0x80, 0x7f, 0xe0,

    /* U+0039 "9" */
    0x7, 0xf8, 0x1, 0xff, 0xf0, 0x3e, 0xf, 0x83,
    0xd0, 0xfc, 0x3d, 0xf, 0xc3, 0xf1, 0xfc, 0x2f,
    0xff, 0xc0, 0x7e, 0xbc, 0x0, 0xf, 0x81, 0x2,
    0xf4, 0x2f, 0xfe, 0x1, 0xff, 0x40,

    /* U+003A ":" */
    0x7c, 0x7c, 0x7c, 0x0, 0x0, 0x0, 0x7c, 0x7c,
    0x7c,

    /* U+003B ";" */
    0x1f, 0x7, 0xc1, 0xf0, 0x0, 0x0, 0x1, 0x41,
    0xf0, 0x7c, 0x1f, 0xb, 0x43, 0x80,

    /* U+003C "<" */
    0x0, 0x0, 0x10, 0x0, 0x7e, 0x0, 0xbf, 0xd1,
    0xbf, 0x80, 0x7e, 0x40, 0x7, 0xe4, 0x0, 0x1b,
    0xf8, 0x0, 0x7, 0xfd, 0x0, 0x6, 0xe0, 0x0,
    0x0,

    /* U+003D "=" */
    0x7f, 0xff, 0xe7, 0xff, 0xfd, 0x0, 0x0, 0x7,
    0xff, 0xfd, 0x7f, 0xff, 0xe0,

    /* U+003E ">" */
    0x0, 0x0, 0x7, 0xd0, 0x0, 0x2f, 0xe0, 0x0,
    0x2f, 0xf4, 0x0, 0x1b, 0xe0, 0x1, 0xbe, 0x2,
    0xfe, 0x43, 0xfe, 0x0, 0x79, 0x0, 0x0, 0x0,
    0x0,

    /* U+003F "?" */
    0xbf, 0x83, 0xff, 0xcd, 0x1f, 0x40, 0x3d, 0x2,
    0xf0, 0x2f, 0x41, 0xf8, 0xb, 0xc0, 0x0, 0x0,
    0x7c, 0x2, 0xf0, 0xb, 0xc0,

    /* U+0040 "@" */
    0x0, 0x0, 0x0, 0x0, 0x7, 0xfe, 0x0, 0x2,
    0xf5, 0xbd, 0x0, 0xb4, 0x0, 0xb0, 0xd, 0x0,
    0x3, 0x82, 0xc2, 0xfb, 0x1c, 0x34, 0x79, 0xf0,
    0xd3, 0x4b, 0xb, 0xd, 0x34, 0xb0, 0x70, 0xd3,
    0x4b, 0xb, 0x1c, 0x28, 0x74, 0xf7, 0x81, 0xc3,
    0xfb, 0xe0, 0xf, 0x0, 0x10, 0x0, 0x3e, 0x6,
    0xc0, 0x0, 0xbf, 0xf4, 0x0, 0x0, 0x10, 0x0,

    /* U+0041 "A" */
    0x0, 0xfd, 0x0, 0x2, 0xfe, 0x0, 0x3, 0xff,
    0x0, 0x3, 0xef, 0x40, 0x7, 0xcf, 0x80, 0xf,
    0xcb, 0xc0, 0xf, 0x87, 0xd0, 0x1f, 0x47, 0xe0,
    0x3f, 0xff, 0xf0, 0x3f, 0xff, 0xf4, 0x7d, 0x0,
    0xf8, 0xfc, 0x0, 0xfc,

    /* U+0042 "B" */
    0xbf, 0xf8, 0x2f, 0xff, 0xcb, 0xc2, 0xf6, 0xf0,
    0x3d, 0xbc, 0x2f, 0x2f, 0xff, 0x8b, 0xff, 0xf6,
    0xf0, 0x3f, 0xbc, 0xf, 0xef, 0x7, 0xfb, 0xff,
    0xf6, 0xff, 0xf4,

    /* U+0043 "C" */
    0x1, 0xbf, 0x80, 0xbf, 0xfe, 0x1f, 0xd1, 0xa3,
    0xf0, 0x0, 0x3e, 0x0, 0x3, 0xe0, 0x0, 0x3e,
    0x0, 0x3, 0xe0, 0x0, 0x3f, 0x0, 0x1, 0xfd,
    0x1a, 0xb, 0xff, 0xe0, 0x1b, 0xf8,

    /* U+0044 "D" */
    0xbf, 0xf8, 0x2, 0xff, 0xfd, 0xb, 0xd6, 0xfd,
    0x2f, 0x1, 0xfc, 0xbc, 0x3, 0xf2, 0xf0, 0xb,
    0xcb, 0xc0, 0x2f, 0x2f, 0x0, 0xfc, 0xbc, 0x7,
    0xf2, 0xf5, 0xbf, 0x4b, 0xff, 0xf4, 0x2f, 0xfe,
    0x0,

    /* U+0045 "E" */
    0xbf, 0xfe, 0xbf, 0xfe, 0xbd, 0x54, 0xbc, 0x0,
    0xbd, 0x54, 0xbf, 0xfd, 0xbf, 0xfd, 0xbc, 0x0,
    0xbc, 0x0, 0xbd, 0x54, 0xbf, 0xff, 0xbf, 0xff,

    /* U+0046 "F" */
    0xbf, 0xfe, 0xbf, 0xfe, 0xbd, 0x54, 0xbc, 0x0,
    0xbd, 0x54, 0xbf, 0xfd, 0xbf, 0xfd, 0xbc, 0x0,
    0xbc, 0x0, 0xbc, 0x0, 0xbc, 0x0, 0xbc, 0x0,

    /* U+0047 "G" */
    0x1, 0xbf, 0xd0, 0x2f, 0xff, 0xd1, 0xfd, 0x57,
    0x4f, 0xc0, 0x0, 0x3e, 0x0, 0x0, 0xf8, 0x1f,
    0xf3, 0xe0, 0x7f, 0xcf, 0x80, 0x3f, 0x3f, 0x0,
    0xfc, 0x7f, 0x47, 0xf0, 0xbf, 0xff, 0xc0, 0x6f,
    0xf4,

    /* U+0048 "H" */
    0xbc, 0x3, 0xeb, 0xc0, 0x3e, 0xbc, 0x3, 0xeb,
    0xc0, 0x3e, 0xbd, 0x57, 0xeb, 0xff, 0xfe, 0xbf,
    0xff, 0xeb, 0xc0, 0x3e, 0xbc, 0x3, 0xeb, 0xc0,
    0x3e, 0xbc, 0x3, 0xeb, 0xc0, 0x3e,

    /* U+0049 "I" */
    0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc,
    0xbc, 0xbc, 0xbc, 0xbc,

    /* U+004A "J" */
    0xb, 0xc0, 0xbc, 0xb, 0xc0, 0xbc, 0xb, 0xc0,
    0xbc, 0xb, 0xc0, 0xbc, 0xb, 0xc0, 0xbc, 0xb,
    0xc0, 0xfc, 0x2f, 0xcf, 0xf4, 0xf9, 0x0,

    /* U+004B "K" */
    0xbc, 0xb, 0xe2, 0xf0, 0x7e, 0xb, 0xc7, 0xf0,
    0x2f, 0x7f, 0x0, 0xbf, 0xf0, 0x2, 0xff, 0x40,
    0xb, 0xfe, 0x0, 0x2f, 0xfe, 0x0, 0xbc, 0xfe,
    0x2, 0xf0, 0xfd, 0xb, 0xc0, 0xfd, 0x2f, 0x1,
    0xfc,

    /* U+004C "L" */
    0xbc, 0x0, 0xbc, 0x0, 0xbc, 0x0, 0xbc, 0x0,
    0xbc, 0x0, 0xbc, 0x0, 0xbc, 0x0, 0xbc, 0x0,
    0xbc, 0x0, 0xbd, 0x54, 0xbf, 0xff, 0xbf, 0xff,

    /* U+004D "M" */
    0xbf, 0x0, 0xbf, 0xbf, 0x40, 0xff, 0xbf, 0x81,
    0xff, 0xbf, 0xc3, 0xff, 0xbe, 0xd3, 0xef, 0xbd,
    0xfb, 0xaf, 0xbc, 0xff, 0x2f, 0xbc, 0xbf, 0x2f,
    0xbc, 0x3d, 0x2f, 0xbc, 0x28, 0x2f, 0xbc, 0x0,
    0x2f, 0xbc, 0x0, 0x2f,

    /* U+004E "N" */
    0xbe, 0x3, 0xeb, 0xf0, 0x3e, 0xbf, 0x83, 0xeb,
    0xfc, 0x3e, 0xbf, 0xd3, 0xeb, 0xdf, 0x3e, 0xbc,
    0xf7, 0xeb, 0xc7, 0xfe, 0xbc, 0x3f, 0xeb, 0xc1,
    0xfe, 0xbc, 0xf, 0xeb, 0xc0, 0xbe,

    /* U+004F "O" */
    0x1, 0xff, 0x80, 0xb, 0xff, 0xf0, 0x1f, 0xd6,
    0xf8, 0x3f, 0x0, 0xfc, 0x3e, 0x0, 0x7d, 0x3e,
    0x0, 0x7d, 0x3e, 0x0, 0x7d, 0x3e, 0x0, 0x7d,
    0x3f, 0x0, 0xfc, 0x1f, 0xd6, 0xf8, 0xb, 0xff,
    0xf0, 0x1, 0xff, 0x80,

    /* U+0050 "P" */
    0xbf, 0xf9, 0x2f, 0xff, 0xdb, 0xc2, 0xfa, 0xf0,
    0x3f, 0xbc, 0xf, 0xef, 0xb, 0xeb, 0xff, 0xf6,
    0xff, 0xe4, 0xbc, 0x0, 0x2f, 0x0, 0xb, 0xc0,
    0x2, 0xf0, 0x0,

    /* U+0051 "Q" */
    0x1, 0xff, 0x80, 0xb, 0xff, 0xf0, 0x1f, 0xd2,
    0xf8, 0x3f, 0x0, 0xfc, 0x3e, 0x0, 0x7d, 0x3e,
    0x0, 0x7d, 0x3e, 0x0, 0x7d, 0x3e, 0x0, 0x7d,
    0x3f, 0x0, 0xfc, 0x1f, 0xd6, 0xf8, 0xb, 0xff,
    0xf0, 0x1, 0xff, 0xc0, 0x0, 0x3, 0xd0, 0x0,
    0x1, 0xf4,

    /* U+0052 "R" */
    0xbf, 0xf8, 0xb, 0xff, 0xf0, 0xbc, 0x3f, 0x4b,
    0xc1, 0xf4, 0xbc, 0x1f, 0x4b, 0xc2, 0xf0, 0xbf,
    0xfd, 0xb, 0xff, 0xd0, 0xbc, 0x3f, 0xb, 0xc1,
    0xf8, 0xbc, 0xf, 0xcb, 0xc0, 0x7e,

    /* U+0053 "S" */
    0x1f, 0xf9, 0x1f, 0xff, 0x8f, 0xd1, 0xa3, 0xe0,
    0x0, 0xfe, 0x40, 0x1f, 0xfe, 0x1, 0xbf, 0xf0,
    0x1, 0xfc, 0x0, 0x1f, 0x79, 0x1f, 0xcf, 0xff,
    0xe1, 0xbf, 0xe0,

    /* U+0054 "T" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0x56, 0xf5, 0x40,
    0x1f, 0x40, 0x1, 0xf4, 0x0, 0x1f, 0x40, 0x1,
    0xf4, 0x0, 0x1f, 0x40, 0x1, 0xf4, 0x0, 0x1f,
    0x40, 0x1, 0xf4, 0x0, 0x1f, 0x40,

    /* U+0055 "U" */
    0xbc, 0x7, 0xdb, 0xc0, 0x7d, 0xbc, 0x7, 0xdb,
    0xc0, 0x7d, 0xbc, 0x7, 0xdb, 0xc0, 0x7d, 0xbc,
    0x7, 0xdb, 0xc0, 0x7d, 0xbc, 0xb, 0xc7, 0xf5,
    0xfc, 0x2f, 0xff, 0x40, 0xbf, 0xd0,

    /* U+0056 "V" */
    0xfc, 0x0, 0xfc, 0x7d, 0x0, 0xf8, 0x3e, 0x1,
    0xf4, 0x3f, 0x2, 0xf0, 0x1f, 0x3, 0xe0, 0xf,
    0x87, 0xd0, 0xf, 0xcb, 0xc0, 0x7, 0xcf, 0x80,
    0x3, 0xff, 0x40, 0x3, 0xff, 0x0, 0x2, 0xfe,
    0x0, 0x0, 0xfd, 0x0,

    /* U+0057 "W" */
    0x7c, 0x7, 0xd0, 0x3d, 0x7d, 0xb, 0xe0, 0x7c,
    0x3e, 0xf, 0xf0, 0xbc, 0x3f, 0xf, 0xf0, 0xf8,
    0x2f, 0x1e, 0xb0, 0xf8, 0x1f, 0x1d, 0xb5, 0xf4,
    0xf, 0x6c, 0x79, 0xf0, 0xf, 0xbc, 0x3e, 0xf0,
    0xf, 0xfc, 0x3f, 0xe0, 0xb, 0xf8, 0x2f, 0xd0,
    0x7, 0xf4, 0x1f, 0xd0, 0x3, 0xf0, 0x1f, 0xc0,

    /* U+0058 "X" */
    0x7e, 0x1, 0xf4, 0xbc, 0xf, 0xc0, 0xf8, 0xbc,
    0x1, 0xfb, 0xe0, 0x3, 0xff, 0x0, 0x7, 0xf4,
    0x0, 0x1f, 0xe0, 0x0, 0xff, 0xc0, 0xb, 0xdf,
    0x80, 0x3e, 0x2f, 0x43, 0xf0, 0x3f, 0x1f, 0x40,
    0x7e,

    /* U+0059 "Y" */
    0x3f, 0x0, 0xbd, 0x1f, 0x80, 0xf8, 0xb, 0xc3,
    0xf0, 0x3, 0xf7, 0xe0, 0x2, 0xff, 0xc0, 0x0,
    0xff, 0x40, 0x0, 0x7f, 0x0, 0x0, 0x3e, 0x0,
    0x0, 0x3e, 0x0, 0x0, 0x3e, 0x0, 0x0, 0x3e,
    0x0, 0x0, 0x3e, 0x0,

    /* U+005A "Z" */
    0x3f, 0xff, 0xe3, 0xff, 0xfe, 0x15, 0x5f, 0xc0,
    0x2, 0xf4, 0x0, 0x7e, 0x0, 0xf, 0xc0, 0x2,
    0xf4, 0x0, 0x7e, 0x0, 0xf, 0xc0, 0x3, 0xf5,
    0x54, 0x7f, 0xff, 0xf7, 0xff, 0xff,

    /* U+005B "[" */
    0xff, 0xbf, 0xdf, 0x83, 0xe0, 0xf8, 0x3e, 0xf,
    0x83, 0xe0, 0xf8, 0x3e, 0xf, 0x83, 0xe0, 0xff,
    0x7f, 0xe0,

    /* U+005C "\\" */
    0xe0, 0xb, 0x0, 0x74, 0x3, 0x80, 0x2c, 0x1,
    0xc0, 0xd, 0x0, 0xe0, 0xb, 0x0, 0x74, 0x3,
    0x80, 0x2c, 0x1, 0xc0,

    /* U+005D "]" */
    0x3f, 0xd3, 0xfd, 0x3, 0xd0, 0x3d, 0x3, 0xd0,
    0x3d, 0x3, 0xd0, 0x3d, 0x3, 0xd0, 0x3d, 0x3,
    0xd0, 0x3d, 0x3f, 0xd3, 0xfd,

    /* U+005E "^" */
    0x0, 0x50, 0x0, 0x2f, 0x80, 0x7, 0xfe, 0x1,
    0xf0, 0xf4, 0x38, 0x2, 0xc0,

    /* U+005F "_" */
    0x0, 0x0, 0xff, 0xfc, 0x55, 0x54,

    /* U+0060 "`" */
    0x3c, 0x3, 0x80, 0x34,

    /* U+0061 "a" */
    0x1f, 0xf8, 0xb, 0xff, 0xc1, 0x0, 0xf4, 0x1a,
    0xbe, 0x3f, 0xff, 0x8f, 0x43, 0xe7, 0xc1, 0xf8,
    0xfe, 0xfe, 0x1f, 0xdf, 0x80,

    /* U+0062 "b" */
    0xf8, 0x0, 0x3e, 0x0, 0xf, 0x80, 0x3, 0xe7,
    0xe0, 0xff, 0xff, 0x3f, 0x4b, 0xdf, 0xc0, 0xfb,
    0xf0, 0x3e, 0xfc, 0xf, 0xbf, 0x4b, 0xdf, 0xff,
    0xf3, 0xe7, 0xe0,

    /* U+0063 "c" */
    0x7, 0xfd, 0x1f, 0xfe, 0x3f, 0x1, 0x7d, 0x0,
    0x7d, 0x0, 0x7d, 0x0, 0x3f, 0x41, 0x1f, 0xfe,
    0x7, 0xfd,

    /* U+0064 "d" */
    0x0, 0x7, 0xc0, 0x0, 0x7c, 0x0, 0x7, 0xc0,
    0xbe, 0x7c, 0x2f, 0xff, 0xc3, 0xf0, 0xfc, 0x3d,
    0xb, 0xc7, 0xd0, 0x7c, 0x3d, 0xb, 0xc3, 0xe0,
    0xfc, 0x2f, 0xff, 0xc0, 0xbe, 0x7c,

    /* U+0065 "e" */
    0x7, 0xf8, 0x1, 0xff, 0xf0, 0x3e, 0xf, 0xc7,
    0xfa, 0xfc, 0x7f, 0xff, 0xc7, 0xd0, 0x0, 0x3f,
    0x1, 0x81, 0xff, 0xf8, 0x7, 0xfe, 0x0,

    /* U+0066 "f" */
    0x7, 0xf4, 0x7f, 0xd1, 0xf0, 0x2f, 0xfc, 0xbf,
    0xf0, 0x7c, 0x1, 0xf0, 0x7, 0xc0, 0x1f, 0x0,
    0x7c, 0x1, 0xf0, 0x7, 0xc0,

    /* U+0067 "g" */
    0xb, 0xe7, 0xc2, 0xff, 0xfc, 0x3f, 0xf, 0xc3,
    0xd0, 0xbc, 0x7d, 0x7, 0xc3, 0xd0, 0xbc, 0x3f,
    0xf, 0xc2, 0xff, 0xfc, 0xb, 0xeb, 0xc0, 0x0,
    0xfc, 0x1f, 0xff, 0x40, 0xbf, 0x80,

    /* U+0068 "h" */
    0xf8, 0x0, 0x3e, 0x0, 0xf, 0x80, 0x3, 0xe7,
    0xe0, 0xff, 0xfe, 0x3f, 0x8f, 0xcf, 0xc1, 0xf3,
    0xf0, 0x7c, 0xf8, 0x1f, 0x3e, 0x7, 0xcf, 0x81,
    0xf3, 0xe0, 0x7c,

    /* U+0069 "i" */
    0xfb, 0xe1, 0x3e, 0xfb, 0xef, 0xbe, 0xfb, 0xef,
    0xbe,

    /* U+006A "j" */
    0xf, 0x83, 0xe0, 0x10, 0x3e, 0xf, 0x83, 0xe0,
    0xf8, 0x3e, 0xf, 0x83, 0xe0, 0xf8, 0x3e, 0xf,
    0x9f, 0xd7, 0xd0,

    /* U+006B "k" */
    0xf8, 0x0, 0x3e, 0x0, 0xf, 0x80, 0x3, 0xe0,
    0xfc, 0xf8, 0xbc, 0x3e, 0xbc, 0xf, 0xfd, 0x3,
    0xff, 0x0, 0xff, 0xf0, 0x3e, 0x7e, 0xf, 0x87,
    0xe3, 0xe0, 0xbd,

    /* U+006C "l" */
    0xfb, 0xef, 0xbe, 0xfb, 0xef, 0xbe, 0xfb, 0xef,
    0xbe,

    /* U+006D "m" */
    0xf9, 0xf8, 0x7e, 0x3f, 0xff, 0xbf, 0xdf, 0xd3,
    0xf8, 0xfb, 0xf0, 0xfc, 0x2f, 0xfc, 0x2f, 0xb,
    0xfe, 0xb, 0xc2, 0xff, 0x82, 0xf0, 0xbf, 0xe0,
    0xbc, 0x2f, 0xf8, 0x2f, 0xb, 0xc0,

    /* U+006E "n" */
    0xf9, 0xf8, 0x3f, 0xff, 0x8f, 0xd2, 0xf3, 0xf0,
    0x7c, 0xf8, 0x1f, 0x3e, 0x7, 0xcf, 0x81, 0xf3,
    0xe0, 0x7c, 0xf8, 0x1f, 0x0,

    /* U+006F "o" */
    0x7, 0xfd, 0x1, 0xff, 0xf4, 0x3f, 0xf, 0xc7,
    0xd0, 0x7c, 0x7d, 0x7, 0xd7, 0xd0, 0x7c, 0x3f,
    0xf, 0xc1, 0xff, 0xf4, 0x7, 0xfd, 0x0,

    /* U+0070 "p" */
    0xf9, 0xf8, 0x3f, 0xff, 0xcf, 0xc1, 0xf7, 0xf0,
    0x3e, 0xfc, 0xf, 0xbf, 0x3, 0xef, 0xd2, 0xf7,
    0xff, 0xfc, 0xf9, 0xf8, 0x3e, 0x0, 0xf, 0x80,
    0x3, 0xe0, 0x0,

    /* U+0071 "q" */
    0xb, 0xe7, 0xc2, 0xff, 0xfc, 0x3f, 0xf, 0xc3,
    0xd0, 0xbc, 0x7d, 0x7, 0xc3, 0xd0, 0xbc, 0x3f,
    0xf, 0xc2, 0xff, 0xfc, 0xb, 0xe7, 0xc0, 0x0,
    0x7c, 0x0, 0x7, 0xc0, 0x0, 0x7c,

    /* U+0072 "r" */
    0x0, 0x3, 0xe7, 0xcf, 0xff, 0x3f, 0x80, 0xfc,
    0x3, 0xf0, 0xf, 0x80, 0x3e, 0x0, 0xf8, 0x3,
    0xe0, 0x0,

    /* U+0073 "s" */
    0xb, 0xf8, 0x3f, 0xfd, 0x3c, 0x4, 0x3f, 0x90,
    0x2f, 0xfd, 0x1, 0x7f, 0x10, 0x2f, 0x3f, 0xfe,
    0x2f, 0xf8,

    /* U+0074 "t" */
    0x19, 0x0, 0xbc, 0x2, 0xf0, 0x3f, 0xfe, 0xff,
    0xf8, 0xbc, 0x2, 0xf0, 0xb, 0xc0, 0x2f, 0x0,
    0x7c, 0x1, 0xff, 0x42, 0xfd,

    /* U+0075 "u" */
    0xf8, 0x1f, 0x3e, 0x7, 0xcf, 0x81, 0xf3, 0xe0,
    0x7c, 0xf8, 0x1f, 0x3e, 0xb, 0xcb, 0xc3, 0xf1,
    0xff, 0xfc, 0x2f, 0x9f, 0x0,

    /* U+0076 "v" */
    0xbc, 0xb, 0xc7, 0xc0, 0xf8, 0x3e, 0xf, 0x42,
    0xf1, 0xf0, 0xf, 0x3e, 0x0, 0xfb, 0xd0, 0xb,
    0xfc, 0x0, 0x3f, 0x80, 0x3, 0xf4, 0x0,

    /* U+0077 "w" */
    0x7c, 0x1f, 0xf, 0x8f, 0x4b, 0xc3, 0xd3, 0xd3,
    0xf0, 0xf0, 0xb8, 0xed, 0x7c, 0x1f, 0x77, 0xaf,
    0x3, 0xec, 0xff, 0x80, 0xff, 0x2f, 0xd0, 0x3f,
    0x87, 0xf0, 0xb, 0xd0, 0xfc, 0x0,

    /* U+0078 "x" */
    0x7d, 0xf, 0x82, 0xf2, 0xf0, 0xf, 0xbd, 0x0,
    0x7f, 0x80, 0x3, 0xf4, 0x0, 0xbf, 0xc0, 0xf,
    0xbd, 0x3, 0xf2, 0xf0, 0x7c, 0xf, 0x80,

    /* U+0079 "y" */
    0xbc, 0xb, 0xc3, 0xc0, 0xf8, 0x3e, 0xf, 0x1,
    0xf1, 0xf0, 0xf, 0x7e, 0x0, 0xbf, 0xc0, 0x7,
    0xfc, 0x0, 0x3f, 0x40, 0x1, 0xf0, 0x0, 0x2f,
    0x0, 0x1f, 0xd0, 0x2, 0xf4, 0x0,

    /* U+007A "z" */
    0x3f, 0xfe, 0x3f, 0xfe, 0x0, 0xbd, 0x1, 0xf4,
    0x7, 0xe0, 0xf, 0xc0, 0x3f, 0x0, 0x7f, 0xfe,
    0x7f, 0xfe,

    /* U+007B "{" */
    0x0, 0xbd, 0x3, 0xfd, 0x3, 0xe0, 0x3, 0xd0,
    0x3, 0xd0, 0x7, 0xd0, 0x3f, 0xc0, 0x3f, 0x80,
    0xb, 0xc0, 0x3, 0xd0, 0x3, 0xd0, 0x3, 0xd0,
    0x3, 0xe0, 0x2, 0xfd, 0x0, 0x6d,

    /* U+007C "|" */
    0x34, 0xd3, 0x4d, 0x34, 0xd3, 0x4d, 0x34, 0xd3,
    0x4d, 0x34, 0xd3, 0x4d, 0x0,

    /* U+007D "}" */
    0x3f, 0x40, 0x3f, 0xc0, 0x7, 0xc0, 0x3, 0xd0,
    0x3, 0xd0, 0x3, 0xe0, 0x2, 0xfd, 0x1, 0xfd,
    0x3, 0xe0, 0x3, 0xd0, 0x3, 0xd0, 0x3, 0xd0,
    0x7, 0xc0, 0x3f, 0xc0, 0x3a, 0x0,

    /* U+007E "~" */
    0x1b, 0x80, 0x57, 0xff, 0xfe, 0x50, 0x6f, 0x80,
    0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 80, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 105, .box_w = 3, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 9, .adv_w = 120, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 17, .adv_w = 193, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 53, .adv_w = 160, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 87, .adv_w = 231, .box_w = 14, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 129, .adv_w = 201, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 71, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 169, .adv_w = 105, .box_w = 5, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 188, .adv_w = 105, .box_w = 5, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 207, .adv_w = 120, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 223, .adv_w = 193, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 251, .adv_w = 88, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 257, .adv_w = 96, .box_w = 6, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 262, .adv_w = 88, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 265, .adv_w = 84, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 285, .adv_w = 160, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 315, .adv_w = 160, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 160, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 366, .adv_w = 160, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 393, .adv_w = 160, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 423, .adv_w = 160, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 450, .adv_w = 160, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 480, .adv_w = 160, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 507, .adv_w = 160, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 537, .adv_w = 160, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 567, .adv_w = 92, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 576, .adv_w = 92, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 590, .adv_w = 193, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 615, .adv_w = 193, .box_w = 10, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 628, .adv_w = 193, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 653, .adv_w = 134, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 674, .adv_w = 230, .box_w = 14, .box_h = 16, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 730, .adv_w = 178, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 766, .adv_w = 176, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 793, .adv_w = 169, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 823, .adv_w = 191, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 856, .adv_w = 157, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 880, .adv_w = 157, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 904, .adv_w = 189, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 937, .adv_w = 193, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 967, .adv_w = 86, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 979, .adv_w = 86, .box_w = 6, .box_h = 15, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 1002, .adv_w = 179, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1035, .adv_w = 147, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1059, .adv_w = 229, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1095, .adv_w = 193, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1125, .adv_w = 196, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1161, .adv_w = 169, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1188, .adv_w = 196, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1230, .adv_w = 177, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1260, .adv_w = 166, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1287, .adv_w = 157, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1317, .adv_w = 187, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1347, .adv_w = 178, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1383, .adv_w = 254, .box_w = 16, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1431, .adv_w = 178, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1464, .adv_w = 167, .box_w = 12, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1500, .adv_w = 167, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1530, .adv_w = 105, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1548, .adv_w = 84, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1568, .adv_w = 105, .box_w = 6, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1589, .adv_w = 193, .box_w = 10, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 1602, .adv_w = 115, .box_w = 8, .box_h = 3, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1608, .adv_w = 115, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 1612, .adv_w = 155, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1633, .adv_w = 165, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1660, .adv_w = 137, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1678, .adv_w = 165, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1708, .adv_w = 156, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1731, .adv_w = 100, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1752, .adv_w = 165, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1782, .adv_w = 164, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1809, .adv_w = 79, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1818, .adv_w = 79, .box_w = 5, .box_h = 15, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 1837, .adv_w = 153, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1864, .adv_w = 79, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1873, .adv_w = 240, .box_w = 13, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1903, .adv_w = 164, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1924, .adv_w = 158, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1947, .adv_w = 165, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1974, .adv_w = 165, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2004, .adv_w = 114, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2022, .adv_w = 137, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2040, .adv_w = 110, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2061, .adv_w = 164, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2082, .adv_w = 150, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2105, .adv_w = 213, .box_w = 13, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2135, .adv_w = 149, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2158, .adv_w = 150, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2188, .adv_w = 134, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2206, .adv_w = 164, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2236, .adv_w = 84, .box_w = 3, .box_h = 17, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 2249, .adv_w = 164, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2279, .adv_w = 193, .box_w = 10, .box_h = 4, .ofs_x = 1, .ofs_y = 3}
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
    .bpp = 2,
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
    .line_height = 18,          /*The maximum line height required by the font*/
    .base_line = 5,             /*Baseline measured from the bottom of the line*/
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

