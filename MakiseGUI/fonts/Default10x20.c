/*
 * Font name:   Default10x20
 * Font size:   20
 * Font height: 20
 */

#ifndef Default10x20_H
#define Default10x20_H
#include "makise_text.h"
#include "fonts.h"

const uint8_t Default10x20_table [] =
{
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x30, 0xc0, 0x00, 0x03, 0x0c, 0x30, 0xc0, 0x00, 0x03, 0x0c, 0x30, 0x00, 0x00, 0x03, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //!
    0x00, 0x00, 0x00, 0x00, 0x33, 0xcc, 0x30, 0x83, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //"
    0x00, 0x00, 0x00, 0x00, 0x00, 0xb0, 0xc1, 0x06, 0x1b, 0xff, 0xd8, 0x60, 0x83, 0x8d, 0x7f, 0x6c, 0xb0, 0xc1, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //#
    0x00, 0x00, 0x00, 0x00, 0x0c, 0xfc, 0xd8, 0x66, 0x83, 0x0d, 0x36, 0xf0, 0x03, 0x1b, 0x6c, 0xb0, 0xd9, 0xc6, 0x0f, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //$
    0x00, 0x00, 0x00, 0x00, 0x00, 0x9c, 0xd9, 0x66, 0x0f, 0x37, 0x60, 0x80, 0x01, 0x03, 0x0c, 0xd8, 0xe1, 0xcd, 0x36, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //%
    0x00, 0x00, 0x00, 0x00, 0x0e, 0x6c, 0xb0, 0xc1, 0x06, 0x0f, 0x18, 0x70, 0x60, 0x83, 0xd9, 0xc6, 0x19, 0xe3, 0x1e, 0xcf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //&
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x30, 0xc0, 0x00, 0x03, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //'
    0x00, 0x00, 0x00, 0x00, 0x30, 0x60, 0xc0, 0x00, 0x03, 0x06, 0x18, 0x60, 0x80, 0x01, 0x06, 0x30, 0xc0, 0x00, 0x06, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //(
    0x00, 0x00, 0x00, 0x00, 0x03, 0x18, 0xc0, 0x00, 0x03, 0x18, 0x60, 0x80, 0x01, 0x06, 0x18, 0x30, 0xc0, 0x80, 0x01, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //)
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x0c, 0x33, 0x78, 0xf8, 0x87, 0x07, 0x33, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //*
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0c, 0x30, 0xf8, 0x07, 0x03, 0x0c, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //+
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1c, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //-
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x01, 0x07, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //.
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x06, 0x0c, 0x30, 0x60, 0x80, 0x01, 0x03, 0x0c, 0x18, 0x60, 0xc0, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, ///
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x78, 0x30, 0xc3, 0x8c, 0x61, 0x86, 0x19, 0x66, 0x98, 0x61, 0xcc, 0x30, 0x83, 0x07, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //0
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x38, 0xf0, 0x60, 0x03, 0x0c, 0x30, 0xc0, 0x00, 0x03, 0x0c, 0x30, 0xc0, 0x00, 0x83, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //1
    0x00, 0x00, 0x00, 0x00, 0x1e, 0xcc, 0x18, 0x66, 0x18, 0x60, 0x80, 0x01, 0x03, 0x07, 0x06, 0x0c, 0x18, 0x60, 0x80, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //2
    0x00, 0x00, 0x00, 0x00, 0x1e, 0xcc, 0x18, 0x66, 0x18, 0x60, 0xc0, 0xc0, 0x01, 0x0c, 0x60, 0x86, 0x19, 0xc6, 0x0c, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //3
    0x00, 0x00, 0x00, 0x00, 0x20, 0xc0, 0x80, 0x03, 0x0f, 0x36, 0xcc, 0x18, 0x63, 0x8c, 0x7f, 0xc0, 0x00, 0x03, 0x0c, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //4
    0x00, 0x00, 0x00, 0x80, 0x7f, 0x06, 0x18, 0x60, 0x80, 0x01, 0x76, 0x38, 0x03, 0x18, 0x60, 0x80, 0x19, 0xc6, 0x0c, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //5
    0x00, 0x00, 0x00, 0x00, 0x1e, 0xcc, 0x18, 0x62, 0x80, 0x01, 0x76, 0x38, 0x63, 0x98, 0x61, 0x86, 0x19, 0xc6, 0x0c, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //6
    0x00, 0x00, 0x00, 0x80, 0x7f, 0x80, 0x01, 0x06, 0x0c, 0x30, 0x60, 0x80, 0x01, 0x03, 0x0c, 0x18, 0x60, 0xc0, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //7
    0x00, 0x00, 0x00, 0x00, 0x1e, 0xcc, 0x18, 0x66, 0x98, 0x61, 0xcc, 0xe0, 0xc1, 0x8c, 0x61, 0x86, 0x19, 0xc6, 0x0c, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //8
    0x00, 0x00, 0x00, 0x00, 0x1e, 0xcc, 0x18, 0x66, 0x98, 0x61, 0x86, 0x31, 0x87, 0x1b, 0x60, 0x80, 0x11, 0xc6, 0x0c, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //9
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0xc0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //:
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0xc0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1c, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //;
    0x00, 0x00, 0x00, 0x00, 0x20, 0xc0, 0x80, 0x01, 0x03, 0x06, 0x0c, 0x18, 0xc0, 0x00, 0x06, 0x30, 0x80, 0x01, 0x0c, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //<
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //=
    0x00, 0x00, 0x00, 0x00, 0x01, 0x0c, 0x60, 0x00, 0x03, 0x18, 0xc0, 0x00, 0x06, 0x0c, 0x18, 0x30, 0x60, 0xc0, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //>
    0x00, 0x00, 0x00, 0x00, 0x1e, 0xcc, 0x18, 0x66, 0x98, 0x61, 0xc0, 0x80, 0x01, 0x03, 0x0c, 0x30, 0x00, 0x00, 0x03, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //?
    0x00, 0x00, 0x00, 0x00, 0x1e, 0xcc, 0x18, 0x66, 0x9e, 0x7d, 0xb6, 0xd9, 0x66, 0x9b, 0x3d, 0x66, 0x18, 0xc0, 0x18, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //@
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x78, 0x30, 0xc3, 0x8c, 0x61, 0x86, 0x19, 0xe6, 0x9f, 0x61, 0x86, 0x19, 0x66, 0x98, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //A
    0x00, 0x00, 0x00, 0x80, 0x0f, 0x66, 0x18, 0x63, 0x8c, 0x31, 0x66, 0xf8, 0x61, 0x8c, 0x61, 0x86, 0x19, 0x66, 0x8c, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //B
    0x00, 0x00, 0x00, 0x00, 0x1e, 0xcc, 0x18, 0x66, 0x80, 0x01, 0x06, 0x18, 0x60, 0x80, 0x01, 0x06, 0x18, 0xc6, 0x0c, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //C
    0x00, 0x00, 0x00, 0x80, 0x1f, 0xc6, 0x18, 0x66, 0x98, 0x61, 0x86, 0x19, 0x66, 0x98, 0x61, 0x86, 0x19, 0x66, 0x8c, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //D
    0x00, 0x00, 0x00, 0x80, 0x7f, 0x06, 0x18, 0x60, 0x80, 0x01, 0x06, 0xf8, 0x61, 0x80, 0x01, 0x06, 0x18, 0x60, 0x80, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //E
    0x00, 0x00, 0x00, 0x80, 0x7f, 0x06, 0x18, 0x60, 0x80, 0x01, 0x06, 0xf8, 0x61, 0x80, 0x01, 0x06, 0x18, 0x60, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //F
    0x00, 0x00, 0x00, 0x00, 0x1e, 0xcc, 0x18, 0x66, 0x80, 0x01, 0x06, 0x98, 0x67, 0x98, 0x61, 0x86, 0x19, 0xc6, 0x1c, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //G
    0x00, 0x00, 0x00, 0x80, 0x61, 0x86, 0x19, 0x66, 0x98, 0x61, 0x86, 0xf9, 0x67, 0x98, 0x61, 0x86, 0x19, 0x66, 0x98, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //H
    0x00, 0x00, 0x00, 0x80, 0x7f, 0x30, 0xc0, 0x00, 0x03, 0x0c, 0x30, 0xc0, 0x00, 0x03, 0x0c, 0x30, 0xc0, 0x00, 0x83, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //I
    0x00, 0x00, 0x00, 0x00, 0xfc, 0xc0, 0x00, 0x03, 0x0c, 0x30, 0xc0, 0x00, 0x03, 0x0c, 0x30, 0xc6, 0x18, 0xc3, 0x06, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //J
    0x00, 0x00, 0x00, 0x80, 0x61, 0x86, 0x19, 0x63, 0x8c, 0x19, 0x66, 0xf8, 0x60, 0x86, 0x19, 0xc6, 0x18, 0x63, 0x98, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //K
    0x00, 0x00, 0x00, 0x80, 0x01, 0x06, 0x18, 0x60, 0x80, 0x01, 0x06, 0x18, 0x60, 0x80, 0x01, 0x06, 0x18, 0x60, 0x80, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //L
    0x00, 0x00, 0x00, 0x80, 0x61, 0x86, 0x39, 0xe7, 0x9c, 0x7f, 0xb6, 0xd9, 0x66, 0x9b, 0x6d, 0x86, 0x19, 0x66, 0x98, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //M
    0x00, 0x00, 0x00, 0x80, 0x61, 0x8e, 0x39, 0xe6, 0x99, 0x67, 0xb6, 0xd9, 0x66, 0x9e, 0x79, 0xc6, 0x19, 0x67, 0x98, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //N
    0x00, 0x00, 0x00, 0x00, 0x1e, 0xcc, 0x18, 0x66, 0x98, 0x61, 0x86, 0x19, 0x66, 0x98, 0x61, 0x86, 0x19, 0xc6, 0x0c, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //O
    0x00, 0x00, 0x00, 0x80, 0x1f, 0xc6, 0x18, 0x66, 0x98, 0x61, 0x86, 0x19, 0xe3, 0x87, 0x01, 0x06, 0x18, 0x60, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //P
    0x00, 0x00, 0x00, 0x00, 0x1e, 0xcc, 0x18, 0x66, 0x98, 0x61, 0x86, 0x19, 0x66, 0x98, 0x61, 0xb6, 0x99, 0xc7, 0x0c, 0x3e, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Q
    0x00, 0x00, 0x00, 0x80, 0x1f, 0xc6, 0x18, 0x66, 0x98, 0x61, 0x86, 0x19, 0xe3, 0x87, 0x19, 0xc6, 0x18, 0x63, 0x98, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //R
    0x00, 0x00, 0x00, 0x00, 0x1e, 0xcc, 0x18, 0x66, 0x80, 0x01, 0x0c, 0xe0, 0x01, 0x0c, 0x60, 0x80, 0x19, 0xc6, 0x0c, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //S
    0x00, 0x00, 0x00, 0x80, 0x7f, 0x30, 0xc0, 0x00, 0x03, 0x0c, 0x30, 0xc0, 0x00, 0x03, 0x0c, 0x30, 0xc0, 0x00, 0x03, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //T
    0x00, 0x00, 0x00, 0x80, 0x61, 0x86, 0x19, 0x66, 0x98, 0x61, 0x86, 0x19, 0x66, 0x98, 0x61, 0x86, 0x19, 0xc6, 0x0c, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //U
    0x00, 0x00, 0x00, 0x80, 0x61, 0x86, 0x19, 0x66, 0x18, 0x33, 0xcc, 0x30, 0x83, 0x07, 0x1e, 0x78, 0xc0, 0x00, 0x03, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //V
    0x00, 0x00, 0x00, 0x80, 0x61, 0x86, 0x19, 0x66, 0x98, 0x61, 0xb6, 0xd9, 0x66, 0x9b, 0x6d, 0xce, 0x39, 0x67, 0x98, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //W
    0x00, 0x00, 0x00, 0x80, 0x61, 0x86, 0x31, 0xc3, 0x0c, 0x1e, 0x78, 0xc0, 0x80, 0x07, 0x1e, 0xcc, 0x30, 0x63, 0x98, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //X
    0x00, 0x00, 0x00, 0x80, 0x61, 0x86, 0x31, 0xc3, 0x0c, 0x1e, 0x78, 0xc0, 0x00, 0x03, 0x0c, 0x30, 0xc0, 0x00, 0x03, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Y
    0x00, 0x00, 0x00, 0x80, 0x7f, 0x80, 0x01, 0x06, 0x0c, 0x18, 0x60, 0xc0, 0x80, 0x01, 0x06, 0x0c, 0x18, 0x60, 0x80, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Z
    0x00, 0x00, 0x00, 0x00, 0x3f, 0x0c, 0x30, 0xc0, 0x00, 0x03, 0x0c, 0x30, 0xc0, 0x00, 0x03, 0x0c, 0x30, 0xc0, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //[
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x30, 0x80, 0x01, 0x06, 0x30, 0xc0, 0x00, 0x06, 0x18, 0xc0, 0x00, 0x03, 0x18, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x03, 0x0c, 0x30, 0xc0, 0x00, 0x03, 0x0c, 0x30, 0xc0, 0x00, 0x03, 0x0c, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //]
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x78, 0x30, 0x63, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //^
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //_
    0x00, 0x00, 0x00, 0x00, 0x06, 0x30, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //`
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x30, 0x06, 0x18, 0x7f, 0x86, 0x19, 0x66, 0x18, 0x5f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //a
    0x00, 0x00, 0x00, 0x80, 0x01, 0x06, 0x18, 0x60, 0x80, 0x01, 0x76, 0x38, 0x63, 0x98, 0x61, 0x86, 0x19, 0xe6, 0x8c, 0x1d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //b
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x30, 0x66, 0x80, 0x01, 0x06, 0x18, 0xc0, 0x18, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //c
    0x00, 0x00, 0x00, 0x00, 0x60, 0x80, 0x01, 0x06, 0x18, 0x60, 0xb8, 0x31, 0x67, 0x98, 0x61, 0x86, 0x19, 0xc6, 0x1c, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //d
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x30, 0x63, 0x98, 0x7f, 0x06, 0x18, 0xc0, 0x18, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //e
    0x00, 0x00, 0x00, 0x00, 0x3c, 0x98, 0x61, 0x86, 0x01, 0x06, 0x7e, 0x60, 0x80, 0x01, 0x06, 0x18, 0x60, 0x80, 0x01, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //f
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x19, 0x67, 0x8c, 0x31, 0xc6, 0xf0, 0x61, 0x00, 0x3f, 0x86, 0x19, 0x66, 0x18, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //g
    0x00, 0x00, 0x00, 0x80, 0x01, 0x06, 0x18, 0x60, 0x80, 0x01, 0x76, 0x38, 0x63, 0x98, 0x61, 0x86, 0x19, 0x66, 0x98, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //h
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x03, 0x00, 0x3c, 0xc0, 0x00, 0x03, 0x0c, 0x30, 0xc0, 0x00, 0x83, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //i
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x18, 0x00, 0xe0, 0x01, 0x06, 0x18, 0x60, 0x80, 0x01, 0x06, 0x18, 0x60, 0x8c, 0x31, 0xc6, 0x18, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //j
    0x00, 0x00, 0x00, 0x80, 0x01, 0x06, 0x18, 0x60, 0x80, 0x01, 0xc6, 0x98, 0x61, 0x83, 0x07, 0x3e, 0x98, 0x61, 0x8c, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //k
    0x00, 0x00, 0x00, 0x00, 0x0f, 0x30, 0xc0, 0x00, 0x03, 0x0c, 0x30, 0xc0, 0x00, 0x03, 0x0c, 0x30, 0xc0, 0x00, 0x83, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //l
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xda, 0xf8, 0x67, 0x9b, 0x6d, 0xb6, 0xd9, 0x66, 0x9b, 0x6d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //m
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0x38, 0x63, 0x98, 0x61, 0x86, 0x19, 0x66, 0x98, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //n
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x30, 0x63, 0x98, 0x61, 0x86, 0x19, 0xc6, 0x0c, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //o
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0x38, 0x63, 0x98, 0x61, 0x86, 0x19, 0xe6, 0x8c, 0x1d, 0x06, 0x18, 0x60, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //p
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 0x31, 0x67, 0x98, 0x61, 0x86, 0x19, 0xc6, 0x1c, 0x6e, 0x80, 0x01, 0x06, 0x18, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //q
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf6, 0x70, 0xc6, 0x00, 0x03, 0x0c, 0x30, 0xc0, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //r
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x18, 0x66, 0x00, 0x3f, 0x80, 0x01, 0x66, 0x18, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //s
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x80, 0x01, 0x06, 0x7e, 0x60, 0x80, 0x01, 0x06, 0x18, 0x60, 0x80, 0x19, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //t
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x19, 0x66, 0x98, 0x61, 0x86, 0x19, 0xc6, 0x1c, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //u
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x19, 0xc6, 0x0c, 0x33, 0x78, 0xe0, 0x01, 0x03, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //v
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x19, 0x66, 0x98, 0x6d, 0xb6, 0xd9, 0xe6, 0x1f, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //w
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x83, 0x07, 0x0c, 0x30, 0xe0, 0xc1, 0x8c, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //x
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x19, 0x66, 0x98, 0x61, 0x86, 0x19, 0xc6, 0x1c, 0x6e, 0x80, 0x19, 0xc6, 0x0c, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //y
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x01, 0x06, 0x0c, 0x18, 0x30, 0x60, 0xc0, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //z
    0x00, 0x00, 0x00, 0x00, 0x78, 0x30, 0xc0, 0x00, 0x03, 0x0c, 0x30, 0x78, 0x00, 0x03, 0x0c, 0x30, 0xc0, 0x00, 0x03, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //{
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x30, 0xc0, 0x00, 0x03, 0x0c, 0x30, 0xc0, 0x00, 0x03, 0x0c, 0x30, 0xc0, 0x00, 0x03, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //|
    0x00, 0x00, 0x00, 0x80, 0x07, 0x30, 0xc0, 0x00, 0x03, 0x0c, 0x30, 0x80, 0x07, 0x03, 0x0c, 0x30, 0xc0, 0x00, 0x83, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //}
    0x00, 0x00, 0x00, 0x00, 0x67, 0xb6, 0x99, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //~
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x78, 0x30, 0xc3, 0x8c, 0x61, 0x86, 0x19, 0xe6, 0x9f, 0x61, 0x86, 0x19, 0x66, 0x98, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //А
    0x00, 0x00, 0x00, 0x80, 0x3f, 0x06, 0x18, 0x60, 0x80, 0x01, 0x06, 0xf8, 0x61, 0x8c, 0x61, 0x86, 0x19, 0x66, 0x8c, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Б
    0x00, 0x00, 0x00, 0x80, 0x0f, 0x66, 0x18, 0x63, 0x8c, 0x31, 0x66, 0xf8, 0x61, 0x8c, 0x61, 0x86, 0x19, 0x66, 0x8c, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //В
    0x00, 0x00, 0x00, 0x80, 0x7f, 0x06, 0x18, 0x60, 0x80, 0x01, 0x06, 0x18, 0x60, 0x80, 0x01, 0x06, 0x18, 0x60, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Г
    0x00, 0x00, 0x00, 0x00, 0x3c, 0xd8, 0x30, 0xc3, 0x0c, 0x33, 0xcc, 0x30, 0xc3, 0x0c, 0x33, 0xcc, 0x30, 0xc3, 0x8c, 0x7f, 0x86, 0x19, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Д
    0x00, 0x00, 0x00, 0x80, 0x7f, 0x06, 0x18, 0x60, 0x80, 0x01, 0x06, 0xf8, 0x61, 0x80, 0x01, 0x06, 0x18, 0x60, 0x80, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Е
    0x00, 0x00, 0x00, 0x80, 0x6d, 0xb6, 0xd9, 0x66, 0x9b, 0x6d, 0xfc, 0xe0, 0xc1, 0x8f, 0x6d, 0xb6, 0xd9, 0x66, 0x9b, 0x6d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Ж
    0x00, 0x00, 0x00, 0x00, 0x1e, 0xcc, 0x18, 0x66, 0x18, 0x60, 0xc0, 0xc0, 0x01, 0x0c, 0x60, 0x86, 0x19, 0xc6, 0x0c, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //З
    0x00, 0x00, 0x00, 0x80, 0x61, 0x86, 0x19, 0x66, 0x98, 0x71, 0xe6, 0xd9, 0xe7, 0x9b, 0x67, 0x8e, 0x19, 0x66, 0x98, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //И
    0xcc, 0xe0, 0x01, 0x80, 0x61, 0x86, 0x19, 0x66, 0x98, 0x71, 0xe6, 0xd9, 0xe7, 0x9b, 0x67, 0x8e, 0x19, 0x66, 0x98, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Й
    0x00, 0x00, 0x00, 0x80, 0x61, 0x86, 0x19, 0x63, 0x8c, 0x19, 0x66, 0xf8, 0x60, 0x86, 0x19, 0xc6, 0x18, 0x63, 0x98, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //К
    0x00, 0x00, 0x00, 0x00, 0x7c, 0x98, 0x31, 0xc6, 0x18, 0x63, 0x8c, 0x31, 0xc6, 0x18, 0x63, 0x8c, 0x31, 0xe6, 0x98, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Л
    0x00, 0x00, 0x00, 0x80, 0x61, 0x86, 0x39, 0xe7, 0x9c, 0x7f, 0xb6, 0xd9, 0x66, 0x9b, 0x6d, 0x86, 0x19, 0x66, 0x98, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //М
    0x00, 0x00, 0x00, 0x80, 0x61, 0x86, 0x19, 0x66, 0x98, 0x61, 0x86, 0xf9, 0x67, 0x98, 0x61, 0x86, 0x19, 0x66, 0x98, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Н
    0x00, 0x00, 0x00, 0x00, 0x1e, 0xcc, 0x18, 0x66, 0x98, 0x61, 0x86, 0x19, 0x66, 0x98, 0x61, 0x86, 0x19, 0xc6, 0x0c, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //О
    0x00, 0x00, 0x00, 0x80, 0x7f, 0x86, 0x19, 0x66, 0x98, 0x61, 0x86, 0x19, 0x66, 0x98, 0x61, 0x86, 0x19, 0x66, 0x98, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //П
    0x00, 0x00, 0x00, 0x80, 0x1f, 0xc6, 0x18, 0x66, 0x98, 0x61, 0x86, 0x19, 0xe3, 0x87, 0x01, 0x06, 0x18, 0x60, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Р
    0x00, 0x00, 0x00, 0x00, 0x1e, 0xcc, 0x18, 0x66, 0x80, 0x01, 0x06, 0x18, 0x60, 0x80, 0x01, 0x06, 0x18, 0xc6, 0x0c, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //С
    0x00, 0x00, 0x00, 0x80, 0x7f, 0x30, 0xc0, 0x00, 0x03, 0x0c, 0x30, 0xc0, 0x00, 0x03, 0x0c, 0x30, 0xc0, 0x00, 0x03, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Т
    0x00, 0x00, 0x00, 0x80, 0x61, 0x86, 0x19, 0x66, 0x98, 0x61, 0x86, 0xf1, 0x07, 0x18, 0x60, 0x80, 0x01, 0x66, 0x18, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //У
    0x00, 0x00, 0x00, 0x00, 0x0c, 0xfc, 0xd8, 0x66, 0x9b, 0x6d, 0xb6, 0xd9, 0x66, 0x9b, 0x6d, 0xb6, 0xf1, 0x03, 0x03, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Ф
    0x00, 0x00, 0x00, 0x80, 0x61, 0x86, 0x31, 0xc3, 0x0c, 0x1e, 0x78, 0xc0, 0x80, 0x07, 0x1e, 0xcc, 0x30, 0x63, 0x98, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Х
    0x00, 0x00, 0x00, 0x80, 0x61, 0x86, 0x19, 0x66, 0x98, 0x61, 0x86, 0x19, 0x66, 0x98, 0x61, 0x86, 0x19, 0x66, 0x98, 0xff, 0x00, 0x03, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Ц
    0x00, 0x00, 0x00, 0x80, 0x61, 0x86, 0x19, 0x66, 0x98, 0x61, 0x86, 0x19, 0xc6, 0x1f, 0x60, 0x80, 0x01, 0x06, 0x18, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Ч
    0x00, 0x00, 0x00, 0x80, 0x6d, 0xb6, 0xd9, 0x66, 0x9b, 0x6d, 0xb6, 0xd9, 0x66, 0x9b, 0x6d, 0xb6, 0xd9, 0x66, 0x9b, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Ш
    0x00, 0x00, 0x00, 0x80, 0x6d, 0xb6, 0xd9, 0x66, 0x9b, 0x6d, 0xb6, 0xd9, 0x66, 0x9b, 0x6d, 0xb6, 0xd9, 0x66, 0x9b, 0xff, 0x00, 0x03, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Щ
    0x00, 0x00, 0x00, 0x80, 0x07, 0x1a, 0x60, 0x80, 0x01, 0x06, 0xf8, 0x60, 0x86, 0x19, 0x66, 0x98, 0x61, 0x86, 0x19, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Ъ
    0x00, 0x00, 0x00, 0x80, 0x61, 0x86, 0x19, 0x66, 0x98, 0x61, 0x9e, 0xd9, 0x66, 0x9b, 0x6d, 0xb6, 0xd9, 0x66, 0x9b, 0x67, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Ы
    0x00, 0x00, 0x00, 0x80, 0x01, 0x06, 0x18, 0x60, 0x80, 0x01, 0x7e, 0x18, 0x63, 0x98, 0x61, 0x86, 0x19, 0x66, 0x8c, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Ь
    0x00, 0x00, 0x00, 0x00, 0x1e, 0xcc, 0x18, 0x06, 0x18, 0x60, 0x80, 0xf1, 0x07, 0x18, 0x60, 0x80, 0x19, 0xc6, 0x0c, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Э
    0x00, 0x00, 0x00, 0x80, 0x39, 0xb6, 0xd9, 0x66, 0x9b, 0x6d, 0xb6, 0xf9, 0x66, 0x9b, 0x6d, 0xb6, 0xd9, 0x66, 0x9b, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Ю
    0x00, 0x00, 0x00, 0x00, 0x7e, 0x8c, 0x19, 0x66, 0x98, 0x61, 0x86, 0x31, 0x86, 0x1f, 0x66, 0x8c, 0x31, 0x66, 0x98, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Я
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x30, 0x06, 0x18, 0x7f, 0x86, 0x19, 0x66, 0x18, 0x5f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //а
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xf0, 0x61, 0x80, 0x01, 0x7c, 0x38, 0x63, 0x98, 0x61, 0x86, 0x19, 0xc6, 0x0c, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //б
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x18, 0x63, 0x8c, 0x3f, 0x86, 0x19, 0x66, 0x98, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //в
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x19, 0x60, 0x80, 0x01, 0x06, 0x18, 0x60, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //г
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x60, 0xc3, 0x0c, 0x33, 0xcc, 0x30, 0xc3, 0x8c, 0x7f, 0x86, 0x19, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //д
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x30, 0x63, 0x98, 0x7f, 0x06, 0x18, 0xc0, 0x18, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //е
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb6, 0xd9, 0x66, 0x1b, 0x3f, 0xfc, 0xd8, 0x66, 0x9b, 0x6d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //ж
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x18, 0x06, 0x18, 0x3e, 0xc0, 0x00, 0x66, 0x18, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //з
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x19, 0x66, 0x9c, 0x79, 0xb6, 0x79, 0xe6, 0x98, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //и
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x83, 0x07, 0x00, 0x86, 0x19, 0x66, 0x9c, 0x79, 0xb6, 0x79, 0xe6, 0x98, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //й
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x19, 0x63, 0x86, 0x0f, 0x3e, 0x98, 0x61, 0x8c, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //к
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x61, 0xc6, 0x18, 0x63, 0x8c, 0x31, 0xc6, 0x98, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //л
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x39, 0xe7, 0x9f, 0x6d, 0xb6, 0xd9, 0x66, 0x98, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //м
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x19, 0x66, 0x98, 0x7f, 0x86, 0x19, 0x66, 0x98, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //н
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x30, 0x63, 0x98, 0x61, 0x86, 0x19, 0xc6, 0x0c, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //о
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x19, 0x66, 0x98, 0x61, 0x86, 0x19, 0x66, 0x98, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //п
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0x38, 0x63, 0x98, 0x61, 0x86, 0x19, 0xe6, 0x8c, 0x1d, 0x06, 0x18, 0x60, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //р
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x30, 0x66, 0x80, 0x01, 0x06, 0x18, 0xc0, 0x18, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //с
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xc1, 0x00, 0x03, 0x0c, 0x30, 0xc0, 0x00, 0x03, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //т
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x19, 0x66, 0x98, 0x61, 0x86, 0x19, 0xc6, 0x1c, 0x6e, 0x80, 0x19, 0xc6, 0x0c, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //у
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0c, 0xfc, 0xd8, 0x66, 0x9b, 0x6d, 0xb6, 0xd9, 0x66, 0x1b, 0x3f, 0x30, 0xc0, 0x00, 0x03, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //ф
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x83, 0x07, 0x0c, 0x30, 0xe0, 0xc1, 0x8c, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //х
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc6, 0x18, 0x63, 0x8c, 0x31, 0xc6, 0x18, 0x63, 0x8c, 0x7f, 0x80, 0x01, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //ц
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x19, 0x66, 0x98, 0x61, 0xfc, 0x01, 0x06, 0x18, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //ч
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb6, 0xd9, 0x66, 0x9b, 0x6d, 0xb6, 0xd9, 0x66, 0x9b, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //ш
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb6, 0xd9, 0x66, 0x9b, 0x6d, 0xb6, 0xd9, 0x66, 0x9b, 0xff, 0x00, 0x03, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //щ
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x38, 0xe0, 0x0f, 0x63, 0x8c, 0x31, 0xc6, 0x18, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //ъ
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x19, 0xe6, 0x99, 0x6d, 0xb6, 0xd9, 0x66, 0x9b, 0x67, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //ы
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x18, 0x60, 0x80, 0x3f, 0x86, 0x19, 0x66, 0x98, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //ь
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x18, 0x06, 0x18, 0x60, 0xf0, 0x01, 0x66, 0x18, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //э
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe6, 0xd8, 0x66, 0x9b, 0x6f, 0xb6, 0xd9, 0x66, 0x9b, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //ю
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x19, 0x66, 0x98, 0x61, 0xfc, 0x61, 0xc6, 0x98, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //я

};

