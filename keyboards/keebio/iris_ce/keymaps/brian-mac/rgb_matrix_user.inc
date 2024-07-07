// !!! DO NOT ADD #pragma once !!! //
// see https://docs.qmk.fm/features/rgb_matrix#custom-rgb-matrix-effects
// Step 1.
// Declare custom effects using the RGB_MATRIX_EFFECT macro
// (note the lack of semicolon after the macro!)
RGB_MATRIX_EFFECT(dynamic_effect)



// Step 2.
// Define effects inside the `RGB_MATRIX_CUSTOM_EFFECT_IMPLS` ifdef block
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS
#include "layers.h"

bool layer_state_is(uint8_t layer);

#define RED (HSV){0,255,120}
#define CYN (HSV){127,140,80}
#define AZU (HSV){150,255,80}
#define YEL (HSV){43,255,120}
#define PNK (HSV){201,255,120}
#define LPK (HSV){201,50,90}

#define GRN (HSV){106,255,120}
#define PUR (HSV){175,140,80}
#define DRD (HSV){0,120,80}
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

HSV LIGHTING[][5][14] = {
    [_MAC] = {
        {_v_, CYN, _v_, _v_, _v_, _v_, ___,       ___, _v_, _v_, _v_, _v_, _v_, _v_},
        {_v_, _v_, _v_, _v_, _v_, _v_, ___,       ___, _v_, _v_, _v_, _v_, _v_, _v_},
        {_v_, _v_, _v_, _v_, _v_, _v_, ___,       ___, _v_, _v_, _v_, _v_, _v_, _v_},
        {_v_, _v_, _v_, _v_, _v_, _v_, _v_,       _v_, _v_, _v_, _v_, _v_, _v_, _v_},
        {___, ___, ___, ___, _v_, _v_, _v_,       _v_, _v_, _v_, ___, ___, ___, ___},
    },
    [_WIN] = {
        {_v_, _v_, CYN, _v_, _v_, _v_, ___,       ___, _v_, _v_, _v_, _v_, _v_, _v_},
        {_v_, _v_, _v_, _v_, _v_, _v_, ___,       ___, _v_, _v_, _v_, _v_, _v_, _v_},
        {_v_, _v_, _v_, _v_, _v_, _v_, ___,       ___, _v_, _v_, _v_, _v_, _v_, _v_},
        {_v_, _v_, _v_, _v_, _v_, _v_, _v_,       _v_, _v_, _v_, _v_, _v_, _v_, _v_},
        {___, ___, ___, ___, _v_, _v_, _v_,       _v_, _v_, _v_, ___, ___, ___, ___},
    },
    [_RHINO] = {
        {_v_, _v_, _v_, CYN, _v_, _v_, ___,       ___, _v_, _v_, _v_, _v_, _v_, _v_},
        {_v_, _v_, _v_, _v_, _v_, _v_, ___,       ___, _v_, _v_, _v_, _v_, _v_, _v_},
        {_v_, _v_, _v_, _v_, _v_, _v_, ___,       ___, _v_, _v_, _v_, _v_, _v_, _v_},
        {_v_, _v_, _v_, _v_, _v_, _v_, _v_,       _v_, _v_, _v_, _v_, _v_, _v_, _v_},
        {___, ___, ___, ___, _v_, _v_, _v_,       _v_, _v_, _v_, ___, ___, ___, ___},
    },
    [_LOWER] = {
        {_v_, _v_, _v_, GRN, GRN, _v_, ___,       ___, _v_, _v_, _v_, _v_, _v_, PUR},
        {_v_, _v_, _v_, PUR, PUR, _v_, ___,       ___, _v_, _v_, GRN, PUR, _v_, _v_},
        {_v_, _v_, _v_, DRD, DRD, _v_, ___,       ___, _v_, GRN, ___, GRN, _v_, _v_},
        {_v_, YEL, YEL, YEL, YEL, _v_, _v_,       _v_, _v_, _v_, GRN, PUR, _v_, _v_},
        {___, ___, ___, ___, _v_, _v_, _v_,       _v_, _v_, _v_, ___, ___, ___, ___},
    },
    [_WIN_LOWER] = {
        {_v_, _v_, _v_, GRN, GRN, _v_, ___,       ___, _v_, _v_, _v_, _v_, _v_, PUR},
        {_v_, _v_, _v_, PUR, PUR, _v_, ___,       ___, _v_, _v_, GRN, PUR, _v_, _v_},
        {_v_, _v_, _v_, DRD, DRD, _v_, ___,       ___, _v_, GRN, ___, GRN, _v_, _v_},
        {_v_, YEL, YEL, YEL, YEL, _v_, _v_,       _v_, _v_, _v_, GRN, PUR, _v_, _v_},
        {___, ___, ___, ___, _v_, _v_, _v_,       _v_, _v_, _v_, ___, ___, ___, ___},
    },
    [_RAISE] = {
        {LPK, LPK, LPK, LPK, LPK, LPK, ___,       ___, LPK, LPK, LPK, LPK, LPK, LPK},
        {_v_, _v_, _v_, _v_, _v_, _v_, ___,       ___, _v_, CYN, CYN, CYN, _v_, _v_},
        {_v_, _v_, _v_, GRN, _v_, _v_, ___,       ___, _v_, CYN, CYN, CYN, _v_, _v_},
        {_v_, _v_, _v_, RED, _v_, _v_, _v_,       _v_, _v_, CYN, CYN, CYN, _v_, _v_},
        {___, ___, ___, ___, _v_, _v_, _v_,       _v_, _v_, CYN, ___, ___, ___, ___},
    },
    [_MOUSE] = {
        {_v_, _v_, _v_, _v_, _v_, _v_, ___,       ___, _v_, _v_, _v_, _v_, _v_, _v_},
        {_v_, _v_, _v_, _v_, _v_, _v_, ___,       ___, _v_, _v_, CYN, ___, ___, ___},
        {_v_, _v_, _v_, CYN, CYN, _v_, ___,       ___, _v_, CYN, ___, CYN, ___, ___},
        {_v_, _v_, _v_, _v_, _v_, _v_, _v_,       _v_, _v_, _v_, CYN, ___, ___, ___},
        {___, ___, ___, ___, _v_, _v_, _v_,       _v_, _v_, _v_, ___, ___, ___, ___},
    },
    [_FUNC] = {
        {LPK, LPK, LPK, LPK, LPK, LPK, ___,       ___, LPK, LPK, LPK, LPK, LPK, LPK},
        {_v_, _v_, _v_, _v_, _v_, _v_, ___,       ___, _v_, _v_, _v_, _v_, _v_, _v_},
        {_v_, _v_, _v_, _v_, _v_, _v_, ___,       ___, _v_, _v_, _v_, _v_, _v_, _v_},
        {_v_, _v_, _v_, _v_, _v_, _v_, _v_,       _v_, _v_, _v_, _v_, _v_, _v_, _v_},
        {___, ___, ___, ___, _v_, _v_, _v_,       _v_, _v_, _v_, ___, ___, ___, ___},
    },

};

