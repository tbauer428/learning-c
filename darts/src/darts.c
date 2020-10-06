#include "darts.h"
#include "stdio.h"


// 0,0 is a bullseye, -9,9 would be a miss since it would be outside the circle


int score(struct coordinate_t coords) {
    printf("%f\n%f\n", coords.x, coords.y);

    return coords.y;
}
