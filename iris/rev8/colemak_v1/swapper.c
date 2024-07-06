#include "swapper.h"

void update_swapper(
    bool *active,
    uint16_t cmdish,
    uint16_t tabish,
    uint16_t trigger,
    uint16_t keycode,
    keyrecord_t *record
) {
    if (keycode == trigger) {
        if (record->event.pressed) {
            if (!*active) {
                *active = true;
                register_code(cmdish);
            }
            register_code(tabish);
        } else {
            unregister_code(tabish);
            // Don't unregister cmdish until some other key is hit or released.
        }
    } else if (*active) {
        unregister_code(cmdish);
        *active = false;
    }
}

void update_dual_swapper(
    bool *active,
    uint16_t cmdish1,
    uint16_t cmdish2,
    uint16_t tabish,
    uint16_t trigger_next,  
    uint16_t trigger_prev,
    uint16_t keycode,
    keyrecord_t *record
) {
    if (keycode == trigger_next || keycode == trigger_prev) {
        if (record->event.pressed) {
            if (!*active) {
                *active = true;
                register_code(cmdish1);
            }
            if (keycode == trigger_prev) {
                register_code(cmdish2); 
            } else {
                unregister_code(cmdish2);
            }
            register_code(tabish);
        } else {
            unregister_code(tabish);
            // Don't unregister cmdish until some other key is hit or released.
        }
    } else if (*active) {
        unregister_code(cmdish1);
        unregister_code(cmdish2);
        *active = false;
    }
}


