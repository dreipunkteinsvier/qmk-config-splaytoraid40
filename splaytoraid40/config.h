// Copyright 2022 dreipunkteinsvier (@dreipunkteinsvier)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

/* key matrix pins */
#define MATRIX_ROW_PINS { D3, D1, D0, D4, D7, E6, B4, C6 }
#define MATRIX_COL_PINS { F5, F6, F7, F4, B3, B1 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* encoder */
#define ENCODERS_PAD_A { B5 }
#define ENCODERS_PAD_B { B6 }
#define ENCODER_RESOLUTION 4
#define DIP_SWITCH_PINS { B2 }

#define RGB_DI_PIN D2

#ifdef RGBLIGHT_ENABLE
    #define RGBLED_NUM 16
#endif