// Copyright 2023 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#define HOMEROW_MODS


enum custom_layers {
    _MAC,
    _WIN,
    _RHINO,
    _LOWER,
    _WIN_LOWER,
    _RAISE,
    _MOUSE,
};


// Tap Dance declarationsp
enum {
    TD_WIN_CTL_ALT,
};

// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_WIN_CTL_ALT] = ACTION_TAP_DANCE_DOUBLE(KC_LCTL, KC_LALT),
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_MAC] = LAYOUT(  //  _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRAVE, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
   KC_LCTL,LALT_T(KC_A),LCTL_T(KC_S),LGUI_T(KC_D),LSFT_T(KC_F),KC_G,               KC_H,RSFT_T(KC_J),LGUI_T(KC_K),RCTL_T(KC_L),RALT_T(KC_SCLN), KC_QUOT,
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
   KC_LCTL,LALT_T(KC_A),LGUI_T(KC_S),LCTL_T(KC_D),LSFT_T(KC_F),KC_G,               KC_H,RSFT_T(KC_J),RCTL_T(KC_K),LGUI_T(KC_L),RALT_T(KC_SCLN), KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_ESC,           KC_BSPC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
  // outer layer changes
  //                                TL_LOWR, KC_LGUI, KC_SPC,                    KC_ENT,  KC_RALT, TL_UPPR
  // inner layer changes
                        TD(TD_WIN_CTL_ALT),  MO(_WIN_LOWER),   KC_SPC,               KC_ENT,  MO(_RAISE),  KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),


  [_RHINO] = LAYOUT(  //  _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRAVE, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
   KC_LCTL,LALT_T(KC_A),LGUI_T(KC_S),LCTL_T(KC_D),LSFT_T(KC_F),KC_G,               KC_H,RSFT_T(KC_J),RCTL_T(KC_K),LGUI_T(KC_L),RALT_T(KC_SCLN), KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_ESC,           KC_BSPC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
  // outer layer changes
  //                                TL_LOWR, KC_LGUI, KC_SPC,                    KC_ENT,  KC_RALT, TL_UPPR
  // inner layer changes
                        TD(TD_WIN_CTL_ALT),  MO(_LOWER),   KC_SPC,               KC_ENT,  MO(_RAISE),  KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),



  [_LOWER] = LAYOUT(  //  _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, LGUI(LSFT(LCTL(KC_4))),
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
LGUI(KC_TAB),  _______, _______,  KC_LPRN, KC_RPRN, _______,                            KC_BSPC, KC_HOME,   KC_UP,   KC_PGUP,   KC_P0,   _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
_______,LALT_T(_______), LCTL_T(_______),LGUI_T(KC_LBRC),LSFT_T(KC_RBRC), _______, LGUI(KC_LEFT),RSFT_T(KC_LEFT), LGUI_T(KC_DOWN),RCTL_T(KC_RIGHT),LGUI(KC_RIGHT), LGUI(KC_RIGHT),
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______,  _______, KC_LCBR, KC_RCBR, _______, KC_ESC,          KC_BSPC, XXXXXXX, KC_END,   _______,   KC_PGDN,   KC_BSLS, XXXXXXX,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, _______, KC_SPC,                    KC_ENT,  MO(_MOUSE), KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),


  [_WIN_LOWER] = LAYOUT(  //  _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PSCR,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
LGUI(KC_TAB),  _______, _______,  KC_LPRN, KC_RPRN, _______,                          KC_BSPC, LCTL(KC_HOME),KC_UP,KC_PGUP, KC_P0,  _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
_______,LALT_T(_______), LCTL_T(_______),LGUI_T(KC_LBRC),LSFT_T(KC_RBRC), _______, KC_HOME,RSFT_T(KC_LEFT), LGUI_T(KC_DOWN),RCTL_T(KC_RIGHT),KC_END, KC_END,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______,  _______, KC_LCBR, KC_RCBR, _______, KC_ESC,          KC_BSPC, XXXXXXX, LCTL(KC_END),   _______,   KC_PGDN,   KC_BSLS, XXXXXXX,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, _______, KC_SPC,                    KC_ENT,  MO(_MOUSE), KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_RAISE] = LAYOUT(  //  _RAISE    _RAISE    _RAISE    _RAISE    _RAISE    _RAISE    _RAISE    _RAISE    _RAISE    _RAISE    _RAISE    _RAISE    _RAISE
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_TOG, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_SLASH, KC_BACKSLASH,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_VAI, KC_MPRV, KC_MNXT, KC_VOLU, _______, KC_MINS,                            KC_PLUS,  KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_ASTERISK, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_VAD, KC_MSTP, KC_MPLY, KC_VOLD, _______, KC_UNDS, KC_ESC,          KC_BSPC,  KC_EQL,  KC_KP_1,  KC_KP_2, KC_KP_3, KC_PDOT, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______,   MO(_MOUSE), KC_SPC,                KC_ENT, _______, KC_KP_0
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),




 [_MOUSE] = LAYOUT(  //  _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     QK_BOOT, TO(_MAC), TO(_WIN), TO(_RHINO), _______, _______,                            _______, _______, _______, _______, _______, QK_CLEAR_EEPROM,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, DM_REC1, DM_PLY1,  _______, _______, _______,                           KC_BTN3,  KC_WH_D, KC_MS_U, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, KC_BTN2, KC_BTN1, _______,                            KC_BTN1,  KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN2, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, KC_BTN3, _______, _______, _______,          _______, _______, KC_WH_U,  KC_MS_D, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

};


