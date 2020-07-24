#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x03EB
#define PRODUCT_ID      0x2FF4
#define DEVICE_VER      0x0003
#define MANUFACTURER    UAC
#define PRODUCT         ATm32U4DFU
#define DESCRIPTION     Zedekiel Keyboard

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

// ROWS: Top to bottom, COLS: Left to right
#define MATRIX_ROW_PINS { F0, F1, F4, F5, F6 }
#define MATRIX_COL_PINS { F7, E6, C7, C6, D7, D6, D5, D4, D3, D2, B7, B6, B5, B0 }
#define UNUSED_PINS

/* ### Debugging  Pins ### */
#define MISO_PIN  B3
#define MOSI_PIN  B2
#define SCLK_PIN  B1
#define SDA_PIN   D1
#define SCL_PIN   D0
#define ADC11_PIN B4


/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW // DONT FORGET to change this to COL2ROW on v0.2

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
