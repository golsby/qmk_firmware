// Copyright 2023 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#define HOMEROW_MODS

enum custom_layers {
     _QWERTY,
     _LOWER,
     _RAISE,
     _MOUSE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(  //  _QWERTY    _QWERTY    _QWERTY    _QWERTY    _QWERTY    _QWERTY    _QWERTY    _QWERTY    _QWERTY    _QWERTY    _QWERTY
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRAVE, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
  // Home row mods:
#ifdef HOMEROW_MODS
   KC_LCTL,LALT_T(KC_A),LCTL_T(KC_S),LGUI_T(KC_D),LSFT_T(KC_F),KC_G,               KC_H,RSFT_T(KC_J),LGUI_T(KC_K),RCTL_T(KC_L),RALT_T(KC_SCLN), KC_QUOT,
#else
     KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
#endif
  // KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_ESC,          KC_BSPC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
  // outer layer changes
  //                                TL_LOWR, KC_LGUI, KC_SPC,                    KC_ENT,  KC_RALT, TL_UPPR
  // inner layer changes
                                    KC_LGUI, TL_LOWR, KC_SPC,                    KC_ENT,  TL_UPPR, KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_LOWER] = LAYOUT(  //  _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PGUP,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
LGUI(KC_TAB),  _______, _______,  KC_LPRN, KC_RPRN, _______,                            KC_BSPC, KC_HOME,   KC_UP,   KC_PGUP,   KC_P0,   KC_PGDN,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
#ifdef HOMEROW_MODS
_______,LALT_T(_______), LCTL_T(_______),LGUI_T(KC_LBRC),LSFT_T(KC_RBRC), _______, LGUI(KC_LEFT),RSFT_T(KC_LEFT), LGUI_T(XXXXXXX),RCTL_T(KC_RIGHT),LGUI(KC_RIGHT
), KC_PIPE,
#else
     _______,  _______, _______, KC_LBRC, KC_RBRC, _______,                       LGUI(KC_LEFT),KC_LEFT, XXXXXXX,   KC_RIGHT,  LGUI(KC_RIGHT), KC_PIPE,
#endif
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______,  _______, KC_LCBR, KC_RCBR, _______, KC_LPRN,          KC_RPRN, XXXXXXX, KC_END,   KC_DOWN,   KC_PGDN,   KC_MINS, XXXXXXX,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                    KC_BSPC,  _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_RAISE] = LAYOUT(  //  _RAISE    _RAISE    _RAISE    _RAISE    _RAISE    _RAISE    _RAISE    _RAISE    _RAISE    _RAISE    _RAISE    _RAISE    _RAISE
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_TOG, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_SLASH, KC_BACKSLASH,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_VAI, KC_MPRV, KC_MNXT, KC_VOLU, KC_PGUP, KC_UNDS,                            KC_EQL,  KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_ASTERISK, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_VAD, KC_MSTP, KC_MPLY, KC_VOLD, KC_PGDN, KC_MINS, KC_LPRN,          _______, KC_PLUS, KC_KP_1,  KC_KP_2, KC_KP_3, KC_PDOT, XXXXXXX,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, KC_KP_0
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

 [_MOUSE] = LAYOUT(  //  _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     QK_BOOT, _______, _______,  _______, _______, _______,                            _______, _______, _______, _______, _______, QK_CLEAR_EEPROM,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______,  _______, _______, _______,                            _______, KC_WH_D, KC_MS_U, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            KC_BTN1,  KC_MS_L, _______, KC_MS_R, KC_BTN2, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, KC_WH_U,  KC_MS_D, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )

};

const int            led_count = 13;
int                  leds[]    = {5, 6, 17, 18, 29, 30, 36, 37, 38, 41, 44, 45, 46};

layer_state_t layer_state_set_user(layer_state_t state) {
    //rgblight_sethsv(140,0,255);
    switch (get_highest_layer(state)) {
        case _MOUSE:
            rgb_matrix_sethsv(100,80,96);
            break;
        case _LOWER:
            //rgb_matrix_sethsv(200,255,96);
            break;
        case _RAISE:
            //rgb_matrix_sethsv(300,255,96);
            break;
        case _QWERTY:
        default:
            rgb_matrix_sethsv(0,0,96);
            break;
    }
    return state;
}

void keyboard_post_init_user(void) {
  // Call the post init code.
  rgblight_enable_noeeprom(); // enables Rgb, without saving settings
  rgblight_sethsv_noeeprom(0, 0, 96); // sets the color to teal/cyan without saving
}

//A B C D fTHf


const uint16_t PROGMEM esc_combo[] = {KC_SPACE, KC_ESC, COMBO_END};
const uint16_t PROGMEM backspace_combo[] = {KC_ENTER, KC_BACKSPACE, COMBO_END};
const uint16_t PROGMEM lower_hy_combo[] = {KC_BACKSPACE, LGUI(KC_LEFT), COMBO_END};
const uint16_t PROGMEM hy_combo[] = {KC_H, KC_Y, COMBO_END};
combo_t key_combos[] = {
    COMBO(esc_combo, KC_ESC),
    COMBO(hy_combo, KC_BACKSPACE),
    COMBO(lower_hy_combo, KC_BACKSPACE),
    //COMBO(backspace_combo, KC_BACKSPACE), // keycodes with modifiers are possible too!
};
