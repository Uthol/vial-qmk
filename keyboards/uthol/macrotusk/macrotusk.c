#include "quantum.h"

#if defined(RGB_MATRIX_ENABLE)
led_config_t g_led_config = {
    // Key Matrix to LED Index
    {
        {  0,  1,  2,  3},
        {  4,  5,  6,  7},
        {  8,  9, 10, 11},
        { 12, 13, 14, 15},
        { 16, 17, 18, 19}
    },

    // LED Index to Physical Position

// LED Index to Physical Position
    {
        {  0,  0}, { 56,  0}, {112,  0}, {168,  0},
        {  0, 32}, { 56, 32}, {112, 32}, {168, 32},
        {  0, 64}, { 56, 64}, {112, 64}, {168, 64},
        {  0, 96}, { 56, 96}, {112, 96}, {168, 96},
        {224, 64}, {112, 64}, {112, 32}, {112,  0}
    },

    // LED Index to Flag
    {
        1, 4, 4, 4,
        1, 4, 4, 4,
        1, 4, 4, 4,
        1, 1, 1, 1,
        2, 2, 2, 2
    }
};

void suspend_power_down_kb(void) {
    rgb_matrix_set_suspend_state(true);
    suspend_power_down_user();
}

void suspend_wakeup_init_kb(void) {
    rgb_matrix_set_suspend_state(false);
    suspend_wakeup_init_user();
}
#endif
