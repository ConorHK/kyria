/* Copyright 2019 Thomas Baart <thomas@splitkb.com>
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
#include "keymap.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * Base Layer: QWERTY
 *
 * ,-------------------------------------------.                              ,-------------------------------------------.
 * |  Tab   |   Q  |   W  |   E  |   R  |   T  |                              |   Y  |   U  |   I  |   O  |   P  |  Bksp  |
 * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
 * |Ctrl/Esc|   A  |   S  |   D  |   F  |   G  |                              |   H  |   J  |   K  |   L  | ;    |   ' "  |
 * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
 * |        |   Z  |   X  |   C  |   V  |   B  |Record|CapsLk|  |F-keys|PlayMa|   N  |   M  | ,  < | . >  | :    |        |
 * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
 *                        | ENC  |Leader| Enter| Space| Nav  |  | Sym  | Space|Enter |Leader| ENC  |
 *                        |      |      |      |      |      |  |      |      |      |      |      |
 *                        `----------------------------------'  `----------------------------------'
 */
    [_QWERTY] = LAYOUT(
     KC_TAB  , KC_Q ,  KC_W   ,  KC_E  ,   KC_R ,   KC_T ,                                        KC_Y,   KC_U ,  KC_I ,   KC_O ,  KC_P , KC_BSPC,
     KC_ESC, HOME_A,  HOME_S   ,  HOME_D  ,   HOME_F ,   KC_G ,                            KC_H,   HOME_J ,  HOME_K , HOME_L ,HOME_SCLN,  KC_QUOT,
     _______, KC_Z ,  KC_X   ,  KC_C  ,   KC_V ,   KC_B , DM_REC1,KC_CAPS,      FKEYS  , DM_PLY1, KC_N,   KC_M ,KC_COMM, KC_DOT ,KC_COLN, _______,
                                ENC_L, LEADER, KC_ENT, KC_SPC, NAV   ,     SYM    , KC_SPC,KC_ENT, LEADER, GUI_HME
    ),

/*
 * Base Layer: Colemak DH
 *
 * ,-------------------------------------------.                              ,-------------------------------------------.
 * |    ▲   |   Q  |   W  |   F  |   P  |   B  |                              |   J  |   L  |   U  |   Y  | ;  : |   ▲    |
 * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
 * |    ▲   |   A  |   R  |   S  |   T  |   G  |                              |   M  |   N  |   E  |   I  |   O  |   ▲    |
 * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
 * |    ▲   |   Z  |   X  |   C  |   D  |   V  |   ▲  |   ▲  |  |   ▲  |   ▲  |   K  |   H  | ,  < | . >  | /  ? |   ▲    |
 * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
 *                        |   ▲  |   ▲  |   ▲  |   ▲  |   ▲  |  |   ▲  |   ▲  |   ▲  |   ▲  |   ▲  |
 *                        |      |      |      |      |      |  |      |      |      |      |      |
 *                        `----------------------------------'  `----------------------------------'
 */
    [_COLEMAK_DH] = LAYOUT(
     KC_TAB ,   KC_Q ,  KC_W   ,  KC_F  ,   KC_P ,   KC_B ,                                        KC_J,   KC_L ,  KC_U ,   KC_Y ,KC_SCLN, KC_BSPC,
     KC_ESC ,   COLE_A ,  COLE_R   ,  COLE_S  ,   COLE_T ,   KC_G ,                        KC_M,   COLE_N ,  COLE_E ,   COLE_I ,  COLE_O , KC_QUOT,
     _______, KC_Z ,  KC_X   ,  KC_C  ,   KC_D ,   KC_V , DM_REC1,KC_CAPS,     FKEYS  , KC_TRNS, KC_K,   KC_H ,KC_COMM, KC_DOT ,KC_SLSH, _______,
                                 ENC_L, LEADER, KC_ENT, KC_SPC , NAV   ,     SYM    , KC_SPC ,KC_ENT, LEADER, GUI_HME
    ),

