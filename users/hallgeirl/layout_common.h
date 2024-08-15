#pragma once

// WIP - plan is to extract the common layout to this header to be reused across keyboards

#define COLEMAK_ROW11 KC_Q   , KC_W,    KC_F,    KC_P,    KC_B 
#define COLEMAK_ROW12 KC_J   , KC_L,    KC_U   , KC_Y,    KC_SCLN 
#define COLEMAK_ROW21 KC_A   , KC_R   , KC_S   , KC_T   , KC_G   
#define COLEMAK_ROW22 KC_M   , KC_N   , KC_E   , KC_I   , KC_O   
#define COLEMAK_ROW31 KC_Z   , KC_X   , KC_C   , KC_D   , KC_V 
#define COLEMAK_ROW32 KC_K   , KC_H   , KC_COMM, KC_DOT , KC_SLSH

#define QWERTY_ROW11 KC_Q   , KC_W   , KC_E   , KC_R   , KC_T
#define QWERTY_ROW12 KC_Y   , KC_U   , KC_I   , KC_O   , KC_P 
#define QWERTY_ROW21 KC_Q   , KC_W   , KC_E   , KC_R   , KC_T 
#define QWERTY_ROW21 KC_H   , KC_J,    KC_K,    KC_L,    KC_SCLN
#define QWERTY_ROW31 KC_Z   , KC_X   , KC_C   , KC_V   , KC_B 
#define QWERTY_ROW32 KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH

/*
#define SYM_ROW1 

    [_SYM] = LAYOUT(
        _______, S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5),                   S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), _______,
        _______, QK_GESC, KC_LABK, KC_RABK, KC_GRV,  KC_DOT ,                   KC_AMPR, KC_DQUO, KC_LPRN, KC_RPRN, KC_PERC, _______,
        _______, KC_EXLM, KC_MINS, KC_PLUS, KC_EQL , KC_HASH,                   KC_PIPE, KC_QUOT, KC_LBRC, KC_RBRC, KC_AT,   _______,
        _______, KC_CIRC, KC_SLSH, KC_ASTR, KC_BSLS, _______, _______, _______, KC_TILD, KC_DLR , KC_LCBR, KC_RCBR, KC_UNDS, _______,
                                            _______, _______, _______, _______, _______, _______
    ),
    [_NAV] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
        _______, TAB_L,   KC_TAB,  KC_BSPC, KC_DEL,  KC_VOLU,                   KC_PGUP, KC_HOME, KC_UP,   KC_END,  SW_WIN,  _______,
        _______, OS_CMD,  OS_ALT,  OS_SHFT, OS_CTRL, KC_VOLD,                   KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
        _______, KC_LGUI, OS_RALT, KC_MPRV, KC_MNXT, KC_MPLY, _______, _______, _______, _______, _______, _______, _______, _______,
                                            _______, _______, _______, _______, _______, _______
    ),
	[_NUM] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
        _______, _______, _______, KC_BSPC, KC_DEL,  _______,                   _______, KC_7,    KC_8,    KC_9,    _______, _______,
        _______, OS_CMD,  OS_ALT,  OS_SHFT, OS_CTRL, _______,                   _______, KC_4,    KC_5,    KC_6,    _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_0,    KC_1,    KC_2,    KC_3,    _______, _______,
                                            _______, _______, _______, _______, _______, KC_0
    ),
    [_FUN] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
        _______, _______, _______, KC_BSPC, KC_DEL,  _______,                   KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PERC, _______,
        _______, OS_CMD,  OS_ALT,  OS_SHFT, OS_CTRL, _______,                   KC_F11,  KC_F4,   KC_F5,   KC_F6,   _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_F10,  KC_F1,   KC_F2,   KC_F3,   _______, _______,
                                            _______, _______, _______, _______, _______, _______
    ),	[_SYS] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, KC_PSCR, EE_CLR, 
        _______, OS_CMD,  OS_ALT,  OS_SHFT, OS_CTRL, _______,                   _______, _______, _______, _______, _______, QK_BOOT,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                                            _______, _______, _______, _______, _______, _______

*/