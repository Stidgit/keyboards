#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_LBRC, KC_RBRC, KC_A,    KC_S,    KC_D,
        TG(1)
    ),
    [1] = LAYOUT(
        KC_PIPE, KC_TILD, KC_CIRC, KC_4,    _______,
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,
        _______, KC_Z,    KC_X,    KC_BSLS, KC_GRV,
        _______
    )
};

// Encoder script
bool encoder_update_user(uint8_t index, bool clockwise) {
  if (clockwise) { 
    tap_code(KC_UP);
  } else { 
    tap_code(KC_DOWN);
  }
  return true;
}
