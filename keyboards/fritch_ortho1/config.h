#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCB10
#define PRODUCT_ID      0x1257
#define DEVICE_VER      0x0100
#define MANUFACTURER    Keebio
#define PRODUCT         Quefrency Rev. 1

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 15

// wiring of each half
#define MATRIX_ROW_PINS 				{ F4, D4, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS_RIGHT 	{ F4, D4, D7, E6, B4, B5 }
#define MATRIX_COL_PINS_RIGHT 	{ F5, F6, F7, B1, B3, B2, B6, C6, D3 }
#define MATRIX_COL_PINS 				{ F5, F6, F7, B1, B3, B2, B6, C6, D3 }

// "Which split am I?" Setting
#define MASTER_RIGHT
//#define MASTER_LEFT
//#define SPLIT_HAND_PIN D2

#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D0

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
//#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED 
#define RGB_DI_PIN D3
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 16    // Number of LEDs
#define RGBLED_SPLIT { 8, 8 }
*/

// Set 65% column (option 1) and Macro (option 2) on by default
//#define VIA_EEPROM_LAYOUT_OPTIONS_DEFAULT 0x60

