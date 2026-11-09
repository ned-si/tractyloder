#pragma once

#include QMK_KEYBOARD_H
#include "tapdance.h"

// Initialize variable holding the binary
// representation of active modifiers.
extern uint8_t mod_state;

// Physical layout of this build, mapped onto the upstream 4x5 matrix. Upstream
// LAYOUT has one more key per side (matrix [3,4] and [8,4]) and a different
// argument order, so the keymaps use this macro instead.
#define LAYOUT_tractyloder( \
	L00, L01, L02, L03, L04,                     R00, R01, R02, R03, R04, \
	L10, L11, L12, L13, L14,                     R10, R11, R12, R13, R14, \
	L20, L21, L22, L23, L24,                     R20, R21, R22, R23, R24, \
	     L31, L32,                                         R32, R31,      \
	                   L33,                         R33,                  \
	                           L40, L43, R40, R41,                        \
	                           L42, L41, R42, R43                         \
	) \
	{ \
		{ L00, L01, L02, L03, L04 }, \
		{ L10, L11, L12, L13, L14 }, \
		{ L20, L21, L22, L23, L24 }, \
		{ KC_NO, L31, L32, L33, KC_NO }, \
		{ KC_NO, L41, L42, L43, L40 }, \
		{ R04, R03, R02, R01, R00 }, \
		{ R14, R13, R12, R11, R10 }, \
		{ R24, R23, R22, R21, R20 }, \
		{ KC_NO, R31, R32, R33, KC_NO }, \
		{ KC_NO, R43, R42, R41, R40 } \
	}

enum layers {
    _MAIN = 0,
    _GAMING,
    _SYMBOLS,
    _ACCENTS,
    _NUMBERS,
    _NAV,
    _OPTIONS
};

#define ACCENTS  MO(_ACCENTS)

// Miscellaneous keyboard shortcuts in direct access
#define UNDO LCTL(KC_Z)
#define REDO LCTL(KC_Y)
#define CIN A(S(KC_END))

// Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LCTL_T(KC_D)
#define HOME_F LSFT_T(KC_F)
#define HOME_G LT(_ACCENTS, KC_G)

// Right-hand home row mods
#define HOME_SCLN LGUI_T(KC_SCLN)
#define HOME_L LALT_T(KC_L)
#define HOME_K RCTL_T(KC_K)
#define HOME_J RSFT_T(KC_J)
#define HOME_H LT(_ACCENTS, KC_H)
