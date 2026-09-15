#include "difference_of_squares.h"

namespace difference_of_squares {

int difference(int n){
    return square_of_sum(n) - sum_of_squares(n);
}
    
int square_of_sum(int n){
    int sum = (n * (n + 1)) / 2;
    int squareOfSum = sum * sum;
    return squareOfSum;
}

int sum_of_squares(int n){
    int sumOfSquares = 0;
    for (int i = 1; i <= n; i++){
        sumOfSquares += (i * i);
    }
    return sumOfSquares;
}


}  // namespace difference_of_squares
