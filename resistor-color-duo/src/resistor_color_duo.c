#include "resistor_color_duo.h"
#include "stdio.h"
#include "string.h" 
#include "stdlib.h"


uint16_t color_code(resistor_band_t * bands) {

    //allocating for a string for later use
    char holder_string[20]; 

    //allocating for a string for later use in our return value
    char total_resistance[20];

    //finding the length of our parameter since it is resistor_band_t[] of an undefined size since its a pointer
    int len = sizeof(bands) / sizeof(int);

    //looping over our bands parameter and adding the value of enum passed in to our total_resistance
    for(int i = 0; i < len; i-=-1) {
        //convert int value to a str
        sprintf(holder_string, "%d", bands[i]); 

        //concat our holder_string value onto our total_resistance (ex: 1 + 0 = 10)
        strcat(total_resistance, holder_string); 
    }

    //convert our str to a int to match defined return type
    return atoi(total_resistance);
}
