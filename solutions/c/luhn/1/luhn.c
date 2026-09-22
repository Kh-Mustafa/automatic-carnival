#include "luhn.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool luhn(const char *num){
    size_t numLength = strlen(num);
    int digitCount = 0;
    int everyOther = 0;
    int runningTotal = 0;
    int numVal = 0;
    
    num = num + numLength - 1;

    for (int i = numLength; i > 0; i--){
        if (*num != ' ' && (*num < '0' || *num > '9')){
            return false; // ie, it is not a num and not a whitespace, so we return false
        }
        if (*num != ' '){ // ie, num is a valid number and not a whitespace
            digitCount++;
            numVal = *num - '0';
            if (everyOther % 2 == 0){
                runningTotal += numVal;
            } else if (numVal <= 4){
                runningTotal += numVal * 2;
            } else {
                runningTotal += (numVal * 2) - 9;
            }
            everyOther++;
        } num--;
    }
    if (digitCount <= 1) {return false;}
    return runningTotal % 10 == 0;
}