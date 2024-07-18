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

enum custom_keycodes {
    RH_WIR = SAFE_RANGE,
    RH_SHA,
    RH_REN,
    RH_MON,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case RH_WIR:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("SetDisplayMode m=wireframe enter ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case RH_SHA:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("SetDisplayMode m=shaded enter ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case RH_REN:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("SetDisplayMode m=rendered enter ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case RH_MON:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("SetDisplayMode m=monochrome enter ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    }

    return true;
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_MAC] = LAYOUT(  //  _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
   KC_LCTL,LALT_T(KC_A),LCTL_T(KC_S),LGUI_T(KC_D),LSFT_T(KC_F),KC_G,               KC_H,RSFT_T(KC_J),LGUI_T(KC_K),RCTL_T(KC_L),RALT_T(KC_SCLN), KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_ESC,           KC_BSPC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, MO(_LOWER),  KC_SPC,                   KC_ENT, MO(_RAISE), KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),


  [_COLEMAK_DH] = LAYOUT(  //  _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                               KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,    KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
   KC_LCTL,LALT_T(KC_A),LCTL_T(KC_R),LGUI_T(KC_S),LSFT_T(KC_T),KC_G,               KC_M,RSFT_T(KC_N),LGUI_T(KC_E),RCTL_T(KC_I),RALT_T(KC_O), KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    KC_ESC,           KC_BSPC,  KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, MO(_LOWER),  KC_SPC,                   KC_ENT, MO(_RAISE), KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),


  [_WIN] = LAYOUT(  //  _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRAVE, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
   KC_LCTL,LALT_T(KC_A),LGUI_T(KC_S),LCTL_T(KC_D),LSFT_T(KC_F),KC_G,                  KC_H,  RSFT_T(KC_J),KC_K,  KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_ESC,           KC_BSPC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                        TD(TD_WIN_CTL_ALT),  MO(_WIN_LOWER),   KC_SPC,               KC_ENT,  MO(_RAISE),  KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),


  [_RHINO] = LAYOUT(  //  _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,LCA(KC_1),LCA(KC_2),LCA(KC_3),LCA(KC_4),LCA(KC_5),                       LCA(KC_6),LCA(KC_7),LCA(KC_8),LCA(KC_9),LCA(KC_0),LCA(KC_BSPC),
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX,LCA(KC_Q),LCA(KC_W),LCA(KC_E),LCA(KC_R),LCA(KC_T),                       LCA(KC_Y),LCA(KC_U),LCA(KC_I),LCA(KC_O),LCA(KC_P),XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX,LCA(KC_A),LCA(KC_S),LCA(KC_D),QK_LEAD,LCA(KC_G),                         LCA(KC_H),LCA(KC_J),LCA(KC_K),LCA(KC_L),LCA(KC_SCLN),LCA(KC_QUOT),
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX,LCMD(KC_Z),LCMD(KC_X),LCMD(KC_C),LCMD(KC_V),XXXXXXX,KC_ESC,     KC_BSPC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______,MO(_LOWER),_______,                  _______,MO(_RAISE),_______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),



  [_LOWER] = LAYOUT(  //  _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     XXXXXXX, DM_REC1, DM_REC2, KC_LCBR, KC_RCBR,  XXXXXXX,                             KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, LGUI(LSFT(LCTL(KC_4))),
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
LGUI(KC_TAB), DM_PLY1, DM_PLY2,  KC_LPRN, KC_RPRN, XXXXXXX,                            KC_BSPC, KC_HOME,   KC_UP,   KC_PGUP,   KC_EXCLAIM,   _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
TG(_RHINO),LALT_T(XXXXXXX),LCTL_T(XXXXXXX),LGUI_T(KC_LBRC),LSFT_T(KC_RBRC),KC_MINS,   LGUI(KC_LEFT),KC_LEFT, XXXXXXX,KC_RIGHT,LGUI(KC_RIGHT), LGUI(KC_RIGHT),
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
   TG(_LOWER),LCMD(KC_Z),LCMD(KC_X),LCMD(KC_C),LCMD(KC_V),KC_UNDS,KC_ESC,       KC_BSPC, KC_EQL, KC_END,   KC_DOWN,   KC_PGDN,   KC_BSLS, TG(_LOWER),
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, _______, KC_SPC,                    KC_ENT,  MO(_MOUSE), KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),


