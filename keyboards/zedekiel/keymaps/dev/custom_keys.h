#include "keymap_german.h"
#include QMK_KEYBOARD_H
#include "constants.h"

enum custom_keycodes {
  LOWER_AND_RALT
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LOWER_AND_RALT:
      if (record->event.pressed) {
        layer_on(_LOWER);
        register_code(KC_RALT);
      }
      break;
  }

  return true;
}

void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LOWER_AND_RALT:
      if (!record->event.pressed) {
        unregister_code(KC_RALT);
        layer_off(_LOWER);
      }
      break;
  }
}
