#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6066
#define DEVICE_VER      0x0001
#define MANUFACTURER    Jonas Karg
#define PRODUCT         Zedekiel
#define DESCRIPTION     Zedekiel Keyboard

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

// ROWS: Top to bottom, COLS: Left to right

#define MATRIX_ROW_PINS { F7, F6, F5, F4, D5}
#define MATRIX_COL_PINS { F1, F0, E6, C7, C6, B0, D4, B1, B7, B5, B4, D7, D6, B3}
#define UNUSED_PINS

/* ### Debugging  Pins ### */
// #define MISO_PIN  xxxxxxxx
// #define MOSI_PIN  xxxxxxxx
// #define SCLK_PIN  xxxxxxxx
// #define SDA_PIN   xxxxxxxx
// #define SCL_PIN   xxxxxxxx
// #define ADC11_PIN xxxxxxxx

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

#endif
