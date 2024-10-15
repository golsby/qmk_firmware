
const uint16_t PROGMEM esc_combo[] = {KC_SPACE, KC_ESC, COMBO_END};
const uint16_t PROGMEM bkspc_combo[] = {KC_J,KC_L, COMBO_END};
const uint16_t PROGMEM win_bkspc_combo[] = {KC_J,KC_L, COMBO_END};
const uint16_t PROGMEM mac_cmk_bkspc_combo[] = {KC_N, KC_I, COMBO_END};
const uint16_t PROGMEM lower_bkspc_combo[] = {KC_LEFT, KC_RIGHT, COMBO_END};
const uint16_t PROGMEM raise_bkspc_combo[] = {KC_4, KC_6, COMBO_END};
const uint16_t PROGMEM sym_bkspc_combo[] = {KC_QUOT, KC_GRAVE, COMBO_END};

//Combos for special characters
const uint16_t PROGMEM unds_combo[] = {KC_V, KC_B, COMBO_END};
const uint16_t PROGMEM eql_combo[] = {KC_N, KC_M, COMBO_END};
const uint16_t PROGMEM plus_combo[] = {KC_H, KC_J, COMBO_END};
const uint16_t PROGMEM minus_combo[] = {KC_F, KC_G, COMBO_END};
const uint16_t PROGMEM ques_combo[] = {KC_Y, KC_U, COMBO_END};
const uint16_t PROGMEM excl_combo[] = {KC_R, KC_T, COMBO_END};

// colemak special character combos
const uint16_t PROGMEM unds_combo_cmk[] = {KC_D, KC_V, COMBO_END};
const uint16_t PROGMEM eql_combo_cmk[] = {KC_K, KC_H, COMBO_END};
const uint16_t PROGMEM plus_combo_cmk[] = {KC_M, KC_N, COMBO_END};
const uint16_t PROGMEM minus_combo_cmk[] = {KC_T, KC_G, COMBO_END};
const uint16_t PROGMEM ques_combo_cmk[] = {KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM excl_combo_cmk[] = {KC_P, KC_B, COMBO_END};

combo_t key_combos[] = {
    //COMBO(esc_combo, KC_ESC),
    //COMBO(bkspc_combo, KC_BACKSPACE),
    //COMBO(sym_bkspc_combo, KC_BACKSPACE),
    //COMBO(mac_cmk_bkspc_combo, KC_BACKSPACE),
    //COMBO(lower_bkspc_combo, KC_BACKSPACE),
    //COMBO(raise_bkspc_combo, KC_BACKSPACE),

    COMBO(unds_combo, KC_UNDS),
    //COMBO(eql_combo, KC_EQL),
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
