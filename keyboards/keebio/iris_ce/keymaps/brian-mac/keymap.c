// Copyright 2023 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "layers.h"
#include QMK_KEYBOARD_H
#define HOMEROW_MODS

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
     XXXXXXX, XXXXXXX, XXXXXXX, KC_LCBR, KC_RCBR,  XXXXXXX,                             KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, LGUI(LSFT(LCTL(KC_4))),
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
LGUI(KC_TAB),  XXXXXXX, XXXXXXX,  KC_LPRN, KC_RPRN, XXXXXXX,                            KC_BSPC, KC_HOME,   KC_UP,   KC_PGUP,   KC_P0,   _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
XXXXXXX,LALT_T(XXXXXXX), LCTL_T(XXXXXXX),LGUI_T(KC_LBRC),LSFT_T(KC_RBRC), _______, LGUI(KC_LEFT),KC_LEFT, XXXXXXX,KC_RIGHT,LGUI(KC_RIGHT), LGUI(KC_RIGHT),
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
   TG(_LOWER),LCMD(KC_Z),LCMD(KC_X),LCMD(KC_C),LCMD(KC_V),MO(_FUNC),KC_ESC,       KC_BSPC, XXXXXXX, KC_END,   KC_DOWN,   KC_PGDN,   KC_BSLS, TG(_LOWER),
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, _______, KC_SPC,                    KC_ENT,  MO(_MOUSE), KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),


  [_WIN_LOWER] = LAYOUT(  //  _WIN_LOWER    _WIN_LOWER    _WIN_LOWER    _WIN_LOWER    _WIN_LOWER    _WIN_LOWER    _WIN_LOWER    _WIN_LOWER    _WIN_LOWER
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     XXXXXXX, XXXXXXX, XXXXXXX, KC_LCBR, KC_RCBR,  XXXXXXX,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PSCR,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
LGUI(KC_TAB),  XXXXXXX, XXXXXXX,  KC_LPRN, KC_RPRN, XXXXXXX,                        KC_BSPC, LCTL(KC_HOME),KC_UP,KC_PGUP,  KC_P0,  _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
XXXXXXX,LALT_T(XXXXXXX), LCTL_T(XXXXXXX),LGUI_T(KC_LBRC),LSFT_T(KC_RBRC),_______,     KC_HOME, KC_LEFT, XXXXXXX, KC_RIGHT, KC_END, KC_END,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     TG(_LOWER),LCTL(KC_Z),LCTL(KC_X),LCTL(KC_C),LCTL(KC_V), XXXXXXX, KC_ESC,   KC_BSPC, XXXXXXX, LCTL(KC_END),   KC_DOWN,   KC_PGDN,   KC_BSLS, TG(_LOWER),
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
     RGB_VAI, KC_MPRV, KC_MNXT, KC_VOLU, KC_BRIU, KC_MINS,                            KC_PLUS,  KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_ASTERISK, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_VAD, KC_MSTP, KC_MPLY, KC_VOLD, KC_BRID, KC_UNDS, KC_ESC,          KC_BSPC,  KC_EQL,  KC_KP_1,  KC_KP_2, KC_KP_3, KC_PDOT, TG(_RAISE),
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______,   MO(_MOUSE), KC_SPC,                KC_ENT, _______, KC_KP_0
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),


 [_MOUSE] = LAYOUT(  //  _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     QK_BOOT, TO(_MAC),TO(_WIN),TG(_FUNC),TG(_LOWER), _______,                        _______, _______, _______, _______, _______, QK_CLEAR_EEPROM,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_TOG, DM_REC1, DM_PLY1,  _______, _______, _______,                           KC_BTN3,  KC_WH_D, KC_MS_U, XXXXXXX, XXXXXXX, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, KC_BTN2, KC_BTN1, _______,                            KC_BTN1,  KC_MS_L, XXXXXXX, KC_MS_R, KC_BTN2, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     TG(_RAISE), _______, _______, KC_BTN3, _______, _______, _______,          _______, _______, KC_WH_U,  KC_MS_D, XXXXXXX, XXXXXXX, TG(_LOWER),
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, TG(_MOUSE), TG(_MOUSE)
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

 [_FUNC] = LAYOUT(  //  _FUNC    _FUNC    _FUNC    _FUNC    _FUNC    _FUNC    _FUNC    _FUNC    _FUNC    _FUNC    _FUNC    _FUNC    _FUNC
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

};


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
const uint16_t PROGMEM win_lower_bkspc_combo2[] = {LCTL(KC_HOME), KC_LEFT, COMBO_END};
const uint16_t PROGMEM win_lower_bkspc_combo[] = {KC_BACKSPACE, KC_HOME, COMBO_END};
const uint16_t PROGMEM lower_bkspc_combo2[] = {KC_HOME, KC_LEFT, COMBO_END};
const uint16_t PROGMEM bkspc_combo[] = {KC_H, KC_Y, COMBO_END};
const uint16_t PROGMEM bkspc_combo2[] = {KC_U, RSFT_T(KC_J) , COMBO_END};
const uint16_t PROGMEM raise_bkspc_combo[] = {KC_KP_7, KC_KP_4, COMBO_END};
const uint16_t PROGMEM raise_bkspc_combo2[] = {KC_CIRC, KC_PLUS, COMBO_END};

combo_t key_combos[] = {
    COMBO(esc_combo, KC_ESC),
    COMBO(bkspc_combo, KC_BACKSPACE),
    COMBO(bkspc_combo2, KC_BACKSPACE),
    COMBO(lower_bkspc_combo, KC_BACKSPACE),
    COMBO(lower_bkspc_combo2, KC_BACKSPACE),
    COMBO(win_lower_bkspc_combo, KC_BACKSPACE),
    COMBO(win_lower_bkspc_combo2, KC_BACKSPACE),
    COMBO(raise_bkspc_combo, KC_BACKSPACE),
    COMBO(raise_bkspc_combo2, KC_BACKSPACE),
};

