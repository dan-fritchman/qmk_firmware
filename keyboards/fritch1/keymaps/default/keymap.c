#include QMK_KEYBOARD_H

#define _BASE 0

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,    XXXXXXX, XXXXXXX,            KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  XXXXXXX, KC_BSPC, KC_HOME,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,       XXXXXXX, XXXXXXX, XXXXXXX,            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_END,
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,       XXXXXXX, XXXXXXX, XXXXXXX,            KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, XXXXXXX, KC_ENT,  KC_PGUP,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,       XXXXXXX, XXXXXXX, XXXXXXX,            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, XXXXXXX, KC_RSFT, KC_UP,   KC_PGDN,
    KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,  XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX,            XXXXXXX, KC_SPC,  XXXXXXX, KC_RGUI, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT,
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,      KC_F6,   XXXXXXX, XXXXXXX,            KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, KC_DEL,  XXXXXXX
)
};
