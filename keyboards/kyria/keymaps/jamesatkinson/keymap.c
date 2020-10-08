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
    * |  tab  |   a   |   s   |   d   |   f   |   g   |                                       |   h   |   j   |   k   |   l   |   ;   |   '   |
    * |-------+-------+-------+-------+-------+-------+---------------.       .---------------+-------+-------+-------+-------+-------+-------|
    * | shift |   z   |   x   |   c   |   v   |   b   |   s   |  end  |       |  pup  |   e   |   n   |   m   |   ,   |   .   |   /   |   -   |
    *  -----------------------+-------+-------+-------|   p   |-------|       |-------|   n   |-------+-------+-------+-----------------------
    *                         |  cap  |  alt  |  ctr  |   c   |  hom  |       |  pdn  |   t   |  del  |  gui  |  enc  |
    *                          ---------------------------------------         ---------------------------------------
    *
    */

    [_QWERTY] = LAYOUT(
        KC_ESC,    KC_Q, KC_W, KC_E, KC_R,    KC_T,                                                                   KC_Y,   KC_U,    KC_I,    KC_O,   KC_P,    KC_BSPC,
        KC_TAB,    KC_A, KC_S, KC_D, KC_F,    KC_G,                                                                   KC_H,   KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT,
        KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V,    KC_B,                           KC_END,  KC_PGUP,                       KC_N,   KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_MINS,
                               ____, KC_LALT, KC_LCTRL, LT(_LOWER, KC_SPACE), KC_HOME, KC_PGDN, LT(_RAISE, KC_ENTER), KC_DEL, KC_RGUI, ____
    ),
};
