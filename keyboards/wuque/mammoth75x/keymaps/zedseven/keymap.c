/* Copyright 2021 wuquestudio
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum Layers {
	ENGRAM = 0,
	COLEMAK,
	QWERTY,
	EXTRA,
};

// https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[ENGRAM] = LAYOUT_all(
		KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,                    KC_MUTE,
        KC_LBRC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_RBRC, KC_SLSH, KC_BSPC, KC_BSPC,
		KC_TAB,  KC_B,    KC_Y,    KC_O,    KC_U,    KC_QUOT, KC_DQUO, KC_L,    KC_D,    KC_W,    KC_V,    KC_Z,    KC_HASH, KC_AT,                 KC_HOME, KC_PGUP,
		KC_CAPS, KC_C,    KC_I,    KC_E,    KC_A,    KC_COMM, KC_DOT,  KC_H,    KC_T,    KC_S,    KC_N,    KC_Q,             KC_ENT,                KC_END,  KC_PGDN,
		KC_LSFT, KC_LSFT, KC_G,    KC_X,    KC_J,    KC_K,    KC_MINS, KC_QUES, KC_R,    KC_M,    KC_F,    KC_P,    KC_RSFT, KC_RSFT,               KC_UP,
		KC_LCTL, KC_LGUI, KC_LALT,          KC_SPC,           KC_SPC,           KC_SPC,           KC_RALT, MO(EXTRA), TO(COLEMAK),         KC_LEFT, KC_DOWN, KC_RGHT
	),
	[COLEMAK] = LAYOUT_all(
		KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,                    KC_MUTE,
		KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_BSPC,
		KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_LBRC, KC_RBRC, KC_BSLS,               KC_HOME, KC_PGUP,
		KC_CAPS, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,          KC_ENT,                KC_END,  KC_PGDN,
		KC_LSFT, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_RSFT,               KC_UP,
		KC_LCTL, KC_LGUI, KC_LALT,          KC_SPC,           KC_SPC,           KC_SPC,           KC_RALT, MO(EXTRA), TO(QWERTY),          KC_LEFT, KC_DOWN, KC_RGHT
	),
	[QWERTY] = LAYOUT_all(
		KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,                    KC_MUTE,
		KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_BSPC,
		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,               KC_HOME, KC_PGUP,
		KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,                KC_END,  KC_PGDN,
		KC_LSFT, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_RSFT,               KC_UP,
		KC_LCTL, KC_LGUI, KC_LALT,          KC_SPC,           KC_SPC,           KC_SPC,           KC_RALT, MO(EXTRA), TO(ENGRAM),          KC_LEFT, KC_DOWN, KC_RGHT
	),
	[EXTRA] = LAYOUT_all(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   KC_MPLY,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,               _______, QK_BOOT,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,               _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,               _______,
		_______, _______, _______,          _______,          _______,          _______,          _______, _______, _______,               _______, _______, _______
	),
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
	[ENGRAM]  = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
	[COLEMAK] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
	[QWERTY]  = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
	[EXTRA]   = { ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
};
#endif

// Define the key overrides
// https://docs.qmk.fm/#/feature_key_overrides
// https://github.com/qmk/qmk_firmware/blob/master/docs/feature_key_overrides.md
#define ENGRAM_SHIFT_OVERRIDE(trigger_key, replacement_key) ko_make_with_layers(MOD_MASK_SHIFT, trigger_key, replacement_key, 1 << ENGRAM)

const key_override_t **key_overrides = (const key_override_t *[]) {
    &ENGRAM_SHIFT_OVERRIDE(KC_1,    KC_PIPE),
    &ENGRAM_SHIFT_OVERRIDE(KC_2,    KC_EQL),
    &ENGRAM_SHIFT_OVERRIDE(KC_3,    KC_TILD),
    &ENGRAM_SHIFT_OVERRIDE(KC_4,    KC_PLUS),
    &ENGRAM_SHIFT_OVERRIDE(KC_5,    KC_LABK),
    &ENGRAM_SHIFT_OVERRIDE(KC_6,    KC_RABK),
    &ENGRAM_SHIFT_OVERRIDE(KC_7,    KC_CIRC),
    &ENGRAM_SHIFT_OVERRIDE(KC_8,    KC_AMPR),
    &ENGRAM_SHIFT_OVERRIDE(KC_9,    KC_PERC),
    &ENGRAM_SHIFT_OVERRIDE(KC_0,    KC_ASTR),
    &ENGRAM_SHIFT_OVERRIDE(KC_SLSH, KC_BSLS),
    &ENGRAM_SHIFT_OVERRIDE(KC_QUOT, KC_LPRN),
    &ENGRAM_SHIFT_OVERRIDE(KC_DQUO, KC_RPRN),
    &ENGRAM_SHIFT_OVERRIDE(KC_HASH, KC_DLR),
    &ENGRAM_SHIFT_OVERRIDE(KC_AT,   KC_GRV),
    &ENGRAM_SHIFT_OVERRIDE(KC_COMM, KC_SCLN),
    &ENGRAM_SHIFT_OVERRIDE(KC_DOT,  KC_COLN),
    &ENGRAM_SHIFT_OVERRIDE(KC_MINS, KC_UNDS),
    &ENGRAM_SHIFT_OVERRIDE(KC_QUES, KC_EXLM),
    NULL // NULL-terminated
};
