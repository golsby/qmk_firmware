
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_MAC] = LAYOUT(  //  _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
  // KC_LCTL,LALT_T(KC_A),LCTL_T(KC_S),LGUI_T(KC_D),LSFT_T(KC_F),KC_G,               KC_H,RSFT_T(KC_J),LGUI_T(KC_K),RCTL_T(KC_L),RALT_T(KC_SCLN), KC_QUOT,
     KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    MO(_LOWER),       MO(_SYMBOLS),  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, KC_LSFT,  KC_SPC,                   KC_ENT,   KC_RSFT, KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),


  [_COLEMAK_DH] = LAYOUT(  //  _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC    _MAC
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                               KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_A,    KC_R,   KC_S,    KC_T,     KC_G,                               KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    MO(_LOWER),       MO(_SYMBOLS),  KC_K,    KC_H,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, KC_LSFT,  KC_SPC,                   KC_ENT, KC_RSFT, KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),


  [_WIN] = LAYOUT(  //  _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN    _WIN
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LGUI, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  MO(_WIN_LOWER),   MO(_SYMBOLS),  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LCTL, KC_LSFT, KC_SPC,                    KC_ENT,  KC_RSFT, KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),


  [_RHINO] = LAYOUT(  //  _RHINO    _RHINO    _RHINO    _RHINO    _RHINO    _RHINO    _RHINO    _RHINO    _RHINO    _RHINO    _RHINO    _RHINO    _RHINO
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,LCA(KC_1),LCA(KC_2),LCA(KC_3),LCA(KC_4),LCA(KC_5),                       LCA(KC_6),LCA(KC_7),LCA(KC_8),LCA(KC_9),LCA(KC_0),LCA(KC_BSPC),
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX,LCA(KC_Q),LCA(KC_W),LCA(KC_E),LCA(KC_R),LCA(KC_T),                       LCA(KC_Y),LCA(KC_U),LCA(KC_I),LCA(KC_O),LCA(KC_P),XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX,LCA(KC_A),LCA(KC_S),LCA(KC_D),QK_LEAD,LCA(KC_G),                         LCA(KC_H),LCA(KC_J),LCA(KC_K),LCA(KC_L),LCA(KC_SCLN),LCA(KC_QUOT),
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX,LCMD(KC_Z),LCMD(KC_X),LCMD(KC_C),LCMD(KC_V),XXXXXXX,KC_ESC,     KC_BSPC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______,KC_LSFT,_______,                  _______,OSL(_SYMBOLS),_______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),



  [_LOWER] = LAYOUT(  //  _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER    _LOWER
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     XXXXXXX, DM_REC1, DM_REC2, KC_VOLU, XXXXXXX,  XXXXXXX,                             KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, LGUI(LSFT(LCTL(KC_4))),
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
LGUI(KC_TAB), DM_PLY1, DM_PLY2, KC_VOLD, XXXXXXX, XXXXXXX,                            XXXXXXX, KC_HOME,   KC_UP,   KC_PGUP,   KC_EXCLAIM,   _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
_______,LALT_T(XXXXXXX),LCTL_T(XXXXXXX),LGUI_T(XXXXXXX),LSFT_T(XXXXXXX),KC_MINS,   LGUI(KC_LEFT),KC_LEFT, XXXXXXX,KC_RIGHT,LGUI(KC_RIGHT), LGUI(KC_RIGHT),
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
   XXXXXXX,LCMD(KC_Z),LCMD(KC_X),LCMD(KC_C),LCMD(KC_V),KC_UNDS,KC_ESC,    MO(_MOUSE), KC_EQL, KC_END,   KC_DOWN,   KC_PGDN,   KC_BSLS, XXXXXXX,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, KC_LSFT, KC_SPC,                    KC_ENT, KC_RSFT , XXXXXXX
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),


  [_WIN_LOWER] = LAYOUT(  //  _WIN_LOWER    _WIN_LOWER    _WIN_LOWER    _WIN_LOWER    _WIN_LOWER    _WIN_LOWER    _WIN_LOWER    _WIN_LOWER    _WIN_LOWER
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     XXXXXXX, DM_REC1, DM_REC2, KC_VOLU, XXXXXXX, XXXXXXX,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PSCR,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
LALT(KC_TAB),  DM_PLY1, DM_PLY2,KC_VOLD, XXXXXXX, XXXXXXX,                            XXXXXXX, LCTL(KC_HOME),KC_UP,KC_PGUP,  KC_EXCLAIM,  _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
_______,LALT_T(XXXXXXX), LCTL_T(XXXXXXX),LGUI_T(XXXXXXX),LSFT_T(XXXXXXX),_______,     KC_HOME, KC_LEFT, XXXXXXX, KC_RIGHT, KC_END, KC_END,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
XXXXXXX,LCTL(KC_Z),LCTL(KC_X),LCTL(KC_C),LCTL(KC_V),XXXXXXX,KC_ESC,   MO(_MOUSE), XXXXXXX, LCTL(KC_END),   KC_DOWN,   KC_PGDN,   KC_BSLS, XXXXXXX,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, KC_LSFT, KC_SPC,                    KC_ENT,  KC_RSFT, KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_NUMPAD] = LAYOUT(  //  _NUMPAD    _NUMPAD    _NUMPAD    _NUMPAD    _NUMPAD    _NUMPAD    _NUMPAD    _NUMPAD    _NUMPAD    _NUMPAD    _NUMPAD    _NUMPAD    _NUMPAD
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
  TG(_NUMPAD),KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, KC_7,    KC_8,    KC_9,    KC_SLSH, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MINS,                            KC_PLUS, KC_4,    KC_5,    KC_6,    KC_ASTR, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UNDS, MO(_LOWER),   MO(_SYMBOLS),KC_EQL,  KC_1,    KC_2,    KC_3,    KC_PDOT, XXXXXXX,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, KC_LSFT,  KC_SPC,                   KC_ENT,  KC_0,   KC_0
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_SYMBOLS] = LAYOUT(  //  _SYMBOLS    _SYMBOLS    _SYMBOLS    _SYMBOLS    _SYMBOLS    _SYMBOLS    _SYMBOLS    _SYMBOLS    _SYMBOLS    _SYMBOLS    _SYMBOLS
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX, KC_LT,   KC_LCBR, KC_LBRC, KC_LPRN, KC_TILDE,                           KC_PIPE, KC_RPRN, KC_RBRC, KC_RCBR, KC_GT,   XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX, XXXXXXX, XXXXXXX, KC_COLN, KC_QUOT, KC_GRAVE,MO(_MOUSE),       _______, XXXXXXX, KC_DQUO, KC_SCLN, XXXXXXX, XXXXXXX, XXXXXXX,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, KC_RSFT,KC_SPC,                  KC_ENT, _______, TG(_NUMPAD)
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),



 [_MOUSE] = LAYOUT(  //  _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE    _MOUSE
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     QK_BOOT, TO(_MAC),TO(_WIN),TG(_LOWER),TG(_SYMBOLS), TG(_NUMPAD),            TO(_COLEMAK_DH), _______, _______, _______, _______, QK_CLEAR_EEPROM,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_TOG, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,                           XXXXXXX,  KC_WH_D, KC_MS_U, XXXXXXX, XXXXXXX, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX, XXXXXXX, XXXXXXX, KC_BTN2, KC_BTN1, XXXXXXX,                            KC_BTN1,  KC_MS_L, XXXXXXX, KC_MS_R, KC_BTN2, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BTN3, XXXXXXX, _______,          _______, KC_BTN3, KC_WH_U,  KC_MS_D, XXXXXXX, XXXXXXX, XXXXXXX,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, TG(_MOUSE), TG(_MOUSE)
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),
};

