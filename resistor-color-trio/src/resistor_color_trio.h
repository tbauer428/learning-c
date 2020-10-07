#ifndef RESISTOR_COLOR_TRIO_H
#define RESISTOR_COLOR_TRIO_H
#define OHMS "ohms"
#define KILOOHMS "kiloohms"
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

typedef struct {
    int value;
    char * unit;
} resistor_value_t;

typedef enum {false, true} bool;

resistor_value_t color_code(resistor_band_t[]);
#endif
