#include "resistor_color_trio.h"
#include "stdio.h"
#include "string.h" 
#include "stdlib.h"

resistor_value_t color_code(resistor_band_t * bands) {

    char holding_string[20]; 

    char total_resistance[20];

    for(int i = 0; i <= 2; i++) {
        if (i == 2){
            for(int l = 1; l <= (int) bands[i]; l++){
                if (bands[i] != BLACK){
                    sprintf(holding_string, "%d", 0);
                }
                strcat(total_resistance, holding_string);
            }
        }else{
            sprintf(holding_string, "%d", bands[i]);
            strcat(total_resistance, holding_string); 
        }
        
    }

    //convert our str to a int to match defined return type
    int total_resistance_int = atoi(total_resistance);

    bool flag = total_resistance_int >= 1000;

    switch (flag)
    {
        case true:
            return (resistor_value_t){ .value = (total_resistance_int / 1000), .unit = KILOOHMS };
        case false:
            return (resistor_value_t){ .value = total_resistance_int, .unit = OHMS };
        default:
            return (resistor_value_t){ .value = -1, .unit = "Something went super wrong" };
    };
}
