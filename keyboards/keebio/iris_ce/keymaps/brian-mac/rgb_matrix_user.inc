// !!! DO NOT ADD #pragma once !!! //
// see https://docs.qmk.fm/features/rgb_matrix#custom-rgb-matrix-effects
// Step 1.
// Declare custom effects using the RGB_MATRIX_EFFECT macro
// (note the lack of semicolon after the macro!)
RGB_MATRIX_EFFECT(dynamic_effect)
RGB_MATRIX_EFFECT(mac_effect)
RGB_MATRIX_EFFECT(win_effect)
RGB_MATRIX_EFFECT(rhino_effect)
RGB_MATRIX_EFFECT(lower_mac_effect)
RGB_MATRIX_EFFECT(lower_win_effect)
RGB_MATRIX_EFFECT(raise_effect)
RGB_MATRIX_EFFECT(mouse_effect)


// Step 2.
// Define effects inside the `RGB_MATRIX_CUSTOM_EFFECT_IMPLS` ifdef block
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

bool layer_state_is(uint8_t layer);

#define RED (HSV){0,255,120}
#define CYN (HSV){127,140,80}
#define AZU (HSV){150,255,80}
#define YEL (HSV){43,255,120}
#define PNK (HSV){201,255,120}
#define GRN (HSV){106,255,120}
#define _o_ (HSV){43,180,100}
#define _v_ (HSV){1,1,1}
#define OFF (HSV){0,0,0}
#define ___ OFF


int KEY_LED_ROW_COL[5][14] =
{
    { 0, 2, 3, 5, 6, 8,-1,-1,42,40,39,37,36,34},
    {14,13,12,11,10, 9,-1,-1,43,44,45,46,47,48},
    {15,16,17,18,19,20,-1,-1,54,53,52,51,50,49},
    {26,25,24,23,22,21,33,67,55,56,57,58,59,60},
    {-1,-1,-1,-1,29,30,32,66,64,63,-1,-1,-1,-1}
};

int UNDER_LED_ROW_COL[2][6] =
{
    { 1, 4, 7,41,38,35},
    {27,28,31,65,62,61}
};

HSV _BASE[5][14] = {
    {_o_, _o_, _o_, _o_, _o_, _o_, ___,       ___, _o_, _o_, _o_, _o_, _o_, _o_},
    {_o_, _o_, _o_, _o_, _o_, _o_, ___,       ___, _o_, _o_, _o_, _o_, _o_, _o_},
    {_o_, _o_, _o_, _o_, YEL, _o_, ___,       ___, _o_, YEL, _o_, _o_, _o_, _o_},
    {_o_, _o_, _o_, _o_, _o_, _o_, _o_,       _o_, _o_, _o_, _o_, _o_, _o_, _o_},
    {___, ___, ___, ___, _o_, _o_, _o_,       _o_, _o_, _o_, ___, ___, ___, ___},
};
HSV _MAC[5][14] = {
    {_v_, CYN, _v_, _v_, _v_, _v_, ___,       ___, _v_, _v_, _v_, _v_, _v_, _v_},
    {_v_, _v_, _v_, _v_, _v_, _v_, ___,       ___, _v_, _v_, _v_, _v_, _v_, _v_},
    {_v_, _v_, _v_, _v_, _v_, _v_, ___,       ___, _v_, _v_, _v_, _v_, _v_, _v_},
    {_v_, _v_, _v_, _v_, _v_, _v_, _v_,       _v_, _v_, _v_, _v_, _v_, _v_, _v_},
    {___, ___, ___, ___, _v_, _v_, _v_,       _v_, _v_, _v_, ___, ___, ___, ___},
};
HSV _MAC_LOWER[5][14] = {
    {_v_, _v_, _v_, _v_, _v_, _v_, ___,       ___, _v_, _v_, _v_, _v_, _v_, _v_},
    {_v_, CYN, _v_, GRN, GRN, _v_, ___,       ___, _v_, _v_, _v_, _v_, _v_, _v_},
    {_v_, _v_, _v_, GRN, GRN, _v_, ___,       ___, _v_, _v_, _v_, _v_, _v_, _v_},
    {_v_, _v_, _v_, GRN, GRN, _v_, _v_,       _v_, _v_, _v_, _v_, _v_, _v_, _v_},
    {___, ___, ___, ___, _v_, _v_, _v_,       _v_, _v_, _v_, ___, ___, ___, ___},
};