#if 10 == 0
const uint8_t Default10x20_width [] =
{
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10
};
#endif

const uint16_t Default10x20_offset [] =
{
    0, 33, 66, 99, 132, 165, 198, 231, 264, 297, 330, 363, 396, 429, 462, 495, 528, 561, 594, 627, 660, 693, 726, 759, 792, 825, 858, 891, 924, 957, 990, 1023, 1056, 1089, 1122, 1155, 1188, 1221, 1254, 1287, 1320, 1353, 1386, 1419, 1452, 1485, 1518, 1551, 1584, 1617, 1650, 1683, 1716, 1749, 1782, 1815, 1848, 1881, 1914, 1947, 1980, 2013, 2046, 2079, 2112, 2145, 2178, 2211, 2244, 2277, 2310, 2343, 2376, 2409, 2442, 2475, 2508, 2541, 2574, 2607, 2640, 2673, 2706, 2739, 2772, 2805, 2838, 2871, 2904, 2937, 2970, 3003, 3036, 3069, 3102, 3135, 3168, 3201, 3234, 3267, 3300, 3333, 3366, 3399, 3432, 3465, 3498, 3531, 3564, 3597, 3630, 3663, 3696, 3729, 3762, 3795, 3828, 3861, 3894, 3927, 3960, 3993, 4026, 4059, 4092, 4125, 4158, 4191, 4224, 4257, 4290, 4323, 4356, 4389, 4422, 4455, 4488, 4521, 4554, 4587, 4620, 4653, 4686, 4719, 4752, 4785, 4818, 4851, 4884, 4917, 4950, 4983, 5016, 5049, 5082, 5115, 5148, 5181, 5214
};

#if MAKISE_UNICODE
const uint16_t Default10x20_unicode [] =
{
    1040, 1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1054, 1055, 1056, 1057, 1058, 1059, 1060, 1061, 1062, 1063, 1064, 1065, 1066, 1067, 1068, 1069, 1070, 1071, 1072, 1073, 1074, 1075, 1076, 1077, 1078, 1079, 1080, 1081, 1082, 1083, 1084, 1085, 1086, 1087, 1088, 1089, 1090, 1091, 1092, 1093, 1094, 1095, 1096, 1097, 1098, 1099, 1100, 1101, 1102, 1103
};
#endif

const MakiseFont F_Default10x20 = {
    Default10x20_table,
    10,
    20,
#if 10 == 0
    Default10x20_width,
#else
    0,
#endif
    Default10x20_offset,
#if MAKISE_UNICODE
    Default10x20_unicode,
#endif
    32,
    95,
#if MAKISE_UNICODE
    159,
#endif
    0
};

#endif
