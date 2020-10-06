#include "armstrong_numbers.h"
#include "math.h"
#include "stdlib.h"
#include "stdio.h"

bool is_armstrong_number(int candidate) {

    if (candidate == 0)
    {
        return true;
    }
    
    int nDigits = floor(log10(abs(candidate))) + 1;

    if (nDigits == 1)
    {
        return true;
    }

    int check_value = 0;
    int reminder;
    int copy_of_candidate_for_later = candidate;

    for (int i = 0; i < nDigits; i++)
    {
        while(candidate!=0)
        {
            reminder=candidate%10;
            check_value += (int) pow((double) (reminder), (double) nDigits);
            candidate/=10;
        }
    }

    if (copy_of_candidate_for_later == check_value) {
        return true;
    } else {
        return false;
    }

    return false;
}