static void rgb_matrix_set_hsv(uint8_t index, HSV hsv) {
    RGB rgb = hsv_to_rgb(hsv);
    rgb_matrix_set_color(index, rgb.r, rgb.g, rgb.b);
}

static void set_all_underglow(HSV color) {
    RGB rgb = hsv_to_rgb(color);
    for (int i = 0; i < 2; i++) {
        for (int j=0; j<6; j++) {
            if (UNDER_LED_ROW_COL[i][j] == -1) {
                continue;
            }
            rgb_matrix_set_color(UNDER_LED_ROW_COL[i][j], rgb.r, rgb.g, rgb.b);
        }
    }
}

// static void set_all_keys(HSV color) {
//     RGB rgb = hsv_to_rgb(color);
//     for (int i = 0; i < 5; i++) {
//         for (int j=0; j<14; j++) {
//             if (KEY_LED_ROW_COL[i][j] == -1) {
//                 continue;
//             }
//             rgb_matrix_set_color(KEY_LED_ROW_COL[i][j], rgb.r, rgb.g, rgb.b);
//         }
//     }
// }

// static bool light_one_raw(int index, int r, int g, int b) {
//     rgb_matrix_set_color_all(50,50,50);
//     rgb_matrix_set_color(index, r, g, b);
//     return false;
// }

static void apply_effect(HSV keys[5][14]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 14; j++) {
            if (KEY_LED_ROW_COL[i][j] == -1) {
                continue;
            }
            if (keys[i][j].h == 1 && keys[i][j].s == 1 && keys[i][j].v == 1) {
                continue;  // pass through
            }
            rgb_matrix_set_hsv(KEY_LED_ROW_COL[i][j], keys[i][j]);
        }
    }
}

static bool dynamic_effect(effect_params_t* params) {
    set_all_underglow(___);
    apply_effect(_BASE);
    if (layer_state_is(0)) {
        apply_effect(_MAC);
    }
    if (layer_state_is(3)) {
        apply_effect(_MAC_LOWER);
    }

    return false;
}

static bool mac_effect(effect_params_t* params) {
    set_all_underglow(___);
    apply_effect(_BASE);
    if (layer_state_is(0)) {
        apply_effect(_MAC);
    }
    if (layer_state_is(3)) {
        apply_effect(_MAC_LOWER);
    }

    return false;
}

static bool lower_mac_effect(effect_params_t* params) {
    set_all_underglow(___);
    HSV keys[5][14] = {
        {_o_, CYN, _o_, _o_, _o_, _o_, ___,       ___, _o_, _o_, _o_, _o_, _o_, _o_},
        {_o_, CYN, _o_, GRN, GRN, _o_, ___,       ___, _o_, _o_, _o_, _o_, _o_, _o_},
        {_o_, _o_, _o_, GRN, GRN, _o_, ___,       ___, _o_, YEL, _o_, _o_, _o_, _o_},
        {_o_, _o_, _o_, GRN, GRN, _o_, _o_,       _o_, _o_, _o_, _o_, _o_, _o_, _o_},
        {___, ___, ___, ___, _o_, _o_, _o_,       _o_, _o_, _o_, ___, ___, ___, ___},
    };
    apply_effect(keys);
    return false;
}

static bool win_effect(effect_params_t* params) {
    set_all_underglow(___);
    HSV keys[5][14] = {
        {_o_, _o_, PNK, _o_, _o_, _o_, ___,       ___, _o_, _o_, _o_, _o_, _o_, _o_},
        {_o_, _o_, _o_, _o_, _o_, _o_, ___,       ___, _o_, _o_, _o_, _o_, _o_, _o_},
        {_o_, _o_, _o_, _o_, YEL, _o_, ___,       ___, _o_, YEL, _o_, _o_, _o_, _o_},
        {_o_, _o_, _o_, _o_, _o_, _o_, _o_,       _o_, _o_, _o_, _o_, _o_, _o_, _o_},
        {___, ___, ___, ___, _o_, _o_, _o_,       _o_, _o_, _o_, ___, ___, ___, ___},
    };
    apply_effect(keys);
    return false;
}

