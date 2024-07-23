
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
