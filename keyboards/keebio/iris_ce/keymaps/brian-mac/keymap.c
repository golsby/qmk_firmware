// Copyright 2023 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#define HOMEROW_MODS

enum custom_layers {
     _MAC,
     _WIN,
     _LOWER,
     _RAISE,
     _MOUSE,

};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_MAC] = LAYOUT(  //  _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRAVE, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
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
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_ESC,           KC_BSPC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
  // outer layer changes
  //                                TL_LOWR, KC_LGUI, KC_SPC,                    KC_ENT,  KC_RALT, TL_UPPR
  // inner layer changes
                                    KC_LGUI, MO(_LOWER),  KC_SPC,                   KC_ENT, MO(_RAISE), KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),



  [_WIN] = LAYOUT(  //  _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRAVE, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
  // Home row mods:
#ifdef HOMEROW_MODS
   KC_LCTL,LALT_T(KC_A),LGUI_T(KC_S),LCTL_T(KC_D),LSFT_T(KC_F),KC_G,               KC_H,RSFT_T(KC_J),RCTL_T(KC_K),LGUI_T(KC_L),RALT_T(KC_SCLN), KC_QUOT,
#else
     KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
#endif
  // KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_ESC,           KC_BSPC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
  // outer layer changes
  //                                TL_LOWR, KC_LGUI, KC_SPC,                    KC_ENT,  KC_RALT, TL_UPPR
  // inner layer changes
                                    KC_LCTL,  MO(_LOWER),   KC_SPC,                   KC_ENT,  MO(_RAISE),  KC_RALT
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
                                    KC_LGUI, _______, KC_TAB,                    KC_BSPC,  MO(_MOUSE), KC_RALT
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
                                    _______,   MO(_MOUSE), _______,                    _______, _______, KC_KP_0
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),




 [_MOUSE] = LAYOUT(  //  _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     QK_BOOT, TO(_MAC), TO(_WIN),  _______, _______, DT_PRNT,                            _______, _______, _______, _______, _______, QK_CLEAR_EEPROM,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______,  _______, _______, DT_UP,                           KC_BTN3,  KC_WH_D, KC_MS_U, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, DT_DOWN,                            KC_BTN1,  KC_MS_L, _______, KC_MS_R, KC_BTN2, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, KC_WH_U,  KC_MS_D, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

};

const int            led_count = 13;
int                  leds[]    = {5, 6, 17, 18, 29, 30, 36, 37, 38, 41, 44, 45, 46};

layer_state_t layer_state_set_user(layer_state_t state) {
    //rgblight_sethsv(140,0,255);

    if (layer_state_cmp(state, _MOUSE)) {
        rgblight_sethsv_noeeprom(100,80,96);  // cyan
    }
    else if (layer_state_cmp(state, _LOWER)) {
        rgblight_sethsv_noeeprom(200,80,96);  // pink
    }
    else if (layer_state_cmp(state, _RAISE)) {
        rgblight_sethsv_noeeprom(300,80,96);  // yellow
    }
    else if (layer_state_cmp(state, _MAC)) {
        rgblight_sethsv_noeeprom(0,0,96);      // white
    }
    else if (layer_state_cmp(state, _WIN)) {
        rgblight_sethsv_noeeprom(250,80,96);  // red?
    }

    else {
        rgblight_sethsv_noeeprom(0,0,0);   // bright red
    }

    return state;
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LSFT_T(KC_F):
        case RSFT_T(KC_J):
            return TAPPING_TERM - 75;
        default:
            return TAPPING_TERM;
    }
}

void keyboard_post_init_user(void) {
  // Call the post init code.
  rgblight_enable_noeeprom(); // enables Rgb, without saving settings
  rgblight_sethsv_noeeprom(0,0,96); // sets the color without saving
}

const uint16_t PROGMEM esc_combo[] = {KC_SPACE, KC_ESC, COMBO_END};
const uint16_t PROGMEM lower_bkspc_combo[] = {KC_BACKSPACE, LGUI(KC_LEFT), COMBO_END};
const uint16_t PROGMEM lower_bkspc_combo2[] = {KC_HOME, RSFT_T(KC_LEFT), COMBO_END};
const uint16_t PROGMEM bkspc_combo[] = {KC_H, KC_Y, COMBO_END};
const uint16_t PROGMEM bkspc_combo2[] = {KC_U, RSFT_T(KC_J) , COMBO_END};
combo_t key_combos[] = {
    COMBO(esc_combo, KC_ESC),
    COMBO(bkspc_combo, KC_BACKSPACE),
    COMBO(bkspc_combo2, KC_BACKSPACE),
    COMBO(lower_bkspc_combo, KC_BACKSPACE),
    COMBO(lower_bkspc_combo2, KC_BACKSPACE),
    //COMBO(backspace_combo, KC_BACKSPACE), // keycodes with modifiers are possible too!
};
