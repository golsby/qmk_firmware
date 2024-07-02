// !!! DO NOT ADD #pragma once !!! //
// see https://docs.qmk.fm/features/rgb_matrix#custom-rgb-matrix-effects
// Step 1.
// Declare custom effects using the RGB_MATRIX_EFFECT macro
// (note the lack of semicolon after the macro!)
RGB_MATRIX_EFFECT(layer_1_effect)
RGB_MATRIX_EFFECT(layer_2_effect)
RGB_MATRIX_EFFECT(layer_3_effect)
RGB_MATRIX_EFFECT(hue_effect)

// Step 2.
// Define effects inside the `RGB_MATRIX_CUSTOM_EFFECT_IMPLS` ifdef block
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static int top_row[] = {0, 2, 3, 5, 6, 8};

static bool light_one(int index, int r, int g, int b) {
    rgb_matrix_set_color_all(30,30,30);
    rgb_matrix_set_color(top_row[index], r, g, b);
    return false;
}

// static bool light_one_raw(int index, int r, int g, int b) {
//     rgb_matrix_set_color_all(50,50,50);
//     rgb_matrix_set_color(index, r, g, b);
//     return false;
// }

static bool layer_1_effect(effect_params_t* params) {
    return light_one(1, 0, 255, 255);
}

static bool layer_2_effect(effect_params_t* params) {
    return light_one(2, 255, 0, 255);
}

static bool layer_3_effect(effect_params_t* params) {
    return light_one(3, 255, 0, 0);
}

// Trying to drive all LEDs at high brightness will cause a brownout
// 500ma max draw over usb. The LEDs draw more than that. 2
#define RED 120,0,0
#define CYAN 0,120,120

static bool hue_effect(effect_params_t* params) {
    rgb_matrix_set_color_all(30,30,30);
    rgb_matrix_set_color(0, RED);
    rgb_matrix_set_color(14, RED);
    rgb_matrix_set_color(15, RED);
    rgb_matrix_set_color(25, RED);
    rgb_matrix_set_color(45, CYAN);
    rgb_matrix_set_color(52, CYAN);
    rgb_matrix_set_color(53, CYAN);
    rgb_matrix_set_color(51, CYAN);

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