HSV _BASE[5][14] = {
    {_o_, _o_, _o_, _o_, _o_, _o_, ___,       ___, _o_, _o_, _o_, _o_, _o_, _o_},
    {_o_, _o_, _o_, _o_, _o_, _o_, ___,       ___, _o_, _o_, _o_, _o_, _o_, _o_},
    {_o_, _o_, _o_, _o_, YEL, _o_, ___,       ___, _o_, YEL, _o_, _o_, _o_, _o_},
    {_o_, _o_, _o_, _o_, _o_, _o_, _o_,       _o_, _o_, _o_, _o_, _o_, _o_, _o_},
    {___, ___, ___, ___, _o_, _o_, _o_,       _o_, _o_, _o_, ___, ___, ___, ___},
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

    HSV values[5][14] = {0};
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 14; j++) {
           values[i][j] = _BASE[i][j];
        }
    }

    for (int layer=0; layer <= 8; layer++) {
        if (layer_state_is(layer)) {
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 14; j++) {
                    if (LIGHTING[layer][i][j].h == 1 && LIGHTING[layer][i][j].s == 1 && LIGHTING[layer][i][j].v == 1) {
                        continue;  // pass through
                    }
                    else if (layer == _FUNC) {

                        HSV existing = values[i][j];
                        HSV blend = LIGHTING[layer][i][j];

                        if (existing.h == _o_.h && existing.s == _o_.s && existing.v == _o_.v) {
                            values[i][j] = blend;
                        }
                    }
                    else {
                        values[i][j] = LIGHTING[layer][i][j];
                    }
                }
            }
        }
    }

    apply_effect(values);
    return false;
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