/*
 * Nav Layer: Media, navigation
 *
 * ,-------------------------------------------.                              ,-------------------------------------------.
 * |        |      |      |      |      |      |                              | PgUp | PgDn |  Home| End  | VolUp| Delete |
 * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
 * |        |  Alt |Shift | Ctrl | GUI  |      |                              | ←    |  ↓   |   ↑  |   →  | VolDn| Insert |
 * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
 * |        |      |      |      |      |      | Game |ScLck |  |      |      | Pause|M Prev|M Play|M Next|VolMut| PrtSc  |
 * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
 *                        |   ▲  |      |      |      |      |  |      |Mouse |      |      |  ▲   |
 *                        |      |      |      |      |      |  |      |      |      |      |      |
 *                        `----------------------------------'  `----------------------------------'
 */
    [_NAV] = LAYOUT(
      _______, _______, _______, _______, _______, _______,                                     KC_PGUP, KC_PGDN, KC_HOME,   KC_END,  KC_VOLU, KC_DEL,
      _______, KC_LALT, KC_LSFT, KC_LCTL, KC_LGUI, _______,                                     KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_VOLD, KC_INS,
      _______, _______, _______, _______, _______, _______, GAME, KC_SLCK, _______, _______,KC_PAUSE, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_PSCR,
                                 KC_TRNS, _______, _______, _______, _______, _______, MOUSE, _______, _______, KC_MPLY
    ),

/*
 * Sym Layer: Numbers and symbols
 *
 * ,-------------------------------------------.                              ,-------------------------------------------.
 * |    `   |  1   |  2   |  3   |  4   |  5   |                              |   6  |  7   |  8   |  9   |  0   |   =    |
 * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
 * |    ~   |  !   |  :   |  ;   |  /   |  %   |                              |   ,  |  .   |  *   |  (   |  )   |   +    |
 * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
 * |    |   |   \  |  @   |  #   |  -   |  [   |  {   |      |  |      |   }  |   ]  |  _   |  ^   |  &   |  $   |   ?    |
 * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
 *                        |  ▲   |  {   |  }   |  [   | ]    |  |      |      |      |      | ▲    |
 *                        |      |      |      |      |      |  |      |      |      |      |      |
 *                        `----------------------------------'  `----------------------------------'
 */
    [_SYM] = LAYOUT(
      KC_GRV ,   KC_1 ,   KC_2 ,   KC_3 ,   KC_4 ,   KC_5 ,                                       KC_6 ,   KC_7 ,   KC_8 ,   KC_9 ,   KC_0 , KC_EQL ,
     KC_TILD , KC_EXLM,  KC_COLN , KC_SCLN,  KC_SLSH, KC_PERC,                                     KC_COMM, KC_DOT, KC_ASTR, KC_LPRN, KC_RPRN, KC_PLUS,
     KC_PIPE , KC_BSLS, KC_AT, KC_HASH, KC_MINS, KC_LBRC, KC_LCBR, _______, _______, KC_RCBR, KC_RBRC, KC_UNDS, KC_CIRC,  KC_AMPR, KC_DLR, KC_QUES,
                                 KC_MUTE, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, _______, _______, _______, _______, KC_TRNS
    ),

/*
 * Function Layer: Function keys
 *
 * ,-------------------------------------------.                              ,-------------------------------------------.
 * |        |  F9  | F10  | F11  | F12  |      |                              |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
 * |        |  F5  |  F6  |  F7  |  F8  |      |                              |      | GUI  | Ctrl |Shift |  Alt |        |
 * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
 * |        |  F1  |  F2  |  F3  |  F4  |      |      |      |  |      |      |      |      |      |      |      |        |
 * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
 *                        |   ▲  |      |      |      |      |  |      |      |      |      |   ▲  |
 *                        |      |      |      |      |      |  |      |      |      |      |      |
 *                        `----------------------------------'  `----------------------------------'
 */
    [_FUNCTION] = LAYOUT(
      _______,  KC_F9 ,  KC_F10,  KC_F11,  KC_F12, _______,                                     _______, _______, _______, _______, _______, _______,
      _______,  KC_F5 ,  KC_F6 ,  KC_F7 ,  KC_F8 , _______,                                     _______, KC_RGUI, KC_LCTL, KC_RSFT, KC_RGUI, _______,
      _______,  KC_F1 ,  KC_F2 ,  KC_F3 ,  KC_F4 , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                                 KC_TRNS, _______, _______, _______, _______, _______, _______, _______, _______, KC_TRNS
    ),

// /*
//  * Game
//  *
//  * ,-------------------------------------------.                              ,-------------------------------------------.
//  * |    1   |  2   |  3   |  4   |  5   |  5   |                              |      |      |      |      |      |        |
//  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
//  * |    t   |tab   |   q  |   w  |   e  |      |                              |      |      |      |      |      |        |
//  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
//  * |  esc   | shift|  a   |   s  |  d   |      |      |      |  |      |      |      |      |      |      |      |        |
//  * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
//  *                        |   ▲  |ctrl  | enter| space|      |  |      |      |      |      |   ▲  |
//  *                        |      |      |      |      |      |  |      |      |      |      |      |
//  *                        `----------------------------------'  `----------------------------------'
//  */
     [_GAME] = LAYOUT(
       KC_1, KC_2, KC_3, KC_4, KC_5, KC_6,                                     _______, _______, _______, _______, _______, _______,
       KC_T, KC_TAB, KC_Q, KC_W, KC_E, _______,                                     _______, _______, _______, _______, _______, _______,
       KC_ESC,KC_LSFT, KC_A,KC_S, KC_D, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                                  KC_TRNS, KC_LCTL, KC_ENT, KC_SPC, _______, _______, _______, _______, _______, KC_TRNS
     ),

