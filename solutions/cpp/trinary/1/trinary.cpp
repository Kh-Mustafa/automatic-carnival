#include "trinary.h"

namespace trinary {

int to_decimal(std::string trinaryNumber){
    int lengthOf = static_cast<int>(trinaryNumber.length()) - 1;
    int decimalNumber = 0;
    // if the input is not a string of digits return 0 and exit;
    if (!checkValidity(trinaryNumber, lengthOf)) return 0;
    // otherwise compute
    for (int i = 0; i <= lengthOf; i++){
        decimalNumber += ((trinaryNumber[i] - '0') * pow(3, (lengthOf - i)));
    }
    return decimalNumber;
}

bool checkValidity(std::string trinaryNumber, int lengthOf){
    for (int i = 0; i <= lengthOf; i++) {
        if (!isdigit(trinaryNumber[i])) {
            return false;
        }
    } return true;
}
    
}  // namespace trinary
