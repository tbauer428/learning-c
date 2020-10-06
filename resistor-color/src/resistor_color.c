#include "resistor_color.h"


uint16_t color_code(resistor_band_t resistor) {
    return resistor;
}

resistor_band_t * colors() {

    static resistor_band_t resistors[10] = {0};

    for(int i = 0; i < 10; i++) {
        resistors[i] = i;
    }

    return resistors;
}