// /*
//  * Mouse
//  *
//  * ,-------------------------------------------.                              ,-------------------------------------------.
//  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
//  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
//  * |        |      |      |Fast  |Slow  |      |                              | ←    |  ↓   |   ↑  |   →  |      |        |
//  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
//  * |        |      |      |      |      |      |      |      |  |      |      |      |      |      |      |      |        |
//  * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
//  *                        |      |      |      |      |      |  | Nav  | LC   |  RC  |      |      |
//  *                        |      |      |      |      |      |  |      |      |      |      |      |
//  *                        `----------------------------------'  `----------------------------------'
//  */
     [_MOUSE] = LAYOUT(
       _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
       _______, _______, _______, KC_ACL2, KC_ACL1, _______,                                     KC_MS_LEFT, KC_MS_DOWN, KC_MS_UP, KC_MS_RIGHT, _______, _______,
       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                                  _______, _______, _______, _______, _______,  	NAV, KC_BTN1, KC_BTN2, _______, _______
     ),
};

// /*
//  * Layer template
//  *
//  * ,-------------------------------------------.                              ,-------------------------------------------.
//  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
//  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
//  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
//  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
//  * |        |      |      |      |      |      |      |      |  |      |      |      |      |      |      |      |        |
//  * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
//  *                        |      |      |      |      |      |  |      |      |      |      |      |
//  *                        |      |      |      |      |      |  |      |      |      |      |      |
//  *                        `----------------------------------'  `----------------------------------'
//  */
//     [_LAYERINDEX] = LAYOUT(
//       _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
//                                  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
//     ),



enum combo_events {
  CAPSWORD,
  COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH; // remove the COMBO_COUNT define and use this instead!

const uint16_t PROGMEM capsword_combo[] = {COLE_R, COLE_I, COMBO_END};

combo_t key_combos[] = {
  [CAPSWORD] = COMBO_ACTION(capsword_combo),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case CAPSWORD:
      if (pressed) {
        enable_caps_word();
      }
      break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_case_modes(keycode, record)) {
      return false;
  }

  if (!process_leader(keycode, record)) {
      return false;
  }

  switch (keycode) {
      case LEADER:
          if (record->event.pressed) {
              start_leading();
          }
          return false;
      default:
          return true;
  }
}

void *leader_change_layer(uint16_t keycode) {
    switch(keycode) {
    case KC_Q:
      layer_move(_QWERTY);
      break;
    case KC_C:
      layer_move(_COLEMAK_DH);
      break;
    default:
      break;
    }
    return NULL;
}

void *leader_start_func(uint16_t keycode) {
    switch (keycode) {
        case KC_S:
            enable_xcase_with(KC_UNDS);
            return NULL;
        case KC_M:
            enable_xcase_with(KC_MINS);
            return NULL;
        case KC_LCBR:
            SEND_STRING("{}");
            tap_code(KC_LEFT);
            return NULL;
        case KC_LBRC:
            SEND_STRING("[]");
            tap_code(KC_LEFT);
            return NULL;
        case KC_LPRN:
            SEND_STRING("()");
            tap_code(KC_LEFT);
            return NULL;
        case KC_L:
            return leader_change_layer;
        default:
            return NULL;
    }
}

#ifdef OLED_ENABLE

