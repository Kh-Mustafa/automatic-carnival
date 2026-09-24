#include "difference_of_squares.h"
#include <math.h> 

unsigned int sum_of_squares(unsigned int number){
    return number * (number + 1) * (2 * number + 1) / 6;
}
unsigned int square_of_sum(unsigned int number){

    unsigned int prePow = ((number * (number + 1)) / 2);
    return prePow * prePow;
}

unsigned int difference_of_squares(unsigned int number){
    return square_of_sum(number) - sum_of_squares(number);
}