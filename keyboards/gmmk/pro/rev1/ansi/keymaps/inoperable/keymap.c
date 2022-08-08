/* Copyright 2021 Glorious, LLC <salman@pcgamingrace.com>
   This program is free software: you can redistribute it and/or modify

   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
   */

#include QMK_KEYBOARD_H

// clang-format off

//          ANSI physical layout
//          ESC             F1              F2              F3              F4              F5              F6              F7              F8              F9              F10                 F11             F12	            Prt                     Rotary(Mute)
//          ~               1               2               3               4               5               6               7               8               9               0                    -              (=)	            BackSpc                 Del
//          Tab             Q               W               E               R               T               Y               U               I               O               P                   [               ]               \                       PgUp
//          Caps            A               S               D               F               G               H               J               K               L               ;                   "                               Enter                   PgDn
//          Sh_L                            Z               X               C               V               B               N               M               ,               .                   ?                               Sh_R        Up          End
//          Ct_L            Win_L           Alt_L                                                           SPACE                                                           Alt_R               FN              Ct_R            Left        Down        Right
//
//          ANSI default keymap
//          KC_ESC,         KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,             KC_F11,         KC_F12,         KC_PSCR,                KC_MUTE,
//          KC_GRV,         KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,               KC_MINS,        KC_EQL,         KC_BSPC,                KC_DEL,
//          KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,               KC_LBRC,        KC_RBRC,        KC_BSLS,                KC_PGUP,
//          KC_CAPS,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,            KC_QUOT,                        KC_ENT,                 KC_PGDN,
//          KC_LSFT,                        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_N,           KC_M,           KC_COMM,        KC_DOT,             KC_SLSH,                        KC_RSFT,    KC_UP,      KC_END,
//          KC_LCTL,        KC_LGUI,        KC_LALT,                                                        KC_SPC,                                                         KC_RALT,            MO(1),          KC_RCTL,        KC_LEFT,    KC_DOWN,    KC_RGHT


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
            // customized base layer
            LT(4,KC_ESC),   KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,             KC_F11,         KC_F12,         LT(5,KC_DEL),           KC_MUTE,
            TD(3),          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,               KC_MINS,        KC_EQL,         KC_BSPC,                KC_PGUP,
            TD(4),          KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,               KC_LBRC,        KC_RBRC,        TD(9),                  KC_PGDN,
            LT(1,KC_ESC),   KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_H,           KC_J,           KC_K,           KC_L,           TD(1),              TD(2),                          KC_ENT,                 KC_HOME,
            KC_LSFT,                        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_N,           KC_M,           KC_COMM,        KC_DOT,             KC_SLSH,                        KC_RSFT,    KC_UP,      KC_END,
            KC_LCTL,        KC_LGUI,        KC_LALT,                                                        KC_SPC,                                                         RCTL_T(KC_BSPC),    KC_RALT,        LT(2, KC_RGUI), KC_LEFT,    KC_DOWN,    KC_RGHT
    ),

            // vimkeys and extras for quick browser use, hold CAPS to keep active, tap CAPS to press ESC
    [1] = LAYOUT(
            RESET,          KC_F13,         KC_F14,         KC_F15,         KC_F16,         KC_MRWD,        KC_MFFD,        KC_MSTP,        KC_MPLY,        KC_MPRV,        KC_MNXT,            KC_LSCR,        KC_NUM,         KC_CAPS,                KC_EJCT,
            KC_MYCM,        KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_SLASH,    _______,        _______,        KC_SLCT,        KC_STOP,        KC_FIND,        KC_CUT,             KC_COPY,        KC_PSTE,        KC_WHOM,                KC_INSERT,
            _______,        KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_ASTERISK, _______,        KC_END,         KC_PGDOWN,      KC_PGUP,        KC_HOME,        _______,            KC_WBAK,        KC_WFWD,        KC_WREF,                KC_SCRL,
            _______,        KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_MINUS,    _______,        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       RCS(KC_LBRC),       RCS(KC_RBRC),                   KC_EXEC,                KC_PAUSE,
            _______,                        KC_KP_0,        KC_KP_DOT,      KC_KP_ENTER,    KC_KP_PLUS,     _______,        _______,        KC_UNDO,        KC_AGIN,        LCTL(KC_PGUP),      LCTL(KC_PGDN),                  USER00,     RGB_MOD,    KC_PSCREEN,
            _______,        _______,        _______,                                                        _______,                                                        _______,            KC_APP,         _______,        RGB_SPD,    RGB_RMOD,   RGB_SPI
    ),

    [2] = LAYOUT(
            // rgb lightning and effects, double-tap-hold TAB to keep active, wipe saved settings with EEPROM_RESET on ESC
            EEP_RST,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,        _______,        KC_SLEP,                 KC_PWR,
            _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,        _______,        KC_WAKE,                _______,
            _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,        _______,        _______,                _______,
            _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,                        _______,                _______,
            _______,                        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,                        _______,    _______,    _______,
            _______,        _______,        _______,                                                        _______,                                                        _______,            _______,        _______,        _______,    _______,    _______
    ),
            // system and power, reboot, suspend, shutdown, wake with dedicated keys or macros on every os (macos/linux/win), hold ESC to keep active
    [3] = LAYOUT(
            _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,        _______,        _______,                _______,
            _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,        _______,        _______,                _______,
            _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,        _______,        _______,                _______,
            _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,                        _______,                _______,
            _______,                        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,                        _______,    _______,    _______,
            _______,        _______,        _______,                                                        _______,                                                        _______,            _______,        _______,        _______,    _______,    _______
    ),
            // toggable dworak layout, hold DEL to keep active, double DEL to toggle, tripple tap DEL to reset to default
    [4] = LAYOUT(
            _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,        _______,        _______,                _______,
            _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,        _______,        _______,                _______,
            _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,        _______,        _______,                _______,
            _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,                        _______,                _______,
            _______,                        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,                        _______,    _______,    _______,
            _______,        _______,        _______,                                                        _______,                                                        _______,            _______,        _______,        _______,    _______,    _______
    ),

            // toggable colemak layout, hold DEL to keep active, double DEL to toggle, tripple tap DEL to reset to default
    [5] = LAYOUT(
            _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,        _______,        _______,                _______,
            _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,        _______,        _______,                _______,
            _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,        _______,        _______,                _______,
            _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,                        _______,                _______,
            _______,                        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,                        _______,    _______,    _______,
            _______,        _______,        _______,                                                        _______,                                                        _______,            _______,        _______,        _______,    _______,    _______
    ),

            // toggable workman layout, hold DEL to keep active, double DEL to toggle, tripple tap DEL to reset to default
    [6] = LAYOUT(
            _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,        _______,        _______,                _______,
            _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,        _______,        _______,                _______,
            _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,        _______,        _______,                _______,
            _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,                        _______,                _______,
            _______,                        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,                        _______,    _______,    _______,
            _______,        _______,        _______,                                                        _______,                                                        _______,            _______,        _______,        _______,    _______,    _______
    ),
            // toggable ansi layout, hold DEL to keep active, double DEL to toggle, tripple tap DEL to reset to default
    [7] = LAYOUT(
            _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,        _______,        _______,                _______,
            _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,        _______,        _______,                _______,
            _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,        _______,        _______,                _______,
            _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,                        _______,                _______,
            _______,                        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,        _______,            _______,                        _______,    _______,    _______,
            _______,        _______,        _______,                                                        _______,                                                        _______,            _______,        _______,        _______,    _______,    _______
    ),

};

