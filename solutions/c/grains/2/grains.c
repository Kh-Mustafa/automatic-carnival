#include "grains.h"

uint64_t square(uint8_t index){
// we need to calculate the number of rice on any square
// the grains of rice double each square
// so for square no: 1, 2, 3, 4, 5...
// the amnt of rice: 1, 2, 4, 8, 16...
// for each square, we recursively calculate how many the last square had
// and double that, unless we are on square one, in which case we return one.
    
    if (index == 1){
        return 1;
    } else {
        return (2 * square(index - 1));
    }
}

uint64_t total(void){
// to calculate the total num of rice, call square(num) for [1 <= num <= 64]
// and add to a running total
    uint64_t allSum = 0;
    for (int i = 1; i <= 64; i++){
        allSum += square(i);
    } return allSum;
}