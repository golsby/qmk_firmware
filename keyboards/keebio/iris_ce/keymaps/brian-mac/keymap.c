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

//#include "rhino_macros.h"
#include "keys_1.h"
#include "combos.h"

// Custom shift keys
#include "features/custom_shift_keys.h"

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  if (!process_custom_shift_keys(keycode, record)) { return false; }
  // Your macros ...

  return true;
}
// End Custom Shift Keys

// KC_LT,   KC_LCBR, KC_LBRC, KC_LPRN
const custom_shift_key_t custom_shift_keys[] = {
  {KC_DOT , KC_COLN}, // Shift . is ?
  {KC_COMM, KC_SEMICOLON}, // Shift , is !
  {KC_BSLS, KC_QUES},

  {KC_EXLM, KC_QUES},

  {KC_LPRN, KC_LCBR},
  {KC_RPRN, KC_RCBR},
  {KC_LBRC, KC_LT},
  {KC_RBRC, KC_GT},

  //{KC_MINS, KC_EQL }, // Shift - is =
  //{KC_COLN, KC_SCLN}, // Shift : is ;
};
uint8_t NUM_CUSTOM_SHIFT_KEYS =
    sizeof(custom_shift_keys) / sizeof(custom_shift_key_t);


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

// Shift + esc = ~
const key_override_t tilde_esc_override = ko_make_basic(MOD_MASK_SHIFT, KC_ESC, S(KC_GRV));
// GUI + esc = `
const key_override_t grave_esc_override = ko_make_basic(MOD_MASK_CTRL, KC_ESC, KC_GRV);
const key_override_t **key_overrides = (const key_override_t *[]){
	&tilde_esc_override,
	&grave_esc_override,
	NULL
};