layer_state_t layer_state_set_user(layer_state_t state) {
    //rgblight_sethsv(140,0,255);

    if (layer_state_cmp(state, _MOUSE)) {
        rgb_matrix_mode(RGB_MATRIX_CUSTOM_mouse_effect);
    }
    else if (layer_state_cmp(state, _LOWER)) {
        //rgb_matrix_mode(RGB_MATRIX_CUSTOM_lower_mac_effect);
    }
    else if (layer_state_cmp(state, _WIN_LOWER)) {
        //rgb_matrix_mode(RGB_MATRIX_CUSTOM_lower_win_effect);
    }
    else if (layer_state_cmp(state, _RAISE)) {
        rgb_matrix_mode(RGB_MATRIX_CUSTOM_raise_effect);
    }
    else if (layer_state_cmp(state, _RHINO)) {
        //rgblight_sethsv_noeeprom(180,120,96); // lavender
        rgb_matrix_mode(RGB_MATRIX_CUSTOM_rhino_effect);
    }
    else if (layer_state_cmp(state, _MAC)) {
        //rgblight_sethsv_noeeprom(0,0,96);
        rgb_matrix_mode(RGB_MATRIX_CUSTOM_dynamic_effect);
    }
    else if (layer_state_cmp(state, _WIN)) {
        //rgblight_sethsv_noeeprom(0,80,96);  // red
        rgb_matrix_mode(RGB_MATRIX_CUSTOM_win_effect);
    }

    else {
        rgb_matrix_mode(RGB_MATRIX_CUSTOM_dynamic_effect);
    }

    return state;
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LSFT_T(KC_F):
        case RSFT_T(KC_J):
            return TAPPING_TERM -80;
        default:
            return TAPPING_TERM;
    }
}

void keyboard_post_init_user(void) {
  // Call the post init code.
  rgb_matrix_mode(RGB_MATRIX_CUSTOM_dynamic_effect);
}

const uint16_t PROGMEM esc_combo[] = {KC_SPACE, KC_ESC, COMBO_END};
const uint16_t PROGMEM lower_bkspc_combo[] = {KC_BACKSPACE, LGUI(KC_LEFT), COMBO_END};
const uint16_t PROGMEM lower_bkspc_combo2[] = {KC_HOME, RSFT_T(KC_LEFT), COMBO_END};
const uint16_t PROGMEM bkspc_combo[] = {KC_H, KC_Y, COMBO_END};
const uint16_t PROGMEM bkspc_combo2[] = {KC_U, RSFT_T(KC_J) , COMBO_END};
const uint16_t PROGMEM raise_bkspc_combo[] = {KC_4, KC_7, COMBO_END};
const uint16_t PROGMEM raise_bkspc_combo2[] = {KC_CIRC, KC_PLUS, COMBO_END};
combo_t key_combos[] = {
    COMBO(esc_combo, KC_ESC),
    COMBO(bkspc_combo, KC_BACKSPACE),
    COMBO(bkspc_combo2, KC_BACKSPACE),
    COMBO(lower_bkspc_combo, KC_BACKSPACE),
    COMBO(lower_bkspc_combo2, KC_BACKSPACE),
    COMBO(raise_bkspc_combo, KC_BACKSPACE),
    COMBO(raise_bkspc_combo2, KC_BACKSPACE),
};