static bool lower_win_effect(effect_params_t* params) {
    set_all_underglow(___);
    HSV keys[5][14] = {
        {_o_, _o_, PNK, _o_, _o_, _o_, ___,       ___, _o_, _o_, _o_, _o_, _o_, _o_},
        {_o_, _o_, PNK, _o_, _o_, _o_, ___,       ___, _o_, _o_, _o_, _o_, _o_, _o_},
        {_o_, _o_, _o_, _o_, YEL, _o_, ___,       ___, _o_, YEL, _o_, _o_, _o_, _o_},
        {_o_, _o_, _o_, _o_, _o_, _o_, _o_,       _o_, _o_, _o_, _o_, _o_, _o_, _o_},
        {___, ___, ___, ___, _o_, _o_, _o_,       _o_, _o_, _o_, ___, ___, ___, ___},
    };
    apply_effect(keys);
    return false;
}

static bool raise_effect(effect_params_t* params) {
    set_all_underglow(___);
    HSV keys[5][14] = {
        {_o_, _o_, _o_, YEL, _o_, _o_, ___,       ___, _o_, _o_, _o_, _o_, _o_, _o_},
        {_o_, _o_, _o_, _o_, _o_, _o_, ___,       ___, _o_, _o_, _o_, _o_, _o_, _o_},
        {_o_, _o_, _o_, _o_, YEL, _o_, ___,       ___, _o_, YEL, _o_, _o_, _o_, _o_},
        {_o_, _o_, _o_, _o_, _o_, _o_, _o_,       _o_, _o_, _o_, _o_, _o_, _o_, _o_},
        {___, ___, ___, ___, _o_, _o_, _o_,       _o_, _o_, _o_, ___, ___, ___, ___},
    };
    apply_effect(keys);
    return false;
}

static bool rhino_effect(effect_params_t* params) {
    set_all_underglow(___);
    HSV keys[5][14] = {
        {_o_, _o_, _o_, RED, _o_, _o_, ___,       ___, _o_, _o_, _o_, _o_, _o_, _o_},
        {_o_, _o_, _o_, _o_, _o_, _o_, ___,       ___, _o_, _o_, _o_, _o_, _o_, _o_},
        {_o_, _o_, _o_, _o_, YEL, _o_, ___,       ___, _o_, YEL, _o_, _o_, _o_, _o_},
        {_o_, _o_, _o_, _o_, _o_, _o_, _o_,       _o_, _o_, _o_, _o_, _o_, _o_, _o_},
        {___, ___, ___, ___, _o_, _o_, _o_,       _o_, _o_, _o_, ___, ___, ___, ___},
    };
    apply_effect(keys);
    return false;
}

// Trying to drive all LEDs at high brightness will cause a brownout
// 500ma max draw over usb. The LEDs draw more than that. 2


static bool mouse_effect(effect_params_t* params) {
    set_all_underglow(___);
    HSV keys[5][14] = {
        {_o_, _o_, _o_, _o_, _o_, _o_, ___,       ___, _o_, _o_, _o_, _o_, _o_, _o_},
        {_o_, _o_, _o_, _o_, _o_, _o_, ___,       ___, _o_, _o_, AZU, _o_, _o_, _o_},
        {_o_, _o_, _o_, AZU, AZU, _o_, ___,       ___, _o_, AZU, AZU, AZU, _o_, _o_},
        {_o_, _o_, _o_, _o_, _o_, _o_, _o_,       _o_, _o_, _o_, _o_, _o_, _o_, _o_},
        {___, ___, ___, ___, _o_, _o_, _o_,       _o_, _o_, _o_, ___, ___, ___, ___},
    };
    apply_effect(keys);
    return false;
}



// static bool hue_effect(effect_params_t* params) {
//     int led_count = 68;
//     double_t step = 255.0 / led_count;
//     for (int i = 0; i < led_count; i++) {
//         HSV hsv = {i * step, 255, 120};
//         RGB rgb = hsv_to_rgb(hsv);
//         rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
//     }

//     return false;
// }

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
