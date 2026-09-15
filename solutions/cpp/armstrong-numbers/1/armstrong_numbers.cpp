#include "armstrong_numbers.h"

namespace armstrong_numbers {

bool is_armstrong_number(int checkArmstrong){
    int power = getPower(checkArmstrong);
    int lastAns = 0;
    int nthPlace = 0;
    int toRemove = 0;
    int incrementer = 1;
    int sum = 0;
    int tenPow = 10;
    while ( incrementer <= power ) {
        // calculate [what is lastAns? better name]
        lastAns = static_cast<int>((checkArmstrong - toRemove))
            % tenPow;
        // calculate toRemove
        toRemove += lastAns;
        // calculate the value of the integer at nthPlace raised to the correct power
        nthPlace = lastAns / (tenPow / 10);
        // perform incrementations
        incrementer++;
        tenPow *= 10;
        // perform summation
        sum += pow(nthPlace, power); 
    }
    if ( sum == checkArmstrong ) {
        return true;
    } else {
        return false;
    }
}

int getPower(const int& checkArmstrong){
    int currentVal = checkArmstrong;
    int length = 1;
    while ( currentVal > 10 ) {
        length++;
        currentVal = currentVal / 10;
    }
    return length;
}
    
}  // namespace armstrong_numbers
