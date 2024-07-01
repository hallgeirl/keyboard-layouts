#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

// Base layer home row mods
#define C_MTLAR MT(MOD_LALT,KC_R)
#define C_MTLSS MT(MOD_LSFT,KC_S)
#define C_MTLCT MT(MOD_LCTL,KC_T)
#define C_MTRCN MT(MOD_LCTL | MOD_RCTL,KC_N)
#define C_MTRSE MT(MOD_LSFT | MOD_RSFT,KC_E)
#define C_MTLAI MT(MOD_LALT,KC_I)

// Game layer home row mods
#define C_MTRCJ MT(MOD_LCTL | MOD_RCTL,KC_J)
#define C_MTRSK MT(MOD_LSFT | MOD_RSFT,KC_K)
#define C_MTLAL MT(MOD_LALT,KC_L)

// Symbol layer
#define C_LSGR LSFT(KC_GRV)
#define C_LS1 LSFT(KC_1)
#define C_LS2 LSFT(KC_2)
#define C_LS3 LSFT(KC_3)
#define C_LS4 LSFT(KC_4)
#define C_LS5 LSFT(KC_5)
#define C_LS6 LSFT(KC_6) 
#define C_LS7 LSFT(KC_7)
#define C_LS8 LSFT(KC_8) 
#define C_LS9 LSFT(KC_9)
#define C_LS0 LSFT(KC_0)

#define C_MTRC5 MT(MOD_RCTL,KC_P5)
#define C_MTRS6 MT(MOD_RSFT,KC_P6)

// Nav layer home row mods
#define C_MTCMN MT(MOD_RCTL,KC_MNXT)
#define C_MTCVU MT(MOD_RSFT,KC_VOLU)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
        QK_GESC, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_BSPC,
        KC_TAB,  KC_Q   , KC_W   , KC_F   , KC_P   , KC_B   ,                   KC_J   , KC_L   , KC_U   , KC_Y   , KC_SCLN, KC_DEL ,
        KC_TRNS, KC_A   , C_MTLAR, C_MTLSS, C_MTLCT, KC_G   ,                   KC_M   , C_MTRCN, C_MTRSE, C_MTLAI, KC_O   , KC_QUOT,
        TO(1),   KC_Z   , KC_X   , KC_C   , KC_D   , KC_V   , KC_HOME, KC_END , KC_K   , KC_H   , KC_COMM, KC_DOT,  KC_SLSH, KC_TRNS,
                                            KC_LGUI, MO(3)  , KC_ENT , KC_SPC , MO(4)  , KC_RALT
    ),
	[1] = LAYOUT(
        KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_BSPC,
        KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                   KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_DEL ,
        KC_LSFT, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                   KC_H   , C_MTRCJ, C_MTRSK, C_MTLAL, KC_SCLN, KC_QUOT,
        KC_LCTL, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , MO(2)  , KC_END , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, TO(0)  ,
                                            KC_LGUI, KC_LALT, KC_ENT , KC_SPC , MO(3)  , KC_RALT
    ),
	[2] = LAYOUT(
        KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_BSPC,
        KC_TAB , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   ,                   KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_DEL ,
        KC_LSFT, KC_H   , KC_J   , KC_K   , KC_L   , KC_G   ,                   KC_H   , C_MTRCJ, C_MTRSK, C_MTLAL, KC_SCLN, KC_QUOT, 
        KC_LCTL, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_TRNS, KC_END , KC_N   , KC_M   , KC_COMM, KC_DOT,  KC_SLSH, TO(0), 
                                            KC_LGUI, KC_LALT, KC_ENT , KC_SPC , MO(3)  , KC_RALT
    ),
	[3] = LAYOUT(
        C_LSGR , C_LS1  , C_LS2  , C_LS3  , C_LS4  , C_LS5  ,                   C_LS6  , C_LS7  , C_LS8  , C_LS9  , C_LS0  , KC_BSPC, 
        KC_GRV , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_P7  , KC_P8  , KC_P9  , KC_LBRC, KC_RBRC, KC_DEL, 
        KC_TRNS, KC_TRNS, KC_LALT, KC_LSFT, KC_LCTL, KC_TRNS,                   KC_P4  , C_MTRC5, C_MTRS6, KC_LALT, KC_EQL , KC_BSLS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P1  , KC_P2  , KC_P3  , KC_TRNS, KC_MINS, KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_DEL , KC_DEL , KC_TRNS, KC_P0
    ),
	[4] = LAYOUT(
        KC_F12 , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                   KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 ,
        KC_TRNS, KC_NUM , KC_HOME, KC_UP  , KC_END , KC_PGUP,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, EE_CLR , 
        KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,                   KC_MPRV, C_MTCMN, C_MTCVU, KC_LALT, KC_TRNS, KC_TRNS, 
        KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MSTP, KC_MPLY, KC_VOLD, KC_TRNS, KC_TRNS, KC_TRNS, 
                                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
	[5] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(0)  , 
                                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)



