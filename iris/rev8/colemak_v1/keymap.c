#include QMK_KEYBOARD_H

#include "oneshot.h"
#include "swapper.h"

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

#define LA_DEF DF(_DEF)
#define LA_SYM MO(_SYM)
#define LA_NAV MO(_NAV)
#define LA_GA1 DF(_GA1)
#define LA_GA2 DF(_GA2)
#define LA_SYS MO(_SYS)
#define MT_SENT MT(MOD_LSFT, KC_ENT)


// Tap-hold config (see https://docs.qmk.fm/mod_tap#intercepting-mod-taps)
#define TH_SCLN LT(0, KC_SCLN) // å
#define TH_O LT(0, KC_O)       // ø
#define TH_QUOT LT(0, KC_QUOT) // æ

// Base layer mods
#define C_MTLAW MT(MOD_LALT,KC_W)
#define C_MTLGF MT(MOD_LGUI,KC_F)
#define C_MTLCP MT(MOD_LCTL,KC_P)
#define C_MTRCL MT(MOD_RCTL,KC_L)
#define C_MTRGU MT(MOD_RGUI,KC_U)
#define C_MTLAY MT(MOD_LALT,KC_Y)

#define C_MTLAR MT(MOD_LALT,KC_R)
#define C_MTLSS MT(MOD_LSFT,KC_S)
#define C_MTLCT MT(MOD_LCTL,KC_T)
#define C_MTRCN MT(MOD_RCTL,KC_N)
#define C_MTRSE MT(MOD_RSFT,KC_E)
#define C_MTLAI MT(MOD_LALT,KC_I)

// Game layer home row mods
#define C_MTRCJ MT(MOD_RCTL,KC_J)
#define C_MTRSK MT(MOD_RSFT,KC_K)
#define C_MTLAL MT(MOD_LALT,KC_L)

// Symbol layer
#define C_MTRC5 MT(MOD_RCTL,KC_P5)
#define C_MTRS6 MT(MOD_RSFT,KC_P6)
#define CTLLEFT C(KC_LEFT)
#define CTLRGHT C(KC_RIGHT)

// Nav layer home row mods
#define C_MTCMN MT(MOD_RCTL,KC_MNXT)
#define C_MTCVU MT(MOD_RSFT,KC_VOLU)

#define TAB_L S(KC_TAB)

enum layers {
    _DEF,
    _GA1,
    _GA2,
    _SYM,
    _NAV,
    _NUM,
    _SYS
};

enum keycodes {
    // Custom oneshot mod implementation with no timers.
    OS_SHFT = SAFE_RANGE,
    OS_CTRL,
    OS_ALT,
    OS_RALT,
    OS_CMD,

