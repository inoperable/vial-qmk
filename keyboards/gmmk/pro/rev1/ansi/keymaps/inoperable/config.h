//
// Created by Patrick Jankun | p{at}jankun.org on 24/11/2021.
//
#include "config_common.h"

#pragma once
#define VIAL_KEYBOARD_UID \
    { 0x37, 0x63, 0x8A, 0x6F, 0x6C, 0x28, 0xC4, 0x66 }
#define VIAL_UNLOCK_COMBO_ROWS \
    { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS \
    { 0, 13 }

#define DRIVER_1_LED_TOTAL 66
#define DRIVER_2_LED_TOTAL 32
#define DRIVER_LED_TOTAL (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)

// enable RGB Matrix Effects for Vial
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES
#define RGB_DISABLE_WHEN_USB_SUSPENDED
#define RGB_DISABLE_TIMEOUT 180000

#ifndef VIAL_QMK_CONFIG_H
#    define VIAL_QMK_CONFIG_H
#endif  // VIAL_QMK_CONFIG_H

#define VIAL_COMBO_ENTRIES 32
#define COMBO_TERM 100

#define MACRO_TIMER 5
#define TAPPING_TOGGLE 3
#define DYNAMIC_KEYMAP_LAYER_COUNT 8
#define BACKLIGHT_BREATHING

// this is for macOS so keyboard can work after sleep

// #define NO_USB_STARTUP_CHECK
