#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 5

/* key matrix pins */
#define MATRIX_ROW_PINS { D0, B5, B6, B2 }
#define MATRIX_COL_PINS { B4, E6, D7, C6, D4 }

#define ENCODERS_PAD_A { B3 }
#define ENCODERS_PAD_B { B1 }

#define DIODE_DIRECTION COL2ROW
/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5