    SW_WIN,  // Switch to next window         (alt-tab)
    SW_PWIN, // Switch to previous window     (shift-alt-tab)
    SW_LANG, // Switch to next input language (ctl-spc)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_DEF] = LAYOUT(
        QK_GESC, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_BSPC,
        KC_TAB , KC_Q   , KC_W,    KC_F,    KC_P,    KC_B   ,                   KC_J   , KC_L,    KC_U   , KC_Y,    KC_SCLN, KC_DEL ,
        LA_SYS,  KC_A   , KC_R   , KC_S   , KC_T   , KC_G   ,                   KC_M   , KC_N   , KC_E   , KC_I   , KC_O   , _______,
        LA_GA1 , KC_Z   , KC_X   , KC_C   , KC_D   , KC_V   , _______, _______, KC_K   , KC_H   , KC_COMM, KC_DOT , KC_SLSH, _______,
                                            KC_ENT,  LA_NAV , KC_LSFT , KC_SPC , LA_SYM,  QK_REP
    ),
	[_GA1] = LAYOUT(
        KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_BSPC,
        KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                   KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_DEL ,
        KC_LSFT, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                   KC_H   , C_MTRCJ, C_MTRSK, C_MTLAL, KC_SCLN, KC_QUOT,
        KC_LCTL, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , LA_GA2,  _______, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, LA_DEF,
                                            KC_ENT,  KC_LALT, KC_LGUI, KC_SPC , LA_NAV , KC_RALT
    ),
	[_GA2] = LAYOUT(
        KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_BSPC,
        KC_TAB , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   ,                   KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_DEL ,
        KC_LSFT, KC_H   , KC_J   , KC_K   , KC_L   , KC_G   ,                   KC_H   , KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, 
        KC_LCTL, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, _______, _______, KC_N   , KC_M   , KC_COMM, KC_DOT,  KC_SLSH, LA_DEF, 
                                            _______, _______, _______, _______, _______, _______
    ),  
    [_SYM] = LAYOUT(
        KC_GRV , S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5),                   S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), _______, 
        KC_TAB , KC_QUOT, KC_LABK, KC_RABK, KC_DQUO, KC_DOT ,                   KC_AMPR, _______, KC_LPRN, KC_RPRN, KC_PERC, _______,
        _______, KC_EXLM, KC_MINS, KC_PLUS, KC_EQL , KC_HASH,                   KC_PIPE, KC_COLN, KC_LBRC, KC_RBRC, KC_QUES, _______,
        _______, KC_CIRC, KC_SLSH, KC_ASTR, KC_BSLS, _______, _______, _______, KC_TILD, KC_DLR , KC_LCBR, KC_RCBR, KC_UNDS, _______,
                                            _______, _______, _______, _______, _______, _______
    ),
	/*[_NAV] = LAYOUT(
        KC_F12 , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                   KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 ,
        _______, KC_HOME, CTLLEFT, KC_UP  , CTLRGHT ,KC_END ,                   _______, KC_RCTL, KC_RGUI, KC_LALT, KC_PSCR, EE_CLR , 
        _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGUP,                   KC_MPRV, KC_MNXT, KC_VOLU, _______, _______, QK_BOOT, 
        _______, SW_PWIN, SW_WIN,  _______, _______, KC_PGDN, _______, _______, KC_MSTP, KC_MPLY, KC_VOLD, _______, _______, RGB_TOG, 
                                            _______, _______, _______, _______, _______, _______
    ),*/
    [_NAV] = LAYOUT(
        KC_F12 , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                   KC_F6,   KC_F7,   KC_F8,   KC_F9  , KC_F10 , KC_F11 ,
        _______, TAB_L,   KC_TAB,  _______, _______, KC_VOLU,                   KC_PGUP, KC_HOME, KC_UP,   KC_END,  SW_WIN,  _______, 
        _______, OS_CMD,  OS_ALT,  OS_SHFT, OS_CTRL, KC_VOLD,                   KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC, _______, 
        _______, KC_LGUI, OS_RALT, KC_MPRV, KC_MNXT, KC_MPLY, _______, _______, _______, _______, _______, _______, KC_DEL,  _______, 
                                            _______, _______, _______, _______, _______, _______
    ),
	[_NUM] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, 
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______, 
        _______, OS_CMD,  OS_ALT,  OS_SHFT, OS_CTRL, KC_F12,                    KC_F11,  _______, _______, _______, _______, _______,
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, 
                                            _______, _______, _______, _______, _______, _______
    ),
	[_SYS] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, KC_PSCR, EE_CLR, 
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, QK_BOOT,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,       
                                            _______, _______, _______, _______, _______, _______
    )
};

/*
    Callum's one-shot and swapper implementations (with some modifications)
*/
bool is_oneshot_cancel_key(uint16_t keycode) {
    switch (keycode) {
    case LA_SYM:
    case LA_NAV:
        return true;
    default:
        return false;
    }
}

bool is_oneshot_ignored_key(uint16_t keycode) {
    switch (keycode) {
    case LA_SYM:
    case LA_NAV:
    case KC_LSFT:
    case OS_SHFT:
    case OS_CTRL:
    case OS_ALT:
    case OS_RALT:
    case OS_CMD:
        return true;
    default:
        return false;
    }
}

bool sw_win_active = false;
bool sw_pwin_active = false;
bool sw_lang_active = false;

