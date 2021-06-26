#include QMK_KEYBOARD_H

enum layer_names {
    _QWERTY,
    _COLEMAK,
    _KEYPAD,
};

enum custom_keycodes { QWERTY = SAFE_RANGE, COLEMAK, KEYPAD };

// Aliases to make the keymap more uniform
#define KPD_ENT LT(_KEYPAD, KC_ENT)
#define MACLOCK LGUI(LCTL(KC_Q))
#define MACLANG LALT(LCTL(KC_SPC))

// clang-format off

/*

        Function Keys on All Layers (Keypad toggles):
	,-----------------------------------------------------------------.
	|  ESC |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   F7   |  F8   |
 	`-----------------------------------------------------------------'
        ,-----------------------------------------------------------------.
        |  F9  |  F10 |  F11 |  F12 | PScr | SLck | Paus | Keypad | RESET |
        `-----------------------------------------------------------------'

        QWERTY layer:
	,-------------------------------------------.,-------------------------------------------.
	|   =    |   1  |   2  |   3  |   4  |   5  ||   6  |   7  |   8  |   9  |   0  |   -    |
	|--------+------+------+------+------+------||------+------+------+------+------+--------|
	| Tab    |   Q  |   W  |   E  |   R  |   T  ||   Y  |   U  |   I  |   O  |   P  |   \    |
	|--------+------+------+------+------+------||------+------+------+------+------+--------|
	| CapsLk |   A  |   S  |   D  |   F  |   G  ||   H  |   J  |   K  |   L  |   ;  |   '    |
	|--------+------+------+------+------+------||------+------+------+------+------+--------|
	| LShift |   Z  |   X  |   C  |   V  |   B  ||   N  |   M  |   ,  |   .  |   /  | RShift |
	`--------+------+------+------+------+------'`------+------+------+------+------+--------'
	         |   `  |  INS | Left | Rght |              |  Up  |  Dn  |   [  |   ]  |
	         `---------------------------'              `---------------------------'
	                             ,--------------.,--------------.
	                             | Home  | End  || WWW< | WWW>  |
	                      ,------|-------|------||------+-------+-------.
	                      |      |       | LCtl || RCtl | Enter |       |
	                      | BkSp | LGUI  |------||------|   /   | Space |
	                      |      |       | LAlt || RAlt | KeyPd |       |
	                      `---------------------'`----------------------'

        Colemak layer:
	,-------------------------------------------.,-------------------------------------------.
	|   =    |   1  |   2  |   3  |   4  |   5  ||   6  |   7  |   8  |   9  |   0  |   -    |
	|--------+------+------+------+------+------||------+------+------+------+------+--------|
	| Tab    |   Q  |   W  |   F  |   P  |   G  ||   J  |   L  |   U  |   Y  |   ;  |   \    |
	|--------+------+------+------+------+------||------+------+------+------+------+--------|
	| BkSpc  |   A  |   R  |   S  |   T  |   D  ||   H  |   N  |   E  |   I  |   O  |   '    |
	|--------+------+------+------+------+------||------+------+------+------+------+--------|
	| LShift |   Z  |   X  |   C  |   V  |   B  ||   K  |   M  |   ,  |   .  |   /  | RShift |
	`--------+------+------+------+------+------'`------+------+------+------+------+--------'
	         |   `  |  INS | Left | Rght |              |  Up  |  Dn  |   [  |   ]  |
	         `---------------------------'              `---------------------------'
	                             ,--------------.,--------------.
	                             | Home  | End  || WWW< | WWW>  |
	                      ,------|-------|------||------+-------+-------.
	                      |      |       | LCtl || RCtl | Enter |       |
	                      | BkSp | LGUI  |------||------|   /   | Space |
	                      |      |       | LAlt || RAlt | KeyPd |       |
	                      `---------------------'`----------------------'

        Keypad layer:
	,-------------------------------------------.,-------------------------------------------.
	| Power  |      |      |      |      |      ||      | NmLk | KP = | KP / | KP * |        |
	|--------+------+------+------+------+------||------+------+------+------+------+--------|
	| Sleep  |      |      |      |      |      ||      | KP 7 | KP 8 | KP 9 | KP - |        |
	|--------+------+------+------+------+------||------+------+------+------+------+--------|
	| Wake   |      | Mute | Vol- | Vol+ |      || PgUp | KP 4 | KP 5 | KP 6 | KP + |        |
	|--------+------+------+------+------+------||------+------+------+------+------+--------|
	|        | Stop | Prev | Play | Next | Sel  || PgDn | KP 1 | KP 2 | KP 3 |KP Ent|        |
	`--------+------+------+------+------+------'`------+------+------+------+------+--------'
	         |      |QWERTY|Colemk|      |              |      |      | KP . |KP Ent|
	         `---------------------------'              `---------------------------'
	                              ,-------------.,-------------.
	                              |      |      ||      |MacLck|
	                       ,------|------|------||------+------+------.
	                       |      |      |      ||      |      |      |
	                       | Del  |MacLng|------||------|      | KP 0 |
	                       |      |      |      ||      |      |      |
	                       `--------------------'`--------------------'
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT (
           // Left Hand
           KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,
           KC_EQL,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
           KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
           KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
           KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
                    KC_GRV,  KC_INS,  KC_LEFT, KC_RGHT,
           // Left Thumb
                    KC_HOME, KC_END,
                             KC_LCTL,
           KC_BSPC, KC_LGUI, KC_LALT,

           // Right Hand
           KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_SLCK, KC_PAUS, TG(_KEYPAD),  RESET,
           KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS ,
           KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
           KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                    KC_UP,   KC_DOWN, KC_LBRC, KC_RBRC,
           // Right Thumb
           KC_WBAK, KC_WFWD,
           KC_RCTL,
           KC_RALT, KPD_ENT, KC_SPC
    ),

[_COLEMAK] = LAYOUT (
           // Left Hand
           KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,
           KC_EQL,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
           KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,
           KC_BSPC, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,
           KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
                    KC_GRV,  KC_INS,  KC_LEFT, KC_RGHT,
           // Left Thumb
                    KC_HOME, KC_END,
                             KC_LCTL,
           KC_BSPC, KC_LGUI, KC_LALT,

           // Right Hand
           KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_SLCK, KC_PAUS, TG(_KEYPAD),  RESET,
           KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
           KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSLS,
           KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
           KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                    KC_UP,   KC_DOWN, KC_LBRC, KC_RBRC,
           // Right Thumb
           KC_WBAK, KC_WFWD,
           KC_RCTL,
           KC_RALT, KPD_ENT, KC_SPC
    ),

[_KEYPAD] = LAYOUT (
           // Left Hand
           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
           KC_PWR,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
           KC_SLEP, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
           KC_WAKE, XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX,
           XXXXXXX, KC_MSTP, KC_MPRV, KC_MPLY, KC_MNXT, KC_MSEL,
                    XXXXXXX, QWERTY,  COLEMAK, XXXXXXX,
           // Left Thumb
                    XXXXXXX, XXXXXXX,
                             XXXXXXX,
           KC_DEL,  MACLANG, XXXXXXX,

           // Right Hand
           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______,
           XXXXXXX, KC_NLCK, KC_PEQL, KC_PSLS, KC_PAST, XXXXXXX,
           XXXXXXX, KC_P7,   KC_P8,   KC_P9,   KC_PMNS, XXXXXXX,
           KC_PGUP, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, XXXXXXX,
           KC_PGDN, KC_P1,   KC_P2,   KC_P3,   KC_PENT, XXXXXXX,
                    XXXXXXX, XXXXXXX, KC_PDOT, KC_PENT,
           // Right Thumb
           XXXXXXX, MACLOCK,
           XXXXXXX,
           XXXXXXX, XXXXXXX, KC_P0
    )
};

// clang-format on
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case QWERTY:
                set_single_persistent_default_layer(_QWERTY);
                return false;
            case COLEMAK:
                set_single_persistent_default_layer(_COLEMAK);
                return false;
        }
    }
    return true;
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void){};
