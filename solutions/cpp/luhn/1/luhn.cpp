#include "luhn.h"

namespace luhn {

bool valid(std::string number){
    std::string cardNumber = cleanNumber(number);
    return luhnRun(cardNumber);
}

bool luhnRun(std::string cleanNumber){
    if (cleanNumber.length() == 1){
        return false;
    }
    int sum = 0;
    int transcientNum = 0;
    int counter = 0;
    for (char c: cleanNumber){
        if (!isdigit(c)) {
            return false;
        }
        if ( !(counter % 2) ) {
            sum += (c - '0');
        } else {
            transcientNum = (c - '0') * 2;
            if (transcientNum < 9) {
                sum += transcientNum;
            } else {
                sum += transcientNum - 9;
            }
        } counter++;
    }
    if (sum % 10) {
        return false;
    } else {
        return true;
    }
}

std::string cleanNumber(std::string number){
    std::string cleanNumber = "";
    cleanNumber.reserve(number.length());
    for (int i = number.length() - 1; i >= 0; i--) {
        if (number[i] != ' ') {
            cleanNumber += number[i];
        }
    }
    return cleanNumber;
}
}  // namespace luhn
