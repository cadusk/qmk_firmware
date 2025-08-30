// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum kinesis_layers {
  _QWERTY,
  _FUNCTION
};

enum custom_keycodes {
    ___X___  = KC_NO,                      // makes it easier to read than XXXXXXX

    CTL_ESC  = LCTL_T(KC_ESC),
    CTL_QUOT = RCTL_T(KC_QUOT),

    FN_LANG  = LT(_FUNCTION, KC_SPACE),    // Change Mac language
    FN_TMUX  = LT(_FUNCTION, KC_B),        // Tmux leader key
};

/****************************************************************************************************
*
* Keymap: Default Layer in Qwerty
*
* ,--------------------------------------------------------------------------------------------------------------------.
* | Esc     |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F8  |  F9  |  F10 |  F12 | PSCR | SLCK | PAUS |  FN0 |  BOOT  |
* |---------+------+------+------+------+------+---------------------------+------+------+------+------+------+--------|
* | `~      |  1!  |  2@  |  3#  |  4$  |  5%  |                           |  6^  |  7&  |  8*  |  9(  |  0)  | -_     |
* |---------+------+------+------+------+------|                           +------+------+------+------+------+--------|
* | Tab     |   Q  |   W  |   E  |   R  |   T  |                           |   Y  |   U  |   I  |   O  |   P  | \|     |
* |---------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Ctrl/Esc|   A  |   S  |   D  |   F  |   G  |                           |   H  |   J  |   K  |   L  |  ;:  | Ctrl/'"|
* |---------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Shift   |   Z  |   X  |   C  |   V  |   B  |                           |   N  |   M  |  ,.  |  .>  |  /?  | Shift  |
* `---------+------+------+------+------+-------                           `------+------+------+------+------+--------'
*           |  =+  | Ins  | Left | Right|                                         |  Up  | Down |  [{  |  ]}  |
*           `---------------------------'                                         `---------------------------'
*                                        ,-------------.           ,-------------.
*                                        | Ctrl | Alt  |           | Alt  | Del  |
*                                 ,------|------|------|           |------+------+------.
*                                 |      |      | Hypr |           | Meh  |      |      |
*                                 | BkSp | L_Gui|------|           |------|Return| Space|
*                                 |      |      | Lang |           | TMUX |      |      |
*                                 `--------------------'           `--------------------'
*                                                  ^------  Fn  ------^
*   HYPER: Ctrl + Shift + Alt + Gui
*   MEH:   Ctrl + Shift + Alt
*/
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
    ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, QK_BOOT,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                                          KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                                          KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
    CTL_ESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                                          KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, CTL_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                                          KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
             KC_EQL,  KC_INS,  KC_LEFT, KC_RGHT,                                                                         KC_UP,   KC_DOWN, KC_LBRC, KC_RBRC,
                                                          KC_LCTL, KC_LALT,                   KC_RALT, KC_DEL,
                                                                   KC_HYPR,                   KC_MEH,
                                                 KC_BSPC, KC_RGUI, FN_LANG,                   FN_TMUX, KC_ENTER, KC_SPC
  ),

/****************************************************************************************************
*
* Keymap: Function Layer
*
* ,--------------------------------------------------------------------------------------------------------------------.
* |         |      |      |      |      |      |      |      |      |      |      |      |      |      |      |        |
* |---------+------+------+------+------+------+---------------------------+------+------+------+------+------+--------|
* | F12     |  F1  |  F2  |  F3  |  F4  |  F5  |                           |  F6  |  F7  |  F8  |  F9  |  F10 | F11    |
* |---------+------+------+------+------+------|                           +------+------+------+------+------+--------|
* |         |      |      |      |      |      |                           |      |      |  Up  |      |      |        |
* |---------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* |         |      |      |      |      |      |                           |      | Left | Down | Right|      |        |
* |---------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* |         |      |      |      |      |      |                           |      |      |      |      |      | Menu   |
* `---------+------+------+------+------+-------                           `------+------+------+------+------+--------'
*           |      | BOOT |      |      |                                         | Vol- | Mute | Vol+ |      |
*           `---------------------------'                                         `---------------------------'
*                                        ,-------------.           ,-------------.
*                                        |      |      |           |      |      |
*                                 ,------|------|------|           |------+------+------.
*                                 |      |      |      |           |      |      |      |
*                                 |      |      |------|           |------|      |      |
*                                 |      |      |      |           |      |      |      |
*                                 `--------------------'           `--------------------'
*/
  [_FUNCTION] = LAYOUT(
    ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___,
    KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                                                         KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
    ___X___, ___X___, ___X___, ___X___, ___X___, ___X___,                                                       ___X___, ___X___, KC_UP,   ___X___, ___X___, ___X___,
    ___X___, ___X___, ___X___, ___X___, ___X___, ___X___,                                                       ___X___, KC_LEFT, KC_DOWN, KC_RGHT, ___X___, ___X___,
    ___X___, ___X___, ___X___, ___X___, ___X___, ___X___,                                                       ___X___, ___X___, ___X___, ___X___, ___X___, KC_APP,
             ___X___, QK_BOOT, ___X___, ___X___,                                                                         KC_VOLD, KC_MUTE, KC_VOLU, ___X___,
                                                          ___X___, ___X___,                   ___X___, ___X___,
                                                                   ___X___,                   ___X___,
                                                 ___X___, ___X___, ___X___,                   ___X___, ___X___, ___X___
  ),


};


/****************************************************************************************************
 * Combos
 */

enum combos {
    SFTS_CAPS_COMBO,
    COMBO_COUNT
};

const uint16_t PROGMEM two_shifts_combo[] = {KC_LSFT, KC_RSFT, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    [SFTS_CAPS_COMBO] = COMBO(two_shifts_combo, KC_CAPS),
};



/****************************************************************************************************
 * Handle presses individually
 */

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case FN_LANG: {
            if (record->tap.count && record->event.pressed) {
                tap_code16(LCTL(LALT(KC_SPACE)));
                return false;
            }
            return true;
        }

        case FN_TMUX: {
            if (record->tap.count && record->event.pressed) {
                tap_code16(LCTL(KC_B));
                return false;
            }
            return true;
        }

    }

    return true;
}

