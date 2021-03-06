#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H

typedef enum {
    BLACK = 0,
    BROWN = 1,
    RED = 2,
    ORANGE = 3,
    YELLOW = 4,
    GREEN = 5,
    BLUE = 6,
    VIOLET = 7,
    GREY = 8,
    WHITE = 9
} resistor_band_t;

typedef unsigned short uint16_t;

typedef enum {false, true} bool;

uint16_t color_code(resistor_band_t);

resistor_band_t * colors();

#endif
