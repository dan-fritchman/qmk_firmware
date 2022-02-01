/* 
 * # "DF Sinc" Keymap
 * 
 * Dan Fritchman, January 2022
 * Generally retains the Sinc keymap, with the following few changes:
 * 
 * - Re-arrange right-hand command, alt, and control into Mac-style locations
 * - Disable all but the first layer  
 * - Disable the function/"hyper" keys around the space-bars 
 * - Disable the top-right `Insert`
 * - Merge the side-by-side backspace/delete into double-backspace 
 * 
 * ## Compilation and Flashing
 * ```
 * qmk compile -kb keebio/sinc/rev2 -km dfsinc
 * qmk flash -kb keebio/sinc/rev2 -km dfsinc
 * ```
 * 
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_80_with_macro(
    _______,              KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,   _______,
    _______,   _______,   KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,  KC_BSPC, KC_HOME,
    _______,   _______,   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,  KC_END,
    _______,   _______,   KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,   KC_PGUP,
    _______,   _______,   KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,    KC_PGDN,
    _______,   _______,   KC_LCTL, KC_LALT, KC_LGUI, _______,   KC_SPC,  KC_SPC,         _______,   KC_SPC,  KC_RGUI, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN,  KC_RGHT
  )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    return true;
}