oneshot_state os_shft_state = os_up_unqueued;
oneshot_state os_ctrl_state = os_up_unqueued;
oneshot_state os_alt_state = os_up_unqueued;
oneshot_state os_ralt_state = os_up_unqueued;
oneshot_state os_cmd_state = os_up_unqueued;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    /*
        Tap-hold implementation
    */
    switch (keycode) {
        case TH_SCLN:
            if (!record->tap.count && record->event.pressed) {
                tap_code16(RALT(KC_W)); // Å
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case TH_O:
            if (!record->tap.count && record->event.pressed) {
                tap_code16(RALT(KC_L)); // ø
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case TH_QUOT:
            if (!record->tap.count && record->event.pressed) {
                tap_code16(RALT(KC_Z)); // æ
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
    }

    /*
        Swapper implementation
    */
    update_swapper(
        &sw_win_active, KC_LALT, KC_TAB, SW_WIN,
        keycode, record
    );
    
    /*
        One-shot modifiers implementation
    */
    update_oneshot(
        &os_shft_state, KC_LSFT, OS_SHFT,
        keycode, record
    );

    update_oneshot(
        &os_ctrl_state, KC_LCTL, OS_CTRL,
        keycode, record
    );

    update_oneshot(
        &os_alt_state, KC_LALT, OS_ALT,
        keycode, record
    );

    update_oneshot(
        &os_ralt_state, KC_RALT, OS_RALT,
        keycode, record
    );

    update_oneshot(
        &os_cmd_state, KC_LCMD, OS_CMD,
        keycode, record
    );
    return true;
}

/*
  RGB config
*/

const int led_count = RGB_MATRIX_LED_COUNT;
int       layer_leds[]    = {0/*DEF*/, 2/*GA1*/, 3/*GA2*/, 5/*SYM*/, 6/*NAV*/, 8/*NUM*/};
const int l_gui_led = 16,
          l_alt_led = 17,
          l_sft_led = 18,
          l_ctl_led = 19,
          l_ralt_led = 24;

const int r_gui_led = 50,
          r_alt_led = 51,
          r_sft_led = 52,
          r_ctl_led = 53;

void keyboard_post_init_user(void) {
    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
    rgb_matrix_sethsv_noeeprom(HSV_OFF);
}

void set_rgblight_by_layer(uint32_t layer) {
        switch (layer) {
            case _DEF:            
            case _SYS:
                break;
            default:
                rgb_matrix_set_color(layer_leds[layer], RGB_RED);
                break;
        }
}

void set_current_layer_rgb(void) {
    set_rgblight_by_layer(get_highest_layer(layer_state | default_layer_state));
}

bool rgb_matrix_indicators_user(void) {
    rgb_matrix_set_color_all(0,0,0);
    uint8_t mods                = get_mods();
    //uint8_t oneshot_mods        = get_oneshot_mods();
    //uint8_t oneshot_locked_mods = get_oneshot_locked_mods();

    bool isShift = mods & MOD_MASK_SHIFT;// || oneshot_mods & MOD_MASK_SHIFT || oneshot_locked_mods & MOD_MASK_SHIFT;
    bool isCtrl  = mods & MOD_MASK_CTRL;// || oneshot_mods & MOD_MASK_CTRL || oneshot_locked_mods & MOD_MASK_CTRL;
    bool isLAlt  = mods & MOD_BIT(KC_LALT);// || oneshot_mods & MOD_MASK_ALT || oneshot_locked_mods & MOD_MASK_ALT;
    bool isRAlt  = mods & MOD_BIT(KC_RALT);// || oneshot_mods & MOD_MASK_ALT || oneshot_locked_mods & MOD_MASK_ALT;;// || oneshot_mods & MOD_MASK_ALT || oneshot_locked_mods & MOD_MASK_ALT;
    bool isGui   = mods & MOD_MASK_GUI;// || oneshot_mods & MOD_MASK_GUI || oneshot_locked_mods & MOD_MASK_GUI;

    if (isGui) {
        rgb_matrix_set_color(l_gui_led, RGB_RED);
        rgb_matrix_set_color(r_gui_led, RGB_RED);
    }
    if (isLAlt) {
        rgb_matrix_set_color(l_alt_led, RGB_RED);
        rgb_matrix_set_color(r_alt_led, RGB_RED);
    }
    if (isRAlt) {
        rgb_matrix_set_color(l_ralt_led, RGB_RED);
    }
    if (isShift) {
        rgb_matrix_set_color(l_sft_led, RGB_RED);
        rgb_matrix_set_color(r_sft_led, RGB_RED);
    }
    if (isCtrl) {
        rgb_matrix_set_color(l_ctl_led, RGB_RED);
        rgb_matrix_set_color(r_ctl_led, RGB_RED);
    }
    

    set_current_layer_rgb();
    return false;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _SYM, _NAV, _NUM);
}

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
