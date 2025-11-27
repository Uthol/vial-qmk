// Copyright 2023 uthol (@uthol)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// WS2812 RGB LED strip input and number of LEDs

#define WS2812_PWM_DRIVER   PWMD2
#define WS2812_PWM_CHANNEL  2
#define WS2812_PWM_PAL_MODE 1
#define WS2812_DMA_STREAM   STM32_DMA1_STREAM7
#define WS2812_DMA_CHANNEL  3


#define DIP_SWITCH_PINS { B3 }
