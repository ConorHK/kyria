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

#pragma once

#ifdef OLED_ENABLE
  #define OLED_DISPLAY_128X64
  #ifdef WPM_ENABLE
    #define SPLIT_WPM_ENABLE
    #define WPM_ALLOW_COUNT_REGRESSION
    #define WPM_SAMPLE_SECONDS      6
    #define WPM_SAMPLE_PERIODS      50
    #define WPM_ESTIMATED_WORD_SIZE 6
  #endif
#endif

#ifdef ENCODER_ENABLE
  #define ENCODER_RESOLUTION 2
  #define ENCODER_COUNT 2
  #define ENCODER_TICKS 72
  #define ENCODER_DIRECTION_FLIP
#endif

#ifdef MOUSEKEY_ENABLE
  #define MOUSEKEY_DELAY 0
  #define MOUSEKEY_MAX_SPEED 7
  #define MOUSEKEY_TIME_TO_MAX 60
  #define MOUSEKEY_INTERVAL 16
  #define MOUSEKEY_WHEEL_DELAY 0
  #define MK_COMBINED
#endif

#define LEADER_DISPLAY_STR

// Tap settings
#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_TERM 150
#define TAPPING_FORCE_HOLD

// Save firmware space
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define LAYER_STATE_8BIT

#define EE_HANDS
