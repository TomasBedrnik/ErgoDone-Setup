#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT_ergodox(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_BSLS, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, TG(1), KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_ENT, KC_LCTL, MO(1), KC_LALT, KC_LEFT, KC_RGHT, KC_ESC, KC_INS, KC_HOME, KC_SPC, KC_BSPC, KC_END, KC_EQL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, TG(1), KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_H, KC_J, KC_K, KC_L, KC_SCLN, MO(1), KC_NO, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_DOWN, KC_RALT, KC_RBRC, KC_RALT, KC_LGUI, KC_RALT, KC_PGUP, KC_PGDN, KC_DEL, KC_ENT),
        [1] = LAYOUT_ergodox(KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_TRNS, KC_TRNS, KC_PSLS, KC_P7, KC_P8, KC_P9, KC_PMNS, KC_TRNS, KC_TRNS, KC_PEQL, KC_P4, KC_P5, KC_P6, KC_PPLS, KC_TRNS, KC_RBRC, KC_P1, KC_P2, KC_P3, KC_PAST, KC_TRNS, EEP_RST, KC_TRNS, KC_P0, KC_PDOT, KC_COMM, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_TRNS, KC_PSLS, KC_P7, KC_P8, KC_P9, KC_PMNS, KC_F12, KC_PEQL, KC_P4, KC_P5, KC_P6, KC_PPLS, KC_TRNS, KC_TRNS, KC_RBRC, KC_P1, KC_P2, KC_P3, KC_PAST, KC_TRNS, KC_P0, KC_DOT, KC_COMM, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
    //Some test can be here
};


// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    switch (layer) {
        case 1:
            ergodox_board_led_on();
            break;
        case 2:
            break;
        default:
            // none
            break;
    }
};