  [_WIN_LOWER] = LAYOUT(  //  _WIN_LOWER    _WIN_LOWER    _WIN_LOWER    _WIN_LOWER    _WIN_LOWER    _WIN_LOWER    _WIN_LOWER    _WIN_LOWER    _WIN_LOWER
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     XXXXXXX, DM_REC1, DM_REC2, KC_LCBR, KC_RCBR,  XXXXXXX,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PSCR,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
LGUI(KC_TAB),  DM_PLY1, DM_PLY2,  KC_LPRN, KC_RPRN, XXXXXXX,                        KC_BSPC, LCTL(KC_HOME),KC_UP,KC_PGUP,  KC_EXCLAIM,  _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
TG(_RHINO),LALT_T(XXXXXXX), LCTL_T(XXXXXXX),LGUI_T(KC_LBRC),LSFT_T(KC_RBRC),_______,     KC_HOME, KC_LEFT, XXXXXXX, KC_RIGHT, KC_END, KC_END,
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
     RGB_TOG, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_7, KC_8, KC_9, KC_SLSH, KC_BACKSLASH,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_VAI, KC_MPRV, KC_MNXT, KC_VOLU, KC_BRIU, KC_MINS,                            KC_PLUS,  KC_4, KC_5, KC_6, KC_ASTR, KC_GRAVE,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_VAD, KC_MSTP, KC_MPLY, KC_VOLD, KC_BRID, KC_UNDS, KC_ESC,          KC_BSPC,  KC_EQL,  KC_1,  KC_2, KC_3, KC_PDOT, TG(_RAISE),
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______,   MO(_MOUSE), KC_SPC,                KC_ENT, _______, KC_0
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),


 [_MOUSE] = LAYOUT(  //  _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     QK_BOOT, TO(_MAC),TO(_WIN),TG(_FUNC),TG(_LOWER), TG(_RHINO),                     TO(_COLEMAK_DH), _______, _______, _______, _______, QK_CLEAR_EEPROM,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_TOG, _______, _______,  _______, _______, _______,                           KC_BTN3,  KC_WH_D, KC_MS_U, XXXXXXX, XXXXXXX, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, KC_BTN2, KC_BTN1, _______,                            KC_BTN1,  KC_MS_L, XXXXXXX, KC_MS_R, KC_BTN2, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     TG(_LOWER), _______, _______, KC_BTN3, _______, _______, _______,          _______, _______, KC_WH_U,  KC_MS_D, XXXXXXX, XXXXXXX, TG(_RAISE),
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
            return 140;
        case RSFT_T(KC_J):
            return 140;
        default:
            return 200;
    }
}

void keyboard_post_init_user(void) {
  // Call the post init code.
  rgb_matrix_mode(RGB_MATRIX_CUSTOM_dynamic_effect);
}

void leader_start_user(void) {
    // Do something when the leader key is pressed
}
void leader_end_user(void) {
    if (leader_sequence_one_key(LCA(KC_1))) {
        tap_code16(LCTL(LALT(KC_6)));
    }
    else if (leader_sequence_one_key(LCA(KC_2))) {
        tap_code16(LCTL(LALT(KC_7)));
    }
    else if (leader_sequence_one_key(LCA(KC_3))) {
        tap_code16(LCTL(LALT(KC_8)));
    }
    else if (leader_sequence_one_key(LCA(KC_4))) {
        tap_code16(LCTL(LALT(KC_9)));
    }
    else if (leader_sequence_one_key(LCA(KC_5))) {
        tap_code16(LCTL(LALT(KC_0)));
    }
    else if (leader_sequence_one_key(LCA(KC_Q))) {
        tap_code16(LCTL(LALT(KC_Y)));
    }
    else if (leader_sequence_one_key(LCA(KC_W))) {
        tap_code16(LCTL(LALT(KC_U)));
    }
    else if (leader_sequence_one_key(LCA(KC_E))) {
        tap_code16(LCTL(LALT(KC_I)));
    }
    else if (leader_sequence_one_key(LCA(KC_R))) {
        tap_code16(LCTL(LALT(KC_O)));
    }
    else if (leader_sequence_one_key(LCA(KC_T))) {
        tap_code16(LCTL(LALT(KC_P)));
    }
    else if (leader_sequence_one_key(LCA(KC_A))) {
        tap_code16(LCTL(LALT(KC_H)));
    }
    else if (leader_sequence_one_key(LCA(KC_S))) {
        tap_code16(LCTL(LALT(KC_J)));
    }
    else if (leader_sequence_one_key(LCA(KC_D))) {
        tap_code16(LCTL(LALT(KC_K)));
    }
    else if (leader_sequence_one_key(LCA(KC_F))) {
        tap_code16(LCTL(LALT(KC_L)));
    }
    else if (leader_sequence_one_key(LCA(KC_G))) {
        tap_code16(LCTL(LALT(KC_SCLN)));
    }
    else if (leader_sequence_one_key(LCA(KC_Z))) {
        tap_code16(LCTL(LALT(KC_B)));
    }
    else if (leader_sequence_one_key(LCA(KC_X))) {
        tap_code16(LCTL(LALT(KC_N)));
    }
    else if (leader_sequence_one_key(LCA(KC_C))) {
        tap_code16(LCTL(LALT(KC_M)));
    }
    else if (leader_sequence_one_key(LCA(KC_V))) {
        tap_code16(LCTL(LALT(KC_COMM)));
    }
    else if (leader_sequence_one_key(LCA(KC_B))) {
        tap_code16(LCTL(LALT(KC_DOT)));
    }

}

