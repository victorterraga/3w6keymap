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
#define KC_PREVVSCODE LCTL(KC_PMNS)  // Command+shift
#define KC_NEXTVSCODE LCTL(LSFT(KC_PMNS))  // Command+shift
#define KC_COPY LCTL(KC_INS)  // Control+insert
#define KC_PASTE LSFT(KC_INS)  // Shift+insert
#define KC_UNDO LGUI(KC_Z)  // Command+Z
#define KC_REDO LGUI(LSFT(KC_Z))  // Command+Z

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_ALPHA_COLEMAK] = LAYOUT( 
        KC_Q,         KC_W,    KC_F,    KC_P,    KC_G,                                                   KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT,
        LSFT_T(KC_A), LGUI_T(KC_R),    LALT_T(KC_S),    LCTL_T(KC_T),    KC_D,                           KC_H,    LCTL_T(KC_N),   LALT_T(KC_E),    LGUI_T(KC_I),    LSFT_T(KC_O),
        KC_Z,         KC_X,            KC_C,            KC_V,            KC_B,                           KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_PSLS,
                        LT(_SYM, KC_ESC), LT(_NAV,KC_SPC), LT(_NUM,KC_TAB),     LT(_NUM, KC_BSPC), LT(_NAV,KC_ENT), LT(_SYM,KC_DEL)         
    ),
    [_SYM] = LAYOUT(
        KC_GRV , KC_CIRC,   KC_AT,  KC_DLR, KC_TILD,                                    KC_AMPR, KC_EXLM, KC_PIPE, XXXXXXX, KC_HASH,
        KC_SLSH, KC_LBRC, KC_LCBR, KC_LPRN,  KC_EQL,                                    KC_ASTR, KC_RPRN, KC_RCBR, KC_RBRC, KC_BSLS, 
        XXXXXXX, KC_QUES, KC_PLUS, KC_PERC, XXXXXXX,                                    XXXXXXX, XXXXXXX, KC_MINS, XXXXXXX, XXXXXXX,
                                        _______, _______, _______,     _______, _______, _______         
    ),
    [_NAV] = LAYOUT(
        KC_CPYP, KC_UNDO, KC_REDO, KC_COPY, KC_PASTE,                            KC_PASTE, KC_COPY, KC_UP, KC_PGDN, KC_PGUP,
        KC_LSFT, KC_LGUI, KC_LALT, KC_LCTL, XXXXXXX,                             KC_HOME, KC_LEFT,       KC_DOWN, KC_RGHT,  KC_END,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_GUISFT,                           XXXXXXX, KC_PREVVSCODE, XXXXXXX, KC_NEXTVSCODE, XXXXXXX,
                                        _______, _______, _______,      _______, _______, _______         
    ), 
    [_NUM] = LAYOUT(
        XXXXXXX,  KC_F9, KC_F10, KC_F11, KC_F12,                                    KC_PPLS,  KC_7,  KC_8,  KC_9, KC_SCLN,
        XXXXXXX,  KC_F5,  KC_F6,  KC_F7,  KC_F8,                                    KC_0,  KC_4,  KC_5,  KC_6, KC_UNDS,
        XXXXXXX,  KC_F1,  KC_F2,  KC_F3,  KC_F4,                                    KC_PMNS,  KC_1,  KC_2,  KC_3, KC_PAST,
                                        _______, _______, _______,      _______, _______, _______
    ),
};
