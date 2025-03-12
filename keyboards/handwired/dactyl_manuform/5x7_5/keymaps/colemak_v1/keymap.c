#include QMK_KEYBOARD_H

#include "oneshot.h"
#include "swapper.h"

#define LA_DEF DF(_DEF)
#define LA_GA1 DF(_GA1)
#define LA_GA2 MO(_GA2)
#define LA_SYM MO(_SYM)
#define LA_NAV MO(_NAV)
#define LA_NUM MO(_NUM)
#define LA_FUN MO(_FUN)
#define LA_I3  LM(_I3, MOD_LGUI)
#define LA_SYS MO(_SYS)

#define NO_Ø RALT(KC_L)
#define NO_Å RALT(KC_W)
#define NO_Æ RALT(KC_Z)

#define TMUX C(KC_B)

// Tap-hold config (see https://docs.qmk.fm/mod_tap#intercepting-mod-taps)
#define TH_SCLN LT(0, KC_SCLN) // å
#define TH_O LT(0, KC_O)       // ø
#define TH_QUOT LT(0, KC_QUOT) // æ

#define TAB_L S(KC_TAB)

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

// Combos
enum combos {
  CMB_ENT,
  CMB_ENT_2,
  CMB_QUOT,
  CMB_MINS,
  CMB_AE,
  CMB_OSLASH,
  CMB_ARING,
  CMB_ESC
};

