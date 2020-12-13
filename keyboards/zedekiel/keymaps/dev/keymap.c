#include "keymap_german.h"
#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#include "custom_keys.h"

// KC_NO alias for better readability
// #define _______ KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap _DEF: Default Layer
    * ,---------------------------------------------------------------.
    * | Esc | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | ß | ´ | ^ | Del |
    * |---------------------------------------------------------------|
    * | Tab | Q | W | E | R | T | Z | U | I | O | P | Ü | + | Backspc |
    * |---------------------------------------------------------------|
    * | Caps | A | S | D | F | G | H | J | K | L | Ö | Ä | # |  Enter |
    * |---------------------------------------------------------------|
    * | Sft. | < | Y | x | C | V | B | N | M | , | . | - | Sft. | Mod |
    * |---------------------------------------------------------------|
    * | Ctrl | Lwe | Super |  Space  | Lwe | Super | Rse | Ctrl | Alt |
    * `---------------------------------------------------------------'
    */

    [_QWERTY] = LAYOUT(
      KC_ESC,   DE_1,  DE_2, DE_3, DE_4, DE_5, DE_6, DE_7, DE_8, DE_9, DE_0,    DE_SS,   DE_ACUT, DE_CIRC, KC_DEL, \
      KC_TAB,   DE_Q,    DE_W,    DE_E,  DE_R, DE_T, DE_Z, DE_U, DE_I, DE_O,    DE_P,    DE_UDIA, DE_PLUS, KC_BSPC, \
      KC_CAPS,  DE_A,    DE_S,    DE_D,  DE_F, DE_G, DE_H, DE_J, DE_K, DE_L,    DE_ODIA, DE_ADIA, DE_HASH, KC_ENT,  \
      KC_LSFT,  DE_LABK, DE_Y,    DE_X,  DE_C, DE_V, DE_B, DE_N, DE_M, DE_COMM, DE_DOT,  DE_MINS, KC_RSFT, SPECIAL, \
      KC_LCTL, LOWER_AND_RALT, KC_LGUI,  KC_SPACE,  LOWER_AND_RALT, KC_RGUI,    MO(_RAISE), KC_RCTL, KC_LALT
    ),

    /* Keymap LOWER: Lower Layer
    * ,---------------------------------------------------------------.
    * |     | ¹ | ² | ³ | ¼ | ½ | ¬ | { | [ | ] | } | \ | ¸ | ′ |     |
    * |---------------------------------------------------------------|
    * |     |   | UP|   |   |   |   |   |   |   |   |   |   |   Del   |
    * |---------------------------------------------------------------|
    * |      |LFT|DWN|RGT|   |   |   |LFT|DWN| UP|RGT|   |   |  Play  |
    * |---------------------------------------------------------------|
    * |      |   |   |   |   |   |   |   |   |   |   |   |      |     |
    * |---------------------------------------------------------------|
    * |      |     |       |        |     |       |     |      |      |
    * `---------------------------------------------------------------'
    */
    [_LOWER] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, \
        _______, _______, KC_UP,   _______,  _______, _______, _______, KC_PGUP, KC_PGDN, KC_INS, _______, _______, _______, KC_DEL,  \
        _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______, _______, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, _______, _______, KC_MPLY, \
        _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    /* Keymap RAISE: Upper Layer
    * ,---------------------------------------------------------------.
    * | RST | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|   |     |
    * |---------------------------------------------------------------|
    * |     |   |   |   |   |   |   |   |   |   |   |EEP|DBG|         |
    * |---------------------------------------------------------------|
    * |      |   |   |   |   |   |   |   |   |   |   |   |   |        |
    * |---------------------------------------------------------------|
    * |      |   |   |   |   |   |   |   |   |   |   |   |      |     |
    * |---------------------------------------------------------------|
    * |      |     |       |        |       |     |     |      |      |
    * `---------------------------------------------------------------'
    */
    [_RAISE] = LAYOUT(
        RESET, KC_F1,   KC_F2,   KC_F3,    KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, EEPROM_RESET, DEBUG, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______
    )
};