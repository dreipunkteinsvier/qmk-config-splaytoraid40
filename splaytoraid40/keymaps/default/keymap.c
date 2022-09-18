#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _LOWER,
    _RAISE,
    _ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_splaytoraid40(
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,               KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,
    KC_LCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,               KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
              KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,               KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,
                                  KC_LSFT,  KC_ESC,   KC_ENT,             KC_SPC,   KC_DEL,    KC_RSFT
  ),
  
  [_LOWER] = LAYOUT_splaytoraid40(
    _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,  _______,  _______,  _______,
              _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,  _______,  _______,
                                  _______,  _______,  _______,            _______,  _______,  _______
  ),
  
  [_RAISE] = LAYOUT_splaytoraid40(
    _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,  _______,  _______,  _______,
              _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,  _______,  _______,
                                  _______,  _______,  _______,            _______,  _______,  _______
  ),
  
  [_ADJUST] = LAYOUT_splaytoraid40(
    _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,  _______,  _______,  _______,
              _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,  _______,  _______,
                                  _______,  _______,  _______,            _______,  _______,  _______
  ),
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    return true;
}

#ifdef DIP_SWITCH_ENABLE
bool dip_switch_update_user(uint8_t index, bool active) {
    switch (index) {
        case 0:
            if(active) { tap_code(KC_MUTE); }
            break;
    }
    return true;
}
#endif