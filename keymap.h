#pragma once

#include QMK_KEYBOARD_H
#include "features/casemodes.h"
#include "features/encoder.h"

enum layers {
    _COLEMAK_DH = 0,
    _QWERTY,
    _NAV,
    _SYM,
    _FUNCTION,
    _MOUSE,
    _GAME,
};

enum custom_keycodes {
    CAPSWD = SAFE_RANGE,
    SS_PASS,
    ENC_KEYS
};

#define QWERTY DF(_QWERTY)
#define COLEMOUSE TG(_MOUSE)
#define GAME TG(_GAME)
#define MOUSE TG(_MOUSE)
#define SYM OSL(_SYM)
#define NAV OSL(_NAV)
#define FKEYS OSL(_FUNCTION)

// Left-hand home row mods: QWERTY
#define HOME_A LALT_T(KC_A)
#define HOME_S LSFT_T(KC_S)
#define HOME_D LCTL_T(KC_D)
#define HOME_F LGUI_T(KC_F)

// Right-hand home row mods: QWERTY
#define HOME_J RGUI_T(KC_J)
#define HOME_K RCTL_T(KC_K)
#define HOME_L RSFT_T(KC_L)
#define HOME_SCLN LALT_T(KC_SCLN)

// Left-hand home row mods: COLEMAK-DH
#define COLE_A LALT_T(KC_A)
#define COLE_R LSFT_T(KC_R)
#define COLE_S LCTL_T(KC_S)
#define COLE_T LGUI_T(KC_T)

// Right-hand home row mods: COLEMAK-DH
#define COLE_N RGUI_T(KC_N)
#define COLE_E RCTL_T(KC_E)
#define COLE_I RSFT_T(KC_I)
#define COLE_O LALT_T(KC_O)

#define GUI_HME LGUI(KC_HOME)