#ifdef WPM_ENABLE
static void render_wpm_graph(void) {
    static uint16_t wpm_graph_timer = 0;
    static uint8_t  zero_bar_count  = 0;
    static uint8_t  bar_count       = 0;
    uint8_t         bar_height      = 0;
    uint8_t         bar_segment     = 0;

    if (wpm_graph_timer == 0) {
        wpm_graph_timer = timer_read();
        return;
    }
    if (timer_elapsed(wpm_graph_timer) > 500) {
        wpm_graph_timer = timer_read();

        if (OLED_DISPLAY_HEIGHT == 64) bar_height = get_current_wpm() / 2;
        if (OLED_DISPLAY_HEIGHT == 32) bar_height = get_current_wpm() / 4;
        if (bar_height > OLED_DISPLAY_HEIGHT) bar_height = OLED_DISPLAY_HEIGHT;

        if (bar_height == 0) {
            // keep track of how many zero bars we have drawn.  If
            // there is a whole screen worth, turn the display off and
            // wait until there is something to do
            if (zero_bar_count > OLED_DISPLAY_WIDTH) {
                return;
            }
            zero_bar_count++;
        } else
            zero_bar_count = 0;

        oled_pan(false);
        bar_count++;
        for (uint8_t i = (OLED_DISPLAY_HEIGHT / 8); i > 0; i--) {
            if (bar_height > 7) {
                if (i % 2 == 1 && bar_count % 3 == 0)
                    bar_segment = 254;
                else
                    bar_segment = 255;
                bar_height -= 8;
            } else {
                switch (bar_height) {
                    case 0:
                        bar_segment = 0;
                        break;

                    case 1:
                        bar_segment = 128;
                        break;

                    case 2:
                        bar_segment = 192;
                        break;

                    case 3:
                        bar_segment = 224;
                        break;

                    case 4:
                        bar_segment = 240;
                        break;

                    case 5:
                        bar_segment = 248;
                        break;

                    case 6:
                        bar_segment = 252;
                        break;

                    case 7:
                        bar_segment = 254;
                        break;
                }
                bar_height = 0;

                if (i % 2 == 1 && bar_count % 3 == 0) bar_segment++;
            }
            oled_write_raw_byte(bar_segment, (i - 1) * OLED_DISPLAY_WIDTH);
        }
    }
}
#endif

// clang format off
static void render_qmk_logo(void) {
  static const char PROGMEM qmk_logo[] = {
    0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
    0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
    0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0
  };

  oled_write_P(qmk_logo, false);
}

// clang format on
static void render_status(void) {
    render_qmk_logo();
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);
    switch (get_highest_layer(layer_state)) {
          case _QWERTY:
              oled_write_P(PSTR("qwerty"), false);
              break;
          case _COLEMAK_DH:
              oled_write_P(PSTR("colemak-dh"), false);
              break;
          case _NAV:
              oled_write_P(PSTR("navigation"), false);
              break;
          case _SYM:
              oled_write_P(PSTR("symbols"), false);
              break;
          case _FUNCTION:
              oled_write_P(PSTR("functions"), false);
              break;
          case _GAME:
              oled_write_P(PSTR("gaming"), false);
              break;
          case _MOUSE:
              oled_write_P(PSTR("mouse"), false);
              break;
          default:
              oled_write_P(PSTR("undef"), false);
    }
    oled_write_P(PSTR("\n"), false);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_P(led_usb_state.num_lock    ? PSTR("numlck ") : PSTR("       "), false);
    oled_write_P(led_usb_state.caps_lock   ? PSTR("caplck ") : PSTR("       "), false);
    oled_write_P(led_usb_state.scroll_lock ? PSTR("scrlck ") : PSTR("       "), false);
    oled_write_P(PSTR("\n"), false);


#ifdef LEADER_DISPLAY_STR
    static uint16_t timer = 0;
    if (is_leading()) {
        oled_write_ln(leader_display_str(), false);
        timer = timer_read();
    }
    else if (timer_elapsed(timer) < 175){
        oled_write_ln(leader_display_str(), false);
    }
    else if (get_mods() != 0) {
        oled_write_P(PSTR("mods:\n"), false);
        oled_write_P((get_mods() & MOD_MASK_GUI) ? PSTR("super ") : PSTR(""), false);
        oled_write_P((get_mods() & MOD_MASK_CTRL) ? PSTR("ctrl ") : PSTR(""), false);
        oled_write_P((get_mods() & MOD_MASK_SHIFT) ? PSTR("shift ") : PSTR(""), false);
        oled_write_P((get_mods() & MOD_MASK_ALT) ? PSTR("alt ") : PSTR(""), false);
        oled_write_P(PSTR("\n"), false);
    } else {
        timer = timer_read() - 200; // prevent it from ever looping around
        oled_write_ln("", false);
        oled_write_P(PSTR("\n"), false);
    }
#endif
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_status();
    } else {
        #ifdef WPM_ENABLE
        render_wpm_graph();
        #endif
    }
  return false;
}
#endif

void matrix_init_user(void) {
  #ifdef ENCODER_ENABLE
    matrix_init_enc();
  #endif
}

void matrix_scan_user(void) {
  #ifdef ENCODER_ENABLE
    matrix_scan_enc();
  #endif
}