bool encoder_update_user(uint8_t index, bool clockwise) {
    uint8_t mods_state = get_mods();
    if (index == 0) {
        // encoder + ctrl + shift: saturation
        if ((mods_state & MOD_MASK_CTRL) && (mods_state & MOD_MASK_SHIFT) && (layer_state_is(0))) {
            // uprintf("EC CTRL+SHIFT dir: %b, idx: %u, mod: %u\n",clockwise,index,mods_state);
            if(clockwise) rgb_matrix_increase_sat(); else rgb_matrix_decrease_sat();
            return false;
        }
        // encoder + alt + shift: volume + shift
        else if ((mods_state & MOD_MASK_ALT) && (mods_state & MOD_MASK_SHIFT)&& (layer_state_is(0))) {
            //uprintf("EC LALT+LSFT  dir: %b, idx: %u, mod: %u\n",clockwise,index,mods_state);
            if(clockwise) {
                rgb_matrix_increase_val();
            } else {
                rgb_matrix_decrease_val();
            }
            return false;
        }
        // encoder + shift: brightness
        else if (mods_state & MOD_MASK_SHIFT&& (layer_state_is(0))) {
            //blink_pgup_led();
            // uprintf("EC SHIFT      dir: %b, idx: %u, mod: %u\n",clockwise,index,mods_state);
            if(clockwise) {
                rgb_matrix_increase_val();
            } else {
                rgb_matrix_decrease_val();
            }
            return false;
        }
        // enocder + alt: hue
        else if (mods_state & MOD_MASK_ALT&& (layer_state_is(0))) {
            // uprintf("EC ALT        dir: %b, idx: %u, mod: %u\n",clockwise,index,mods_state);
            if(clockwise) {
                rgb_matrix_increase_hue();
            } else {
                rgb_matrix_decrease_hue();
            }
            return false;
        }
        // encoder + ctrl: effect
        else if (mods_state & MOD_MASK_CTRL&& (layer_state_is(0))) {
            // uprintf("EC CTRL       dir: %b, idx: %u, mod: %u\n",clockwise,index,mods_state);
            if(clockwise) {
                rgb_matrix_step();
            } else {
                rgb_matrix_step_reverse();
            }
            return false;
        }
        // encoder + meta: speed
        else if (mods_state & MOD_MASK_GUI&& (layer_state_is(0))) {
            // uprintf("EC META       dir: %b, idx: %u, mod: %u\n",clockwise,index,mods_state);
            if(clockwise) {
                rgb_matrix_increase_speed();
            } else {
                rgb_matrix_decrease_speed();
            }
            return false;
        }
        // encoder: volume
        else {
            if (layer_state_is(0)) {
                //uprintf("EC LAYER0 | KC_VOLD/KC_VOLU | dir: %b, idx: %u, mod: %u\n",clockwise,index,mods_state);
                if (clockwise) {
                    tap_code(KC_VOLU);
                } else {
                    tap_code(KC_VOLD);
                }
                return false;
            }
            if (layer_state_is(1)) {
                //uprintf("EC LAYER1 | KC_PGDN/KC_PGUP | dir: %b, idx: %u, mod: %u\n",clockwise,index,mods_state);
                if (clockwise) {
                    tap_code(KC_PGUP);
                } else {
                    tap_code(KC_PGDN);
                }
                return false;
            }
            if (layer_state_is(2)) {
                //uprintf("EC LAYER2 | S(KC_VOLD)/S(KC_VOLU) | dir: %b, idx: %u, mod: %u\n",clockwise,index,mods_state);
                if (clockwise) {
                    tap_code16(S(KC_VOLU));
                } else {
                    tap_code16(S(KC_VOLD));
                }
                return false;
            }
            if (layer_state_is(3)) {
                //uprintf("EC LAYER3 | A(KC_TAB)/S(A(KC_TAB)) | dir: %b, idx: %u, mod: %u\n",clockwise,index,mods_state);
                if (clockwise) {
                    tap_code16(G(KC_TAB));
                } else {
                    tap_code16(G(S(KC_TAB)));
                }
                return false;
            }
            if (layer_state_is(4)) {
                //uprintf("EC LAYER4 | A(KC_TAB)/S(A(KC_TAB)) | dir: %b, idx: %u, mod: %u\n",clockwise,index,mods_state);
                if (clockwise) {
                    tap_code16(A(KC_TAB));
                } else {
                    tap_code16(A(S(KC_TAB)));
                }
                return true;
            }
            if (layer_state_is(5)) {
                //uprintf("EC LAYER5 | KC_NO | dir: %b, idx: %u, mod: %u\n",clockwise,index,mods_state);
                return false;
            }
        }
        return true;  // Process all other keycodes normally
    }
    return false;     // Stop processing all other keycodes normally
}

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   uprintf("KC: 0x%04X, col: %u, row: %u, psd: %b, time: %u, int: %b, cnt: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
//   return true;
// }

// void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
//     static uint32_t cycle_led_timer = 0;
//     static uint8_t  current_value   = 0;
//     static uint8_t  left_side_leds[8] = {68, 71, 74, 77, 81, 84, 88, 92};
//     static uint8_t  right_side_leds[8] = {69, 72, 75, 78, 82, 85, 89, 93};

//     if (host_keyboard_led_state().caps_lock) {
//         if (timer_elapsed32(cycle_led_timer) > 500) {
//             current_value = current_value == 0 ? 255 : 0;
//             cycle_led_timer = timer_read32();
//         }
//     HSV tempHSV = {.h = 0, .s = 255, .v = current_value};
//     RGB tempRGB = hsv_to_rgb(tempHSV);
//     for (uint8_t i = 0; i < sizeof(left_side_leds) / sizeof(left_side_leds[0]); i++) {
//         rgb_matrix_set_color(left_side_leds[i], tempRGB.r, tempRGB.g, tempRGB.b);
//         rgb_matrix_set_color(right_side_leds[i], tempRGB.r, tempRGB.g, tempRGB.b);
//         }
//     }

//     static uint8_t l2_functions[26] = {6, 7, 8, 12, 13, 14, 15, 16, 18, 23, 28, 34, 38, 39, 44, 50, 56, 61, 66, 70, 80, 86, 94, 95, 96, 98};
//     switch(get_highest_layer(layer_state)){  // special handling per layer
//        case 2:  //layer one
//          break;
//        case 1:
//          for (uint8_t i = 0; i < sizeof(l2_functions) / sizeof(l2_functions[0]); i++) {
//              RGB_MATRIX_INDICATOR_SET_COLOR(l2_functions[i], 255, 0, 0);
//          }
//          break;
//        default:
//          break;
//        break;
//     }
// }

#ifdef ENABLE_DEBUG
void keyboard_post_init_user(void) {
     //Customise these values to desired behaviour
     debug_enable=true;
     debug_matrix=true;
     debug_keyboard=true;
     debug_mouse=false;
}
#endif
// clang-format on
