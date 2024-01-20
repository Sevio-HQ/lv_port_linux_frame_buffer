/*******************************************************************************
 * Size: 11 px
 * Bpp: 4
 * Opts: --bpp 4 --size 11 --font C:\Users\Stefano Bandi\Documents\GitHub\lv_port_linux_frame_buffer\sevio_ui_01\assets\fonts\DejaVuSans.ttf -o C:\Users\Stefano Bandi\Documents\GitHub\lv_port_linux_frame_buffer\sevio_ui_01\assets\fonts\ui_font_tahoma.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_TAHOMA
#define UI_FONT_TAHOMA 1
#endif

#if UI_FONT_TAHOMA

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x5c, 0x5c, 0x5c, 0x5b, 0x4a, 0x13, 0x13, 0x5c,

    /* U+0022 "\"" */
    0xe0, 0xee, 0xe, 0xd0, 0xd0,

    /* U+0023 "#" */
    0x0, 0x2, 0xa0, 0xb1, 0x0, 0x0, 0x76, 0xd,
    0x0, 0x6, 0xce, 0xdd, 0xec, 0x40, 0x0, 0xd0,
    0x75, 0x0, 0x0, 0x2b, 0xb, 0x20, 0x1, 0xcd,
    0xec, 0xfc, 0x90, 0x0, 0x93, 0x3a, 0x0, 0x0,
    0xd, 0x7, 0x60, 0x0,

    /* U+0024 "$" */
    0x0, 0x8, 0x0, 0x0, 0x4b, 0xdb, 0x60, 0xe,
    0x18, 0x2, 0x0, 0xe4, 0x80, 0x0, 0x3, 0xbf,
    0xb3, 0x0, 0x0, 0x84, 0xe0, 0x2, 0x8, 0x1f,
    0x0, 0xbc, 0xed, 0x50, 0x0, 0x8, 0x0, 0x0,
    0x0, 0x40, 0x0,

    /* U+0025 "%" */
    0xa, 0xaa, 0x0, 0x1c, 0x0, 0x58, 0xa, 0x30,
    0xa3, 0x0, 0x4a, 0xb, 0x34, 0x90, 0x0, 0x8,
    0xa7, 0xc, 0x10, 0x0, 0x0, 0x0, 0x85, 0x2a,
    0xa2, 0x0, 0x2, 0xb0, 0xb2, 0x2b, 0x0, 0xb,
    0x20, 0xc1, 0x1c, 0x0, 0x67, 0x0, 0x4b, 0xb4,

    /* U+0026 "&" */
    0x0, 0x9d, 0xd6, 0x0, 0x0, 0x4c, 0x0, 0x20,
    0x0, 0x3, 0xd0, 0x0, 0x0, 0x0, 0x4f, 0xb0,
    0x0, 0x20, 0x1e, 0x29, 0xb0, 0x4a, 0x4, 0xc0,
    0x9, 0xba, 0x50, 0x1e, 0x20, 0xc, 0xe0, 0x0,
    0x4c, 0xbb, 0x89, 0xb0,

    /* U+0027 "'" */
    0xee, 0xd0,

    /* U+0028 "(" */
    0x0, 0xb2, 0x4, 0xa0, 0xa, 0x50, 0xe, 0x10,
    0xf, 0x0, 0xf, 0x0, 0xc, 0x30, 0x7, 0x70,
    0x1, 0xd0, 0x0, 0x42,

    /* U+0029 ")" */
    0xc, 0x10, 0x6, 0x80, 0x0, 0xe0, 0x0, 0xd3,
    0x0, 0xb5, 0x0, 0xc4, 0x0, 0xe1, 0x3, 0xc0,
    0x9, 0x40, 0x6, 0x0,

    /* U+002A "*" */
    0x0, 0x91, 0x0, 0x58, 0xa5, 0xa0, 0x4, 0xfb,
    0x0, 0x57, 0x94, 0x90, 0x0, 0x80, 0x0,

    /* U+002B "+" */
    0x0, 0x9, 0x0, 0x0, 0x0, 0xd, 0x10, 0x0,
    0x0, 0xd, 0x10, 0x0, 0xbe, 0xef, 0xee, 0xe0,
    0x0, 0xd, 0x10, 0x0, 0x0, 0xd, 0x10, 0x0,
    0x0, 0xd, 0x10, 0x0,

    /* U+002C "," */
    0x6, 0x30, 0xc4, 0xc, 0x0,

    /* U+002D "-" */
    0x6d, 0xd6,

    /* U+002E "." */
    0x41, 0xd5,

    /* U+002F "/" */
    0x0, 0x58, 0x0, 0xa3, 0x0, 0xd0, 0x4, 0x90,
    0x9, 0x40, 0xd, 0x0, 0x3a, 0x0, 0x85, 0x0,
    0xd1, 0x0,

    /* U+0030 "0" */
    0x2, 0xcd, 0xc2, 0x0, 0xc6, 0x6, 0xb0, 0x1f,
    0x0, 0xf, 0x13, 0xd0, 0x0, 0xd3, 0x3d, 0x0,
    0xd, 0x31, 0xf0, 0x0, 0xf1, 0xc, 0x60, 0x6c,
    0x0, 0x2c, 0xec, 0x20,

    /* U+0031 "1" */
    0x8d, 0xf3, 0x3, 0x1d, 0x30, 0x0, 0xd3, 0x0,
    0xd, 0x30, 0x0, 0xd3, 0x0, 0xd, 0x30, 0x0,
    0xd3, 0x9, 0xef, 0xee,

    /* U+0032 "2" */
    0x1a, 0xee, 0xb1, 0x15, 0x0, 0x9a, 0x0, 0x0,
    0x4c, 0x0, 0x0, 0xb7, 0x0, 0x9, 0xa0, 0x0,
    0x9b, 0x0, 0x9, 0xb0, 0x0, 0x2f, 0xee, 0xec,

    /* U+0033 "3" */
    0xb, 0xee, 0xc3, 0x0, 0x10, 0x6, 0xd0, 0x0,
    0x0, 0x6d, 0x0, 0xa, 0xee, 0x20, 0x0, 0x0,
    0x6b, 0x0, 0x0, 0x0, 0xf1, 0x12, 0x0, 0x6e,
    0x1, 0xce, 0xeb, 0x30,

    /* U+0034 "4" */
    0x0, 0x7, 0xf3, 0x0, 0x2, 0xbd, 0x30, 0x0,
    0xc2, 0xd3, 0x0, 0x87, 0xd, 0x30, 0x3c, 0x0,
    0xd3, 0x7, 0xee, 0xef, 0xe5, 0x0, 0x0, 0xd3,
    0x0, 0x0, 0xd, 0x30,

    /* U+0035 "5" */
    0xd, 0xee, 0xe6, 0x0, 0xd3, 0x0, 0x0, 0xd,
    0x30, 0x0, 0x0, 0xdd, 0xda, 0x10, 0x2, 0x0,
    0x8c, 0x0, 0x0, 0x1, 0xf0, 0x1, 0x0, 0x7c,
    0x1, 0xde, 0xeb, 0x20,

    /* U+0036 "6" */
    0x0, 0x9e, 0xe9, 0x0, 0x8b, 0x0, 0x20, 0xf,
    0x20, 0x0, 0x2, 0xe8, 0xdc, 0x40, 0x2f, 0x70,
    0x3f, 0x11, 0xf1, 0x0, 0xd4, 0xb, 0x60, 0x2f,
    0x10, 0x2c, 0xdd, 0x50,

    /* U+0037 "7" */
    0x1e, 0xee, 0xef, 0x0, 0x0, 0x7, 0xa0, 0x0,
    0x0, 0xd4, 0x0, 0x0, 0x4d, 0x0, 0x0, 0xa,
    0x70, 0x0, 0x0, 0xf1, 0x0, 0x0, 0x6b, 0x0,
    0x0, 0xc, 0x50, 0x0,

    /* U+0038 "8" */
    0x4, 0xdd, 0xd5, 0x0, 0xf3, 0x3, 0xf0, 0xf,
    0x30, 0x4d, 0x0, 0x4e, 0xee, 0x30, 0xc, 0x40,
    0x4e, 0x3, 0xe0, 0x0, 0xe3, 0x1f, 0x30, 0x3f,
    0x10, 0x5d, 0xdd, 0x50,

    /* U+0039 "9" */
    0x5, 0xdd, 0xb1, 0x1, 0xe2, 0x6, 0xb0, 0x4d,
    0x0, 0x1f, 0x1, 0xf3, 0x7, 0xf2, 0x4, 0xcc,
    0x8f, 0x20, 0x0, 0x2, 0xf0, 0x2, 0x0, 0xb8,
    0x0, 0xae, 0xe9, 0x0,

    /* U+003A ":" */
    0x0, 0xb6, 0x21, 0x0, 0x32, 0xb6,

    /* U+003B ";" */
    0x0, 0x0, 0xb6, 0x2, 0x10, 0x0, 0x0, 0x0,
    0x63, 0xc, 0x40, 0xc0,

    /* U+003C "<" */
    0x0, 0x0, 0x0, 0x10, 0x0, 0x0, 0x5a, 0xd0,
    0x4, 0x9d, 0x94, 0x0, 0xce, 0x50, 0x0, 0x0,
    0x38, 0xda, 0x50, 0x0, 0x0, 0x4, 0x9e, 0xa0,
    0x0, 0x0, 0x0, 0x50,

    /* U+003D "=" */
    0xbe, 0xee, 0xee, 0xe0, 0x0, 0x0, 0x0, 0x0,
    0xbe, 0xee, 0xee, 0xe0,

    /* U+003E ">" */
    0x10, 0x0, 0x0, 0x0, 0xbc, 0x61, 0x0, 0x0,
    0x2, 0x8d, 0xb5, 0x0, 0x0, 0x0, 0x3d, 0xf0,
    0x0, 0x39, 0xda, 0x40, 0x7d, 0xb5, 0x0, 0x0,
    0x41, 0x0, 0x0, 0x0,

    /* U+003F "?" */
    0x1b, 0xde, 0x60, 0x13, 0x3, 0xf0, 0x0, 0x4,
    0xe0, 0x0, 0x3d, 0x30, 0x0, 0xc4, 0x0, 0x0,
    0xc2, 0x0, 0x0, 0x40, 0x0, 0x0, 0xe3, 0x0,

    /* U+0040 "@" */
    0x0, 0x5, 0xbc, 0xb7, 0x0, 0x0, 0xb, 0x71,
    0x0, 0x6c, 0x10, 0x9, 0x50, 0x0, 0x0, 0x4a,
    0x0, 0xc0, 0x1a, 0xb7, 0xa0, 0xb0, 0x38, 0x8,
    0x60, 0x6c, 0x9, 0x33, 0x80, 0xb2, 0x1, 0xc0,
    0xa1, 0x1b, 0x8, 0x60, 0x6c, 0x3a, 0x0, 0x95,
    0x1a, 0xb7, 0xc8, 0x0, 0x0, 0xb7, 0x0, 0x4,
    0x30, 0x0, 0x0, 0x6b, 0xbb, 0x70, 0x0,

    /* U+0041 "A" */
    0x0, 0x1f, 0x90, 0x0, 0x0, 0x6b, 0xe0, 0x0,
    0x0, 0xc4, 0xb5, 0x0, 0x3, 0xd0, 0x5b, 0x0,
    0x9, 0x70, 0xe, 0x10, 0xe, 0xee, 0xef, 0x70,
    0x5c, 0x0, 0x3, 0xd0, 0xb6, 0x0, 0x0, 0xd3,

    /* U+0042 "B" */
    0xee, 0xde, 0x90, 0xe2, 0x0, 0xc5, 0xe2, 0x0,
    0xd4, 0xed, 0xdf, 0xa0, 0xe2, 0x0, 0xb7, 0xe2,
    0x0, 0x6b, 0xe2, 0x0, 0xa9, 0xee, 0xee, 0xa1,

    /* U+0043 "C" */
    0x0, 0x8d, 0xed, 0x80, 0xa, 0xb1, 0x0, 0x71,
    0x2f, 0x10, 0x0, 0x0, 0x5d, 0x0, 0x0, 0x0,
    0x5d, 0x0, 0x0, 0x0, 0x2f, 0x10, 0x0, 0x0,
    0xa, 0xb1, 0x0, 0x71, 0x0, 0x8e, 0xed, 0x80,

    /* U+0044 "D" */
    0xee, 0xde, 0xa3, 0xe, 0x20, 0x6, 0xf2, 0xe2,
    0x0, 0x9, 0x9e, 0x20, 0x0, 0x6c, 0xe2, 0x0,
    0x6, 0xce, 0x20, 0x0, 0x99, 0xe2, 0x0, 0x6f,
    0x2e, 0xee, 0xea, 0x30,

    /* U+0045 "E" */
    0xee, 0xee, 0xe2, 0xe2, 0x0, 0x0, 0xe2, 0x0,
    0x0, 0xee, 0xee, 0xd0, 0xe2, 0x0, 0x0, 0xe2,
    0x0, 0x0, 0xe2, 0x0, 0x0, 0xee, 0xee, 0xe3,

    /* U+0046 "F" */
    0xee, 0xee, 0x9e, 0x20, 0x0, 0xe2, 0x0, 0xe,
    0xee, 0xe4, 0xe2, 0x0, 0xe, 0x20, 0x0, 0xe2,
    0x0, 0xe, 0x20, 0x0,

    /* U+0047 "G" */
    0x0, 0x8d, 0xed, 0xa2, 0xa, 0xb1, 0x0, 0x65,
    0x2f, 0x10, 0x0, 0x0, 0x5d, 0x0, 0x0, 0x0,
    0x5d, 0x0, 0x2d, 0xe9, 0x2f, 0x10, 0x0, 0x7a,
    0xa, 0xb1, 0x0, 0x8a, 0x0, 0x8d, 0xed, 0xa2,

    /* U+0048 "H" */
    0xe2, 0x0, 0xe, 0x3e, 0x20, 0x0, 0xe3, 0xe2,
    0x0, 0xe, 0x3e, 0xee, 0xee, 0xf3, 0xe2, 0x0,
    0xe, 0x3e, 0x20, 0x0, 0xe3, 0xe2, 0x0, 0xe,
    0x3e, 0x20, 0x0, 0xe3,

    /* U+0049 "I" */
    0xe2, 0xe2, 0xe2, 0xe2, 0xe2, 0xe2, 0xe2, 0xe2,

    /* U+004A "J" */
    0x0, 0xe2, 0x0, 0xe2, 0x0, 0xe2, 0x0, 0xe2,
    0x0, 0xe2, 0x0, 0xe2, 0x0, 0xe2, 0x0, 0xf2,
    0x2, 0xf0, 0x8e, 0x60,

    /* U+004B "K" */
    0xe2, 0x0, 0xb9, 0xe, 0x21, 0xc8, 0x0, 0xe4,
    0xc7, 0x0, 0xe, 0xe8, 0x0, 0x0, 0xea, 0xd1,
    0x0, 0xe, 0x27, 0xd1, 0x0, 0xe2, 0x7, 0xd1,
    0xe, 0x20, 0x7, 0xd1,

    /* U+004C "L" */
    0xe2, 0x0, 0x0, 0xe2, 0x0, 0x0, 0xe2, 0x0,
    0x0, 0xe2, 0x0, 0x0, 0xe2, 0x0, 0x0, 0xe2,
    0x0, 0x0, 0xe2, 0x0, 0x0, 0xee, 0xee, 0xe0,

    /* U+004D "M" */
    0xee, 0x0, 0x6, 0xf6, 0xec, 0x40, 0xc, 0xc6,
    0xe6, 0xa0, 0x2c, 0xa6, 0xe2, 0xd0, 0x86, 0xa6,
    0xe2, 0x86, 0xd1, 0xa6, 0xe2, 0x2e, 0xa0, 0xa6,
    0xe2, 0x6, 0x20, 0xa6, 0xe2, 0x0, 0x0, 0xa6,

    /* U+004E "N" */
    0xec, 0x0, 0xe, 0x2e, 0xe5, 0x0, 0xe2, 0xe5,
    0xd0, 0xe, 0x2e, 0x2b, 0x60, 0xe2, 0xe2, 0x2e,
    0xe, 0x2e, 0x20, 0xa7, 0xe2, 0xe2, 0x2, 0xef,
    0x2e, 0x20, 0x9, 0xf2,

    /* U+004F "O" */
    0x0, 0x8e, 0xed, 0x50, 0x0, 0x9b, 0x0, 0x3e,
    0x50, 0x1f, 0x10, 0x0, 0x6c, 0x4, 0xd0, 0x0,
    0x2, 0xf0, 0x4d, 0x0, 0x0, 0x2f, 0x2, 0xf1,
    0x0, 0x6, 0xd0, 0x9, 0xb0, 0x3, 0xe5, 0x0,
    0x8, 0xee, 0xd5, 0x0,

    /* U+0050 "P" */
    0xee, 0xdd, 0x50, 0xe2, 0x3, 0xf1, 0xe2, 0x0,
    0xe3, 0xe2, 0x4, 0xf1, 0xee, 0xec, 0x40, 0xe2,
    0x0, 0x0, 0xe2, 0x0, 0x0, 0xe2, 0x0, 0x0,

    /* U+0051 "Q" */
    0x0, 0x8e, 0xed, 0x50, 0x0, 0x9b, 0x0, 0x3e,
    0x50, 0x1f, 0x10, 0x0, 0x6d, 0x4, 0xd0, 0x0,
    0x2, 0xf0, 0x4d, 0x0, 0x0, 0x2f, 0x2, 0xf1,
    0x0, 0x6, 0xc0, 0x9, 0xb0, 0x2, 0xd3, 0x0,
    0x8, 0xee, 0xf3, 0x0, 0x0, 0x0, 0x9, 0xc0,
    0x0,

    /* U+0052 "R" */
    0xee, 0xdd, 0x60, 0xe, 0x20, 0x3f, 0x10, 0xe2,
    0x0, 0xe3, 0xe, 0x20, 0x4d, 0x0, 0xee, 0xef,
    0x40, 0xe, 0x20, 0x5f, 0x10, 0xe2, 0x0, 0xa9,
    0xe, 0x20, 0x2, 0xf1,

    /* U+0053 "S" */
    0x5, 0xdd, 0xea, 0x2, 0xf2, 0x0, 0x30, 0x3e,
    0x0, 0x0, 0x0, 0xae, 0xa6, 0x10, 0x0, 0x26,
    0xbe, 0x10, 0x0, 0x0, 0xd5, 0x24, 0x0, 0x2e,
    0x32, 0xbe, 0xdd, 0x60,

    /* U+0054 "T" */
    0xe, 0xee, 0xfe, 0xea, 0x0, 0x3, 0xe0, 0x0,
    0x0, 0x3, 0xe0, 0x0, 0x0, 0x3, 0xe0, 0x0,
    0x0, 0x3, 0xe0, 0x0, 0x0, 0x3, 0xe0, 0x0,
    0x0, 0x3, 0xe0, 0x0, 0x0, 0x3, 0xe0, 0x0,

    /* U+0055 "U" */
    0xf, 0x0, 0x0, 0xf1, 0xf, 0x0, 0x0, 0xf1,
    0xf, 0x0, 0x0, 0xf1, 0xf, 0x0, 0x0, 0xf1,
    0xf, 0x0, 0x0, 0xf1, 0xf, 0x20, 0x1, 0xf0,
    0xa, 0x80, 0x8, 0xb0, 0x1, 0xad, 0xdb, 0x10,

    /* U+0056 "V" */
    0xb6, 0x0, 0x0, 0xd3, 0x5c, 0x0, 0x4, 0xd0,
    0xe, 0x20, 0xa, 0x70, 0x9, 0x80, 0xf, 0x10,
    0x3, 0xe0, 0x6b, 0x0, 0x0, 0xd4, 0xc5, 0x0,
    0x0, 0x6c, 0xe0, 0x0, 0x0, 0x1f, 0x90, 0x0,

    /* U+0057 "W" */
    0x89, 0x0, 0x4f, 0x20, 0xb, 0x64, 0xd0, 0x8,
    0xc6, 0x0, 0xf2, 0xf, 0x10, 0xc4, 0xa0, 0x3e,
    0x0, 0xc5, 0xd, 0xd, 0x7, 0xa0, 0x8, 0x94,
    0x90, 0xb2, 0xb6, 0x0, 0x4d, 0x85, 0x7, 0x6f,
    0x20, 0x0, 0xfd, 0x10, 0x3d, 0xe0, 0x0, 0xc,
    0xd0, 0x0, 0xfa, 0x0,

    /* U+0058 "X" */
    0x1e, 0x30, 0x7, 0xa0, 0x4, 0xd0, 0x2e, 0x10,
    0x0, 0xa8, 0xd5, 0x0, 0x0, 0x1f, 0xa0, 0x0,
    0x0, 0x5e, 0xd0, 0x0, 0x1, 0xe2, 0xa8, 0x0,
    0xa, 0x70, 0x1e, 0x30, 0x5d, 0x0, 0x4, 0xd0,

    /* U+0059 "Y" */
    0xa, 0x70, 0x0, 0xc6, 0x1, 0xe2, 0x6, 0xb0,
    0x0, 0x5c, 0x2e, 0x10, 0x0, 0xa, 0xf5, 0x0,
    0x0, 0x3, 0xe0, 0x0, 0x0, 0x3, 0xe0, 0x0,
    0x0, 0x3, 0xe0, 0x0, 0x0, 0x3, 0xe0, 0x0,

    /* U+005A "Z" */
    0x5e, 0xee, 0xef, 0xe0, 0x0, 0x0, 0x1d, 0x50,
    0x0, 0x0, 0xb8, 0x0, 0x0, 0x8, 0xb0, 0x0,
    0x0, 0x5d, 0x10, 0x0, 0x2, 0xe2, 0x0, 0x0,
    0x1d, 0x50, 0x0, 0x0, 0x7f, 0xee, 0xee, 0xe0,

    /* U+005B "[" */
    0xf, 0xc2, 0xf, 0x0, 0xf, 0x0, 0xf, 0x0,
    0xf, 0x0, 0xf, 0x0, 0xf, 0x0, 0xf, 0x0,
    0xf, 0x0, 0xd, 0xb2,

    /* U+005C "\\" */
    0xd1, 0x0, 0x85, 0x0, 0x3a, 0x0, 0xd, 0x0,
    0x9, 0x40, 0x4, 0x90, 0x0, 0xd0, 0x0, 0xa3,
    0x0, 0x58,

    /* U+005D "]" */
    0xbe, 0x50, 0xa5, 0xa, 0x50, 0xa5, 0xa, 0x50,
    0xa5, 0xa, 0x50, 0xa5, 0xa, 0x5a, 0xc4,

    /* U+005E "^" */
    0x0, 0x6f, 0x90, 0x0, 0x6, 0xc2, 0xa9, 0x0,
    0x5b, 0x0, 0x9, 0x80,

    /* U+005F "_" */
    0x1c, 0xcc, 0xcc, 0x70,

    /* U+0060 "`" */
    0xa, 0x50, 0x0, 0xb2,

    /* U+0061 "a" */
    0xa, 0xcd, 0xa1, 0x1, 0x0, 0x78, 0x6, 0xcc,
    0xdb, 0x3d, 0x10, 0x4b, 0x4c, 0x0, 0xab, 0xa,
    0xba, 0x8b,

    /* U+0062 "b" */
    0xf0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf8, 0xcd,
    0x50, 0xf7, 0x2, 0xe1, 0xf0, 0x0, 0xb4, 0xf0,
    0x0, 0xb4, 0xf7, 0x2, 0xe1, 0xf7, 0xcd, 0x50,

    /* U+0063 "c" */
    0x3, 0xcd, 0xd3, 0x1e, 0x30, 0x1, 0x5b, 0x0,
    0x0, 0x4b, 0x0, 0x0, 0x1e, 0x30, 0x1, 0x3,
    0xcd, 0xd3,

    /* U+0064 "d" */
    0x0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x5, 0xdc,
    0x7f, 0x1e, 0x20, 0x7f, 0x5b, 0x0, 0x1f, 0x5a,
    0x0, 0xf, 0x1e, 0x10, 0x5f, 0x5, 0xca, 0x7f,

    /* U+0065 "e" */
    0x3, 0xcc, 0xc4, 0x1, 0xd1, 0x1, 0xe0, 0x4e,
    0xcc, 0xcd, 0x25, 0xc0, 0x0, 0x0, 0x1e, 0x40,
    0x3, 0x0, 0x3c, 0xdd, 0xa0,

    /* U+0066 "f" */
    0x5, 0xdc, 0x0, 0xc3, 0x0, 0x9f, 0xc9, 0x0,
    0xc3, 0x0, 0xc, 0x30, 0x0, 0xc3, 0x0, 0xc,
    0x30, 0x0, 0xc3, 0x0,

    /* U+0067 "g" */
    0x5, 0xdc, 0x7f, 0x1e, 0x10, 0x7f, 0x5a, 0x0,
    0xf, 0x5a, 0x0, 0xf, 0x1e, 0x10, 0x7f, 0x5,
    0xdc, 0x7e, 0x0, 0x0, 0x5b, 0x8, 0xcc, 0xb2,

    /* U+0068 "h" */
    0xf0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf7, 0xdd,
    0x40, 0xf6, 0x3, 0xe0, 0xf0, 0x0, 0xf0, 0xf0,
    0x0, 0xf0, 0xf0, 0x0, 0xf0, 0xf0, 0x0, 0xf0,

    /* U+0069 "i" */
    0xf0, 0x30, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0,

    /* U+006A "j" */
    0x0, 0xf0, 0x0, 0x30, 0x0, 0xf0, 0x0, 0xf0,
    0x0, 0xf0, 0x0, 0xf0, 0x0, 0xf0, 0x0, 0xf0,
    0x0, 0xf0, 0x2d, 0x70,

    /* U+006B "k" */
    0xf0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0x9,
    0x90, 0xf0, 0xb8, 0x0, 0xfc, 0x60, 0x0, 0xf8,
    0xb0, 0x0, 0xf0, 0x8b, 0x0, 0xf0, 0x7, 0xc0,

    /* U+006C "l" */
    0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0,

    /* U+006D "m" */
    0xf7, 0xdd, 0x38, 0xdd, 0x2f, 0x60, 0x5f, 0x40,
    0x7a, 0xf0, 0x1, 0xe0, 0x3, 0xcf, 0x0, 0x1e,
    0x0, 0x3c, 0xf0, 0x1, 0xe0, 0x3, 0xcf, 0x0,
    0x1e, 0x0, 0x3c,

    /* U+006E "n" */
    0xf7, 0xac, 0x40, 0xf4, 0x2, 0xe0, 0xf0, 0x0,
    0xf0, 0xf0, 0x0, 0xf0, 0xf0, 0x0, 0xf0, 0xf0,
    0x0, 0xf0,

    /* U+006F "o" */
    0x4, 0xcd, 0xb2, 0x1, 0xe2, 0x6, 0xc0, 0x5b,
    0x0, 0xf, 0x5, 0xb0, 0x0, 0xf0, 0x1e, 0x20,
    0x6c, 0x0, 0x4d, 0xdb, 0x20,

    /* U+0070 "p" */
    0xf8, 0xac, 0x50, 0xf5, 0x1, 0xe1, 0xf0, 0x0,
    0xb4, 0xf1, 0x0, 0xb4, 0xf7, 0x2, 0xe1, 0xf7,
    0xcd, 0x50, 0xf0, 0x0, 0x0, 0xf0, 0x0, 0x0,

    /* U+0071 "q" */
    0x5, 0xdc, 0x7f, 0x1e, 0x20, 0x7f, 0x5b, 0x0,
    0x1f, 0x5b, 0x0, 0x1f, 0x1e, 0x20, 0x7f, 0x5,
    0xdc, 0x7f, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf,

    /* U+0072 "r" */
    0x0, 0x0, 0xf7, 0xa6, 0xf5, 0x0, 0xf0, 0x0,
    0xf0, 0x0, 0xf0, 0x0, 0xf0, 0x0,

    /* U+0073 "s" */
    0xa, 0xdc, 0xb0, 0x4b, 0x0, 0x0, 0x1e, 0x95,
    0x0, 0x0, 0x49, 0xd0, 0x10, 0x0, 0xe1, 0x4d,
    0xdd, 0x70,

    /* U+0074 "t" */
    0x7, 0x0, 0x0, 0xf0, 0x0, 0x8f, 0xcc, 0x0,
    0xf0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xe,
    0x10, 0x0, 0x7d, 0xd0,

    /* U+0075 "u" */
    0x1e, 0x0, 0xf, 0x1e, 0x0, 0xf, 0x1e, 0x0,
    0xf, 0xe, 0x0, 0xf, 0xe, 0x10, 0x5f, 0x5,
    0xca, 0x7f,

    /* U+0076 "v" */
    0x78, 0x0, 0x1e, 0x1, 0xe0, 0x6, 0x90, 0xb,
    0x40, 0xc3, 0x0, 0x5a, 0x2d, 0x0, 0x0, 0xea,
    0x70, 0x0, 0x9, 0xf1, 0x0,

    /* U+0077 "w" */
    0x69, 0x3, 0xf3, 0x9, 0x62, 0xd0, 0x7c, 0x70,
    0xd2, 0xe, 0x1b, 0x4b, 0x1e, 0x0, 0x96, 0xd0,
    0xd6, 0x90, 0x5, 0xe9, 0x9, 0xe5, 0x0, 0x1f,
    0x50, 0x5f, 0x10,

    /* U+0078 "x" */
    0x2e, 0x10, 0x7a, 0x0, 0x5c, 0x4d, 0x0, 0x0,
    0xaf, 0x30, 0x0, 0xc, 0xe4, 0x0, 0x9, 0x92,
    0xe1, 0x5, 0xd0, 0x6, 0xc0,

    /* U+0079 "y" */
    0x79, 0x0, 0x1e, 0x1, 0xe0, 0x7, 0x80, 0x9,
    0x60, 0xe2, 0x0, 0x2d, 0x5b, 0x0, 0x0, 0xbe,
    0x40, 0x0, 0x5, 0xe0, 0x0, 0x0, 0x97, 0x0,
    0x1, 0xdc, 0x0, 0x0,

    /* U+007A "z" */
    0x4c, 0xcc, 0xf4, 0x0, 0x7, 0xb0, 0x0, 0x4d,
    0x10, 0x3, 0xd2, 0x0, 0x1d, 0x30, 0x0, 0x8e,
    0xcc, 0xc3,

    /* U+007B "{" */
    0x0, 0x8c, 0x70, 0xe, 0x10, 0x0, 0xf0, 0x0,
    0x1f, 0x0, 0x7f, 0x70, 0x0, 0x2e, 0x0, 0x0,
    0xf0, 0x0, 0xf, 0x0, 0x0, 0xd2, 0x0, 0x5,
    0xc7,

    /* U+007C "|" */
    0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95,
    0x95, 0x95, 0x42,

    /* U+007D "}" */
    0x7c, 0x80, 0x0, 0x1e, 0x0, 0x0, 0xf0, 0x0,
    0xf, 0x10, 0x0, 0x7f, 0x70, 0xe, 0x20, 0x0,
    0xf0, 0x0, 0xf, 0x0, 0x2, 0xd0, 0x7, 0xc5,
    0x0,

    /* U+007E "~" */
    0x0, 0x0, 0x0, 0x0, 0x4c, 0xd9, 0x32, 0x90,
    0x81, 0x6, 0xdc, 0x50, 0x0, 0x0, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 56, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 71, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8, .adv_w = 81, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 13, .adv_w = 147, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 49, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 84, .adv_w = 167, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 124, .adv_w = 137, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 160, .adv_w = 48, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 162, .adv_w = 69, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 182, .adv_w = 69, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 202, .adv_w = 88, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 217, .adv_w = 147, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 245, .adv_w = 56, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 250, .adv_w = 64, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 252, .adv_w = 56, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 254, .adv_w = 59, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 272, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 300, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 320, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 344, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 400, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 428, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 456, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 484, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 512, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 540, .adv_w = 59, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 546, .adv_w = 59, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 558, .adv_w = 147, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 586, .adv_w = 147, .box_w = 8, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 598, .adv_w = 147, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 626, .adv_w = 93, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 650, .adv_w = 176, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 705, .adv_w = 120, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 737, .adv_w = 121, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 761, .adv_w = 123, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 793, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 821, .adv_w = 111, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 845, .adv_w = 101, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 865, .adv_w = 136, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 897, .adv_w = 132, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 925, .adv_w = 52, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 933, .adv_w = 52, .box_w = 4, .box_h = 10, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 953, .adv_w = 115, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 981, .adv_w = 98, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1005, .adv_w = 152, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1037, .adv_w = 132, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1065, .adv_w = 139, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1101, .adv_w = 106, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1125, .adv_w = 139, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1166, .adv_w = 122, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1194, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1222, .adv_w = 108, .box_w = 8, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1254, .adv_w = 129, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1286, .adv_w = 120, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1318, .adv_w = 174, .box_w = 11, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1362, .adv_w = 121, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1394, .adv_w = 108, .box_w = 8, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1426, .adv_w = 121, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1458, .adv_w = 69, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1478, .adv_w = 59, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1496, .adv_w = 69, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1511, .adv_w = 147, .box_w = 8, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1523, .adv_w = 88, .box_w = 7, .box_h = 1, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 1527, .adv_w = 88, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 1531, .adv_w = 108, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1549, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1573, .adv_w = 97, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1591, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1615, .adv_w = 108, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1636, .adv_w = 62, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1656, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1680, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1704, .adv_w = 49, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1712, .adv_w = 49, .box_w = 4, .box_h = 10, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 1732, .adv_w = 102, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1756, .adv_w = 49, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1764, .adv_w = 171, .box_w = 9, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1791, .adv_w = 112, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1809, .adv_w = 108, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1830, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1854, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1878, .adv_w = 72, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1892, .adv_w = 92, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1910, .adv_w = 69, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1930, .adv_w = 112, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1948, .adv_w = 104, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1969, .adv_w = 144, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1996, .adv_w = 104, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2017, .adv_w = 104, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2045, .adv_w = 92, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2063, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2088, .adv_w = 59, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2099, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2124, .adv_w = 147, .box_w = 8, .box_h = 4, .ofs_x = 1, .ofs_y = 2}
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
    .bpp = 4,
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
const lv_font_t ui_font_tahoma = {
#else
lv_font_t ui_font_tahoma = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 12,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_TAHOMA*/

