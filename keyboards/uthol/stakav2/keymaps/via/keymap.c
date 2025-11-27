#include QMK_KEYBOARD_H
#ifdef OLED_ENABLE
#    include "helix.h"
#endif
enum uthol_layers { _QWERTY, _COLEMAK, _LOWER, _RAISE, _SETTINGS };

#define COLEMAK DF(_COLEMAK)
#define QWERTY DF(_QWERTY)
#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define SETTINGS MO(_SETTINGS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


        [_QWERTY] = LAYOUT_split_3x6_4(
    //|,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ESC,
    //|--------+--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------+--------|
                                    KC_LGUI, LOWER,   KC_SPC, KC_MPLY,     SETTINGS, KC_ENT,   RAISE, KC_RALT
                                //`--------------------------------'     `--------------------------------'
    ),

     [_COLEMAK] = LAYOUT_split_3x6_4(
    //|,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                         KC_J,    KC_L,    KC_U,  KC_Y,   KC_SCLN,KC_BSPC,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                         KC_M,    KC_N,    KC_E,  KC_I,   KC_O,     KC_QUOT,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                         KC_K,    KC_H, KC_COMM,  KC_DOT, KC_SLSH,  KC_ESC,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                   KC_LGUI, LOWER,   KC_SPC, KC_MPLY,     SETTINGS, KC_ENT,   RAISE, KC_RALT
                                //`--------------------------------'     `--------------------------------'
     ),
     [_LOWER] = LAYOUT_split_3x6_4(
    //|,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_1,    KC_2,  KC_3,    KC_4,    KC_5,                          KC_6,    KC_7,    KC_8,    KC_9,   KC_0,    KC_DEL,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_LSFT,   KC_F1,  KC_F2,  KC_F3,   KC_F4,   KC_F5,                         KC_LEFT, KC_DOWN, KC_UP, KC_RGHT,  KC_TRNS, KC_F10,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_LCTL,   KC_F6,  KC_F7,  KC_F8,   KC_F9,   KC_F10,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS, KC_F11,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                    KC_LGUI, LOWER,   KC_SPC, KC_MPLY,     SETTINGS, KC_ENT,   RAISE, KC_RALT
                                //`--------------------------------'     `--------------------------------'
    ),
     [_RAISE] = LAYOUT_split_3x6_4(
    //|,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, KC_HOME, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                    KC_LGUI, LOWER,   KC_SPC, KC_MPLY,     SETTINGS, KC_ENT,   RAISE, KC_RALT
                                //`--------------------------------'     `--------------------------------'
    ),
     [_SETTINGS] = LAYOUT_split_3x6_4(
    //|,-----------------------------------------------------.                    ,-----------------------------------------------------.
       QWERTY, COLEMAK, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_PWR, KC_SLEP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                       KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_LSFT,KC_TRNS, KC_TRNS, KC_CAPS, KC_TRNS, KC_TRNS,                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                    KC_LGUI, LOWER,   KC_SPC, KC_MPLY,     SETTINGS, KC_ENT,   RAISE, KC_RALT
                                //`--------------------------------'     `--------------------------------'
     )
};
#ifdef OLED_ENABLE
#    define ANIM_SIZE 1024          // number of bytes in array, minimize for adequate firmware size, max is 1024
#    define ANIM_FRAMES 50          // Number of frames
#    define ANIM_FRAME_DURATION 160 // How long each frame lasts in ms

uint32_t anim_timer         = 0;
uint32_t anim_sleep         = 0;
uint8_t  current_idle_frame = 0;

static void render_anim(void) {
    // assumes 1 frame prep stage
    void animation_phase(void) {
        current_idle_frame = (current_idle_frame + 1) % ANIM_FRAMES;
        oled_write_raw_P(animation[abs((ANIM_FRAMES - 1) - current_idle_frame)], ANIM_SIZE);
    }
    if (get_current_wpm() != 000) {
        oled_on();
        if (timer_elapsed32(anim_timer) > ANIM_FRAME_DURATION) {
            anim_timer = timer_read32();
            animation_phase();
        }
        anim_sleep = timer_read32();
    } else {
        if (timer_elapsed32(anim_sleep) > OLED_TIMEOUT) {
            oled_off();
        } else {
            if (timer_elapsed32(anim_timer) > ANIM_FRAME_DURATION) {
                anim_timer = timer_read32();
                animation_phase();
            }
        }
    }
}

// Used to draw on to the oled screen
bool oled_task_user(void) {
    render_anim();
    oled_write_P(PSTR("Layer:"), false);
    switch (get_highest_layer(layer_state | default_layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("QWERTY\n"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("Lower\n"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("Raise\n"), false);
            break;
        case _COLEMAK:
            oled_write_P(PSTR("Colemak\n"), false);
            break;
        case _SETTINGS:
            oled_write_P(PSTR("Settings\n"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undefined"), false);
    }
    oled_write_P(PSTR("WPM: "), false);
    oled_write(get_u8_str(get_current_wpm(), '0'), false);

    return false;
}
#endif
#ifdef ENCODER_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_QWERTY] = {ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_PAGE_UP, KC_PAGE_DOWN)}, 
    [_COLEMAK] = {ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_PAGE_UP, KC_PAGE_DOWN)}, 
    [_LOWER] = {ENCODER_CCW_CW(KC_MNXT, KC_MPRV), ENCODER_CCW_CW(KC_MNXT, KC_MPRV)}, 
    [_RAISE] = {ENCODER_CCW_CW(KC_MNXT, KC_MPRV), ENCODER_CCW_CW(KC_MNXT, KC_MPRV)}, 
    [_SETTINGS] = {ENCODER_CCW_CW(KC_VOLU, KC_VOLD), ENCODER_CCW_CW(KC_VOLU, KC_VOLD)},
};
#endif
