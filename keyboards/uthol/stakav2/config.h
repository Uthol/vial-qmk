// Copyright 2022 uthol (@uthol)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define MATRIX_ROWS 8
#define MATRIX_COLS 6

#define DIRECT_PINS {{B12, B13, B14, B15, B10, A8}, \
                     {B1, B0, B8, A7, B9, A6}, \
                     {A15, A5, A4, B3, A3, B4}, \
                     { A2 ,B5, A1, A0,  NO_PIN}}
#define DIRECT_PINS_RIGHT {{A8, B10, B15, B14, B13, B12}, \
                           {A6, B9, A7, B8, B0, B1}, \
                           { B4, A3, B3, A4, A5, A15}, \
                           {A0 ,A1,  B5, A2, NO_PIN}}

#define SERIAL_USART_FULL_DUPLEX  // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN A9
#define SERIAL_USART_RX_PIN A10
#define SERIAL_USART_DRIVER SD1



// // Encoder config
#define ENCODERS_PAD_A { A13 }
#define ENCODERS_PAD_B { A14 }
#define ENCODER_RESOLUTION 4

/* Top left key on left half */
#define BOOTMAGIC_LITE_ROW    0
#define BOOTMAGIC_LITE_COLUMN 0
/* Top right key on right half */
#define BOOTMAGIC_LITE_ROW_RIGHT    4
#define BOOTMAGIC_LITE_COLUMN_RIGHT 5

// // OLED config
#define OLED_DISPLAY_128X64
#define OLED_DISPLAY_WIDTH 128
#define OLED_DISPLAY_HEIGHT 64
#define OLED_UPDATE_INTERVAL 0
#define OLED_BRIGHTNESS 255
#define OLED_DISPLAY_ADDRESS 0x3C
#define OLED_RESET -1

// /* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

// /* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
// #define LOCKING_SUPPORT_ENABLE
// /* Locking resynchronize hack */
// #define LOCKING_RESYNC_ENABLE

#define TAPPING_TERM 500

#define RGBLIGHT_SLEEP
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT
#define RGBLIGHT_DEFAULT_VAL 0