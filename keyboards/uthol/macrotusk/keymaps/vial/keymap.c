#include QMK_KEYBOARD_H


enum uthol_layers { _DEFAULT, _RAISE };

#define DEFAULT DF(_DEFAULT)
#define RAISE MO(_RAISE)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_DEFAULT] = LAYOUT_ortho_5x4(
			KC_NUM,  RAISE,   KC_PAST, KC_PPLS,
			KC_P7,   KC_P8,   KC_P9,   KC_PAST,
			KC_P4,   KC_P5,   KC_P6,   KC_PSLS,
			KC_P1,   KC_P2,   KC_P3,   KC_PMNS,
			KC_PEQL, KC_P0,   KC_PDOT, KC_PENT
    ),

    [_RAISE] = LAYOUT_ortho_5x4(
			KC_TRNS, KC_TRNS, RGB_TOG, RGB_M_P,
			KC_TRNS, KC_TRNS, RGB_MOD, RGB_RMOD,
			KC_TRNS, KC_TRNS, RGB_HUI, RGB_HUD,
			KC_TRNS, KC_TRNS, RGB_SAI, RGB_SAD,
			QK_BOOT, KC_TRNS, RGB_VAI, RGB_VAD
    )
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_DEFAULT] = {ENCODER_CCW_CW(KC_MNXT, KC_MPRV)},
    [_RAISE] = {ENCODER_CCW_CW(KC_VOLU, KC_VOLD)},
};

bool dip_switch_update_user(uint8_t index, bool active) {
    switch (index) {
        case 0:
            if(active) { tap_code(KC_MPLY); } else {  }
            break;
    }
    return true;
}