const uint16_t PROGMEM ent_combo[] = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM ent_combo_2[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM quot_combo[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM mins_combo[] = {KC_DOT, KC_SLSH, COMBO_END};
const uint16_t PROGMEM ae_combo[] = {KC_Z, KC_X, COMBO_END};
const uint16_t PROGMEM oslash_combo[] = {KC_L, KC_U, COMBO_END};
const uint16_t PROGMEM aring_combo[] = {KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM esc_combo[] = {KC_TAB, KC_Q, COMBO_END};


combo_t key_combos[] = {
  [CMB_ENT] = COMBO(ent_combo, KC_ENT),
  [CMB_ENT_2] = COMBO(ent_combo_2, KC_ENT),
  [CMB_QUOT] = COMBO(quot_combo, KC_QUOT),
  [CMB_MINS] = COMBO(mins_combo, KC_MINS),
  [CMB_AE] = COMBO(ae_combo, RALT(KC_Z)),
  [CMB_OSLASH] = COMBO(oslash_combo, RALT(KC_L)),
  [CMB_ARING] = COMBO(aring_combo, RALT(KC_W)),
  [CMB_ESC] = COMBO(esc_combo, KC_ESC)
};


// Layers

enum layers {
    _DEF,
    _GA1,
    _GA2,
    _SYM,
    _NAV,
    _NUM,
    _FUN,
    _I3,
    _SYS
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DEF] = LAYOUT(
        QK_GESC, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_VOLU, KC_HOME, KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , LA_GA1,
        KC_TAB,  KC_Q   , KC_W,    KC_F,    KC_P,    KC_B   , KC_VOLD, KC_PGUP, KC_J   , KC_L,    KC_U   , KC_Y,    KC_SCLN, KC_DEL,
        KC_LSFT, KC_A   , KC_R   , KC_S   , KC_T   , KC_G   , KC_MNXT, KC_PGDN, KC_M   , KC_N   , KC_E   , KC_I   , KC_O   , TMUX,
        KC_LCTL, KC_Z   , KC_X   , KC_C   , KC_D   , KC_V   , KC_MPLY, KC_END,  KC_K   , KC_H   , KC_COMM, KC_DOT , KC_SLSH, LA_I3,
                          NO_Æ,    NO_Å,    KC_BSPC, LA_NAV,  KC_LSFT, KC_SPC,  LA_SYM,  LA_FUN,  NO_Ø,    KC_MINS,
                                                     KC_DEL,  KC_LALT,  KC_RALT, KC_ENT
    ),
	  [_GA1] = LAYOUT(
        KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , _______, _______, KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , LA_GA2,
        KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , _______, _______, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_DEL,
        KC_LSFT, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , _______, _______, KC_H   , KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LCTL, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , _______, KC_HOME, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, LA_DEF,
                          _______, _______, KC_BSPC, LA_GA2,  KC_SPC,  KC_LGUI, LA_NAV , KC_RALT, _______, _______,
                                                     KC_ENT,  KC_LALT, _______, _______
    ),
    [_GA2] = LAYOUT(
        KC_F12 , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , _______, _______, KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11,
        KC_TAB , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , _______, _______, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_DEL ,
        KC_LSFT, KC_H   , KC_J   , KC_K   , KC_L   , KC_G   , _______, _______, KC_H   , KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LCTL, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, _______, KC_END,  KC_N   , KC_M   , KC_COMM, KC_DOT,  KC_SLSH, LA_DEF, 
                          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                                                     _______, _______, _______, _______
    ),
    [_SYM] = LAYOUT(
        _______, S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5), _______, _______, S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), _______,
        _______, QK_GESC, KC_LABK, KC_RABK, KC_GRV,  KC_DOT , _______, _______, KC_AMPR, KC_DQUO, KC_LPRN, KC_RPRN, KC_PERC, _______,
        _______, KC_EXLM, KC_MINS, KC_PLUS, KC_EQL , KC_HASH, _______, _______, KC_PIPE, KC_QUOT, KC_LBRC, KC_RBRC, KC_AT,   _______,
        _______, KC_CIRC, KC_SLSH, KC_ASTR, KC_BSLS, _______, _______, _______, KC_TILD, KC_DLR , KC_LCBR, KC_RCBR, KC_UNDS, _______,
                          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                                                     _______, _______, _______, _______
    ),
    
    [_NAV] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, TAB_L,   KC_TAB,  KC_BSPC, KC_DEL,  _______, _______, _______, KC_PGUP, KC_HOME, KC_UP,   KC_END,  SW_WIN,  _______,
        _______, OS_CMD,  OS_ALT,  OS_SHFT, OS_CTRL, OS_RALT, _______, _______, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_PSCR, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                                                     _______, _______, _______, _______        
    ),
  	[_NUM] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, KC_BSPC, KC_DEL,  _______, _______, _______, _______, KC_7,    KC_8,    KC_9,    _______, _______,
        _______, OS_CMD,  OS_ALT,  OS_SHFT, OS_CTRL, OS_RALT, _______, _______, _______, KC_4,    KC_5,    KC_6,    _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_0,    KC_1,    KC_2,    KC_3,    _______, _______,
                          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                                                     _______, _______, _______, _______
    ),
    [_FUN] = LAYOUT(
        KC_F11,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F12,
        _______, _______, _______, KC_BSPC, KC_DEL,  KC_VOLU, _______, _______, KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PERC, _______,
        _______, OS_CMD,  OS_ALT,  OS_SHFT, OS_CTRL, KC_VOLD, _______, _______, KC_F11,  KC_F4,   KC_F5,   KC_F6,   _______, _______,
        _______, _______, _______, KC_MPRV, KC_MNXT, KC_MPLY, _______, _______, KC_F10,  KC_F1,   KC_F2,   KC_F3,   _______, _______,
                          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                                                     _______, _______, _______, _______        
    ),	
    [_I3] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, KC_BSPC, KC_DEL,  _______, _______, _______, _______, KC_7,    KC_8,    KC_9,    _______, _______,
        _______, OS_CMD,  OS_ALT,  OS_SHFT, OS_CTRL, _______, _______, _______, _______, KC_4,    KC_5,    KC_6,    _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_1,    KC_2,    KC_3,    _______, _______,
                          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                                                     _______, _______, _______, KC_0        
    ),	
    [_SYS] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, EE_CLR, 
        _______, OS_CMD,  OS_ALT,  OS_SHFT, OS_CTRL, _______, _______, _______, _______, _______, _______, _______, _______, QK_BOOT,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                                                     _______, _______, _______, _______        
    )
};

/*
    Callum's one-shot and swapper implementations (with some modifications)
*/
bool is_oneshot_cancel_key(uint16_t keycode) {
    switch (keycode) {
    case LA_SYM:
    case LA_NUM:
    case LA_FUN:
    case LA_NAV:
    case LA_I3:
    case LA_SYS:
        return true;
    default:
        return false;
    }
}

bool is_oneshot_ignored_key(uint16_t keycode) {
    switch (keycode) {
    case LA_SYM:
    case LA_NAV:
    case LA_NUM:
    case LA_FUN:
    case LA_SYS:
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

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _SYM, _NAV, _SYS);
}

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
  Combo config
*/

uint16_t get_combo_term(uint16_t index, combo_t *combo) {
    switch (index) {
        //case COMBO_NAME_HERE:
        //    return 9001;
    }

    return COMBO_TERM;
}

/*
  Caps word config
*/
bool caps_word_active = false;
void caps_word_set_user(bool active) {
    caps_word_active = active;
}

bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        case KC_MINS:
        case RALT(KC_L):
        case RALT(KC_W):
        case RALT(KC_Z):
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}


void keyboard_post_init_user(void) {
  #ifdef CONSOLE_ENABLE 
  debug_enable=true;
  debug_matrix=true;
  #endif
}

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
