#include "isogram.h"
#include "string.h"
#include "printf.h"

//check every character against every other character to find duplicates, except "-" and " "
bool is_isogram(const char phrase[]) {

    bool found_duplicate = true;

    if(phrase == NULL) {
        return found_duplicate = false;
    }

    for(int i = 0; i < (int) strlen(phrase); i++) {
        if((int) strlen(phrase) == 1){
            printf("length was 1\n");
            continue;
        }
        if(strcmp(&phrase[i], " ") == 0){
            printf("empty space\n");
            continue;
        }
        if(strcmp(&phrase[i], "") == 0){
            printf("no char\n");
            continue;
        }
        if(strcmp(&phrase[i], "-") == 0){
            printf("hyphen\n");
            continue;
        }
        bool duplicate_counter = 0;
        for(int j = 0; j < (int) strlen(phrase); j++) {
            if(strcmp(&phrase[i], &phrase[j]) == 0) {
                duplicate_counter += 1;
                printf("%d\n", duplicate_counter);
            }
        }
    }
    return found_duplicate;
}
