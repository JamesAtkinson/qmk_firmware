#include QMK_KEYBOARD_H

enum layers {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
    _ADJUST
};

const uint16_t PROGRAM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /*
    * Base Layer: QWERTY
    *
    * .-----------------------------------------------.                                       .-----------------------------------------------.
    * |  esc  |   q   |   w   |   e   |   r   |   t   |                                       |   y   |   u   |   i   |   o   |   p   | bkspc |
    * |-------+-------+-------+-------+-------+-------|                                       |-------+-------+-------+-------+-------+-------|
    * |  ctr  |   a   |   s   |   d   |   f   |   g   |                                       |   h   |   j   |   k   |   l   |   ;   |   '   |
    * |-------+-------+-------+-------+-------+-------+---------------.       .---------------+-------+-------+-------+-------+-------+-------|
    * | shift |   z   |   x   |   c   |   v   |   b   |   s   |       |       |       |   e   |   n   |   m   |   ,   |   .   |   /   |   -   |
    *  -----------------------+-------+-------+-------|   p   |-------|       |-------|   n   |-------+-------+-------+-----------------------
    *                         |       |  tab  |  alt  |   c   |       |       |       |   t   |       |  del  |       |
    *                          ---------------------------------------         ---------------------------------------
    *
    */

    [_QWERTY] = LAYOUT(
        KC_ESC,    KC_Q, KC_W, KC_E, KC_R,   KC_T,                                    KC_Y, KC_U,   KC_I,    KC_O,   KC_P,    KC_BSPC,
        KC_LCTRL,  KC_A, KC_S, KC_D, KC_F,   KC_G,                                    KC_H, KC_J,   KC_K,    KC_L,   KC_SCLN, KC_QUOT,
        KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V,   KC_B,              ____, ____,           KC_N, KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_MINS,
                               ____, KC_TAB, KC_LALT, KC_SPACE, ____, ____, KC_ENTER, ____, KC_DEL, ____
    ),
};
