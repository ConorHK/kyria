#pragma once

#include QMK_KEYBOARD_H
#include "features/casemodes.h"
#include "features/leader.h"
#include "features/encoder.h"

enum layers {
    _QWERTY = 0,
    _NAV,
    _SYM,
    _FUNCTION,
    _GAME,
};

enum custom_keycodes {
    LEADER = SAFE_RANGE,
    ENC_KEYS
};

#define QWERTY DF(_QWERTY)
#define GAME TG(_GAME)
#define SYM OSL(_SYM)
#define NAV OSL(_NAV)
#define FKEYS OSL(_FUNCTION)

// Left-hand home row mods
#define HOME_A LALT_T(KC_A)
#define HOME_S LSFT_T(KC_S)
#define HOME_D LCTL_T(KC_D)
#define HOME_F LGUI_T(KC_F)

// Right-hand home row mods
#define HOME_J RGUI_T(KC_J)
#define HOME_K RCTL_T(KC_K)
#define HOME_L RSFT_T(KC_L)
#define HOME_SCLN LALT_T(KC_SCLN)
