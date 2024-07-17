/*
Copyright 2021 weteor

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

enum layers
{
    _ALPHA_COLEMAK = 0,
    _SYM,
    _NAV,
    _NUM,
};

#define KC_CPYP LGUI(LSFT(LCTL(KC_4)))  // Copy portion of screen in macos
#define KC_GUISFT LGUI(KC_LSFT)  // Command+shift


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_ALPHA_COLEMAK] = LAYOUT(
        KC_Q,         KC_W,    KC_F,    KC_P,    KC_G,                                                   KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT,
        KC_A,         KC_R,    KC_S,    KC_T,    KC_D,                                                   KC_H,    KC_N,    KC_E,    KC_I,    KC_O,
        LALT_T(KC_Z), KC_X,    KC_C,    KC_V,    KC_B,                                                   KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SCLN,
                        LSFT_T(KC_CAPS), LCTL_T(KC_SPC), LGUI_T(KC_TAB),     LT(_NUM, KC_BSPC), LT(_NAV,KC_ENT), LT(_SYM,KC_PSLS)         
    ),    
    [_SYM] = LAYOUT(
        KC_GRV , KC_CIRC,   KC_AT,  KC_DLR, KC_TILD,                                KC_AMPR, KC_EXLM, KC_PIPE, XXXXXXX, KC_HASH,
        KC_SLSH, KC_LBRC, KC_LCBR, KC_LPRN,  KC_EQL,                                KC_ASTR, KC_RPRN, KC_RCBR, KC_RBRC, KC_BSLS, 
        _______, KC_QUES, KC_PLUS, KC_PERC, XXXXXXX,                                XXXXXXX, XXXXXXX, KC_MINS, XXXXXXX, _______,
                                        _______, _______, _______,     _______, _______, _______         
    ),
    [_NAV] = LAYOUT(
        KC_CPYP, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX,                                XXXXXXX, KC_PGDN,   KC_UP, KC_PGUP,  KC_DEL,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT,  KC_END,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, KC_GUISFT,                                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                        _______, _______, _______,      _______, _______, _______         
    ),
    [_NUM] = LAYOUT(
        XXXXXXX,  KC_F9, KC_F10, KC_F11, KC_F12,                                    KC_PPLS,  KC_7,  KC_8,  KC_9, KC_SCLN,
        XXXXXXX,  KC_F5,  KC_F6,  KC_F7,  KC_F8,                                    KC_0,  KC_4,  KC_5,  KC_6, KC_UNDS,
        _______,  KC_F1,  KC_F2,  KC_F3,  KC_F4,                                    KC_PMNS,  KC_1,  KC_2,  KC_3, KC_PAST,
                                        _______, _______, _______,      _______, _______, _______
    ),
};
