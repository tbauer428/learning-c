#include "darts.h"
#include "math.h"

uint8_t score(coordinate_t coords) {

    float distance = sqrt(pow(coords.x,2) + pow(coords.y,2));

    if (distance <= 1) {
        return 10;
    }        
    if (distance <= 5) {
        return 5;
    }
    if (distance <= 10){
        return 1;
    }
    return 0;
}
