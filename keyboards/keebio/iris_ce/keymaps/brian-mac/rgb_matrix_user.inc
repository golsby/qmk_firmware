// !!! DO NOT ADD #pragma once !!! //
// see https://docs.qmk.fm/features/rgb_matrix#custom-rgb-matrix-effects
// Step 1.
// Declare custom effects using the RGB_MATRIX_EFFECT macro
// (note the lack of semicolon after the macro!)
RGB_MATRIX_EFFECT(layer_1_effect)
RGB_MATRIX_EFFECT(layer_2_effect)
RGB_MATRIX_EFFECT(layer_3_effect)

// Step 2.
// Define effects inside the `RGB_MATRIX_CUSTOM_EFFECT_IMPLS` ifdef block
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static int top_row[] = {0, 2, 3, 5, 6, 8};

static bool light_one(int index, int r, int g, int b) {
    rgb_matrix_set_color_all(50,50,50);
    rgb_matrix_set_color(top_row[index], r, g, b);
    return false;
}

static bool layer_1_effect(effect_params_t* params) {
    return light_one(1, 0, 255, 255);
}

static bool layer_2_effect(effect_params_t* params) {
    return light_one(2, 255, 0, 255);
}

static bool layer_3_effect(effect_params_t* params) {
    return light_one(3, 255, 0, 0);
}

// // e.g: A more complex effect, relying on external methods and
// // state, with dedicated init and run methods
// static uint8_t some_global_state;
// static void my_cool_effect2_complex_init(effect_params_t* params) {
//   some_global_state = 1;
// }
// static bool my_cool_effect2_complex_run(effect_params_t* params) {
//   RGB_MATRIX_USE_LIMITS(led_min, led_max);
//   for (uint8_t i = led_min; i < led_max; i++) {
//     rgb_matrix_set_color(i, 0xff, some_global_state++, 0xff);
//   }
//   return rgb_matrix_check_finished_leds(led_max);
// }
// static bool my_cool_effect2(effect_params_t* params) {
//   if (params->init) my_cool_effect2_complex_init(params);
//   return my_cool_effect2_complex_run(params);
// }

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
