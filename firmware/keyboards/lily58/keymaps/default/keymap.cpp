/*
   Copyright 2018 <Pierre Constantineau>

   3-Clause BSD License

   Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

   1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

   2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

   3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#include "keymap.h"



#if KEYBOARD_SIDE == SINGLE
std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
{KEYMAP(
        KC_1,  KC_2,    KC_3,    KC_4,    KC_5,    KC_6,
        KC_1,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
        KC_2,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
        KC_3,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  KC_SPC,
        KC_4,  KC_5,    KC_6,    KC_7
       )};

void setupKeymap() {
}
#endif

#if 0
KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX,  \
_______ XXXXXXX
#endif

#if KEYBOARD_SIDE == LEFT

std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
KEYMAP2ARRAY(KEYMAP(
                    KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     \
                    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     \
                    KC_LCTRL, KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     \
                    KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_LBRC, \
                                        KC_LALT,  KC_LGUI,  LAYER_1,  KC_SPC    \
                   ));

uint32_t layer1[MATRIX_ROWS][MATRIX_COLS] =
KEYMAP( \
       _______,  _______,  _______,  _______,  _______,  _______,  \
       KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    \
       KC_GRV,   KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,  \
       _______,  _______,  _______,  _______,  _______,  _______,  _______, \
                           _______,  _______,  _______,  _______   \
      );

uint32_t layer2[MATRIX_ROWS][MATRIX_COLS] =
KEYMAP( \
       _______,  _______,  _______,  _______,  _______,  _______,  \
       KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     \
       KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    \
       KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______, \
                           _______,  _______,  _______,  _______   \
      );

void setupKeymap() {
    ADDLAYER(_L1, Method::PRESS , layer1);
    ADDLAYER(_L2, Method::PRESS , layer2);
}

#endif  // left



#if KEYBOARD_SIDE == RIGHT

std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
KEYMAP2ARRAY(KEYMAP(
                    KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_GRV,   \
                    KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_MINS,  \
                    KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  \
          KC_RBRC,  KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  \
                    KC_ENT,   LAYER_2,  KC_BSPC,  KC_RGUI \
                   ));

uint32_t layer1[MATRIX_ROWS][MATRIX_COLS] =
KEYMAP( \
          _______,  _______,  _______,  _______,  _______,  _______,  \
          KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   \
          KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  KC_TILD,  \
_______,  XXXXXXX,  KC_UNDS,  KC_PLUS,  KC_LCBR,  KC_RCBR,  KC_PIPE,  \
          _______,  _______,  _______,  _______   \
      );

uint32_t layer2[MATRIX_ROWS][MATRIX_COLS] =
KEYMAP( \
          _______,  _______,  _______,  _______,  _______,  _______,  \
          KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     _______,  \
          XXXXXXX,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  XXXXXXX,  \
_______,  KC_PLUS,  KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,  KC_BSLS,  \
          _______,  _______,  _______,  _______   \
      );

void setupKeymap() {
    ADDLAYER(_L1, Method::PRESS , layer1);
    ADDLAYER(_L2, Method::PRESS , layer2);
}

#endif




