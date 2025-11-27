// Copyright 2023 uthol (@uthol)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

// OLED config
#define OLED_DISPLAY_128X64
#define OLED_DISPLAY_WIDTH 128
#define OLED_DISPLAY_HEIGHT 64
#define OLED_UPDATE_INTERVAL 0
#define OLED_BRIGHTNESS 255
#define OLED_DISPLAY_ADDRESS 0x3C
#define OLED_RESET -1
