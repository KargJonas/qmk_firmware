
#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap _DEF: Default Layer
    * ,---------------------------------------------------------------.
    * | Esc | ^ | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | ß | ´ | Del |
    * |---------------------------------------------------------------|
    * | Tab | Q | W | E | R | T | Z | U | I | O | P | Ü | + | Backspc |
    * |---------------------------------------------------------------|
    * | Caps | A | S | D | F | G | H | J | K | L | Ö | Ä | # |  Enter |
    * |---------------------------------------------------------------|
    * | Sft. | < | Y | x | C | V | B | N | M | , | . | - | Sft. | Alt |
    * |---------------------------------------------------------------|
    * | Ctrl | Alt | Super | Space  | Super | Lwe | Rse | Ctrl | Mode |
    * `---------------------------------------------------------------'
    */

    [_QWERTY] = LAYOUT(
      KC_ESC,   KC_GRV,  KC_1, KC_2,  KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,    KC_MINS, KC_EQL,  KC_DEL, \
      KC_TAB,   KC_Q,    KC_W,    KC_E,  KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC, \
      KC_CAPS,  KC_A,    KC_S,    KC_D,  KC_F, KC_G, KC_H, KC_J, KC_K, KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT,  \
      KC_LSFT,  KC_LABK, KC_Z,    KC_X,  KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_RALT, \
      KC_LCTL,  KC_LALT, KC_LGUI, KC_SPACE,    KC_RGUI,    LOWER,      RAISE,   KC_RCTL, F(1)
    ),

    /* Keymap LOWER: Lower Layer
    * ,---------------------------------------------------------------.
    * |     |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|     |
    * |---------------------------------------------------------------|
    * |     |   | UP|   |   |   |   |   |   |   |   |   |   |   Del   |
    * |---------------------------------------------------------------|
    * |      |LFT|DWN|RGT|   |   |LFT|DWN| UP|RGT|   |   |   |  Play  |
    * |---------------------------------------------------------------|
    * |      |   |   |   |   |   |   |   |   |   |   |   |      |     |
    * |---------------------------------------------------------------|
    * | Ctrl | Alt | Super | Space  | Super | Lwe | Rse | Ctrl |      |
    * `---------------------------------------------------------------'
    */
    [_LOWER] = LAYOUT(
        _______, _______, KC_F1,   KC_F2,   KC_F3,    KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, \
        _______, _______, KC_UP,   _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DEL,  \
        _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, _______, _______, _______, KC_MPLY, \
        _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        KC_LCTL, KC_LALT, KC_LGUI, KC_SPACE, KC_RGUI, LOWER,   RAISE,   KC_RCTL, _______
    ),

    /* Keymap RAISE: Upper Layer
    * ,---------------------------------------------------------------.
    * |     |   |   |   |   |   |   |   |   |   |   |   |   |   |     |
    * |---------------------------------------------------------------|
    * |     |   |   |   |   |   |   |   |   |   |   |   |   |         |
    * |---------------------------------------------------------------|
    * |      |   |   |   |   |   |   |   |   |   |   |   |   |        |
    * |---------------------------------------------------------------|
    * |      |   |   |   |   |   |   |   |   |   |   |   |      |     |
    * |---------------------------------------------------------------|
    * |      |     |       |        |       |     |     |      |      |
    * `---------------------------------------------------------------'
    */
    [_RAISE] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______
    )
};

// int RGB_current_mode;

// void persistent_default_layer_set(uint16_t default_layer) {
//   eeconfig_update_default_layer(default_layer);
//   default_layer_set(default_layer);
// }

// // Setting ADJUST layer RGB back to default
// void update_tri_layer_RGB(uint8_t layer1, uint8_t layer2, uint8_t layer3) {
//   if (IS_LAYER_ON(layer1) && IS_LAYER_ON(layer2)) {
//     layer_on(layer3);
//   } else {
//     layer_off(layer3);
//   }
// }

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   if (record->event.pressed) {
// #ifdef SSD1306OLED
//     set_keylog(keycode, record);
// #endif
//     // set_timelog();
//   }

//   switch (keycode) {
//     case QWERTY:
//       if (record->event.pressed) {
//         persistent_default_layer_set(1UL<<_QWERTY);
//       }
//       return false;
//     case LOWER:
//       if (record->event.pressed) {
//         layer_on(_LOWER);
//         update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
//       } else {
//         layer_off(_LOWER);
//         update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
//       }
//       return false;
//     case RAISE:
//       if (record->event.pressed) {
//         layer_on(_RAISE);
//         update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
//       } else {
//         layer_off(_RAISE);
//         update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
//       }
//       return false;
//   }
//   return true;
// }
