#include "keymap_german.h"
#include "quantum.h"
#include QMK_KEYBOARD_H
#include "constants.h"

setPinOutput(MISO_PIN);

enum custom_keycodes {
  LOWER_AND_RALT,
  SPECIAL
};

void gpioTest(bool isHigh) {
  if (isHigh) {
    // writePinHigh(MISO_PIN);
  } else {
    // writePinLow(MISO_PIN);
  }
}

// Called on "key down" event
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // Switches to the _LOWER layer and simulates Right Alt keypress
    case LOWER_AND_RALT:
      if (record->event.pressed) {
        layer_on(_LOWER);
        register_code(KC_RALT);
      }
      break;

    // Disables Right Alt keypress to prevent Arrow+RightAlt combo
    case KC_LEFT:
    case KC_RIGHT:
    case KC_UP:
    case KC_DOWN:
      unregister_code(KC_RALT);
      break;

    case SPECIAL:
      gpioTest(true);
      break;
  }

  return true;
}

// Called on "key up" event
void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // Disable right alt and layer shift
    case LOWER_AND_RALT:
      if (!record->event.pressed) {
        unregister_code(KC_RALT);
        layer_off(_LOWER);
      }
      break;

    case SPECIAL:
      gpioTest(false);
      break;
  }
}