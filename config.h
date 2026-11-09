#pragma once

// Wiring differs from upstream handwired/dactyl_manuform/4x5.
#undef MATRIX_ROW_PINS
#define MATRIX_ROW_PINS { D1, D4, C6, D7, B4 }
#undef MATRIX_COL_PINS
#define MATRIX_COL_PINS { B5, F7, F6, F5, F4 }

// The trackball is on the right half, which is the one plugged in.
#define MASTER_RIGHT

// PMW3360 on the hardware SPI pins (B1 SCK, B2 MOSI, B3 MISO).
#define PMW33XX_CS_PIN B6
#define PMW33XX_CPI 800

#ifdef ENCODER_ENABLE
#    define ENCODER_A_PINS { F1 }
#    define ENCODER_B_PINS { C7 }
#    define ENCODER_DIRECTION_FLIP
#    define ENCODER_RESOLUTION 2
#endif

#define TAPPING_TERM 170
#define TAPPING_TERM_PER_KEY

// Prevents accidental repeats of the tap-hold keys when typing quickly.
#define QUICK_TAP_TERM 0

// Prevents short hold periods from being read as taps when typing quickly.
#define PERMISSIVE_HOLD

#define COMBO_TERM 70

#define UNICODE_SELECTED_MODES UNICODE_MODE_WINCOMPOSE