const uint16_t PROGMEM esc_combo[] = {KC_SPACE, KC_ESC, COMBO_END};
const uint16_t PROGMEM bkspc_combo[] = {RSFT_T(KC_J),RCTL_T(KC_L), COMBO_END};
const uint16_t PROGMEM win_bkspc_combo[] = {RSFT_T(KC_J),LGUI_T(KC_L), COMBO_END};
const uint16_t PROGMEM mac_cmk_bkspc_combo[] = {RSFT_T(KC_N),RCTL_T(KC_I), COMBO_END};
const uint16_t PROGMEM lower_bkspc_combo[] = {KC_LEFT, KC_RIGHT, COMBO_END};
const uint16_t PROGMEM raise_bkspc_combo[] = {KC_4, KC_6, COMBO_END};

//Combos for special characters
const uint16_t PROGMEM unds_combo[] = {KC_V, KC_B, COMBO_END};
const uint16_t PROGMEM eql_combo[] = {KC_N, KC_M, COMBO_END};
const uint16_t PROGMEM plus_combo[] = {KC_H, RSFT_T(KC_J), COMBO_END};
const uint16_t PROGMEM minus_combo[] = {LSFT_T(KC_F), KC_G, COMBO_END};
const uint16_t PROGMEM ques_combo[] = {KC_Y, KC_U, COMBO_END};
const uint16_t PROGMEM excl_combo[] = {KC_R, KC_T, COMBO_END};

// colemak special character combos
const uint16_t PROGMEM unds_combo_cmk[] = {KC_D, KC_V, COMBO_END};
const uint16_t PROGMEM eql_combo_cmk[] = {KC_K, KC_H, COMBO_END};
const uint16_t PROGMEM plus_combo_cmk[] = {KC_M, RSFT_T(KC_N), COMBO_END};
const uint16_t PROGMEM minus_combo_cmk[] = {LSFT_T(KC_T), KC_G, COMBO_END};
const uint16_t PROGMEM ques_combo_cmk[] = {KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM excl_combo_cmk[] = {KC_P, KC_B, COMBO_END};

combo_t key_combos[] = {
    COMBO(esc_combo, KC_ESC),
    COMBO(bkspc_combo, KC_BACKSPACE),
    COMBO(win_bkspc_combo, KC_BACKSPACE),
    COMBO(mac_cmk_bkspc_combo, KC_BACKSPACE),
    COMBO(lower_bkspc_combo, KC_BACKSPACE),
    COMBO(raise_bkspc_combo, KC_BACKSPACE),

    COMBO(unds_combo, KC_UNDS),
    COMBO(eql_combo, KC_EQL),
    COMBO(minus_combo, KC_MINS),
    COMBO(plus_combo, KC_PLUS),
    COMBO(ques_combo, KC_QUES),
    COMBO(excl_combo, KC_EXLM),

    // colemak special character combos
    COMBO(unds_combo_cmk, KC_UNDS),
    COMBO(eql_combo_cmk, KC_EQL),
    COMBO(minus_combo_cmk, KC_MINS),
    COMBO(plus_combo_cmk, KC_PLUS),
    COMBO(ques_combo_cmk, KC_QUES),
    COMBO(excl_combo_cmk, KC_EXLM),
};

// Shift + esc = ~
const key_override_t tilde_esc_override = ko_make_basic(MOD_MASK_SHIFT, KC_ESC, S(KC_GRV));
// GUI + esc = `
const key_override_t grave_esc_override = ko_make_basic(MOD_MASK_CTRL, KC_ESC, KC_GRV);
const key_override_t **key_overrides = (const key_override_t *[]){
	&tilde_esc_override,
	&grave_esc_override,
	NULL
};
