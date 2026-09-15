#include "hexadecimal.h"

namespace hexadecimal {

int convert(std::string hexadecimal){
    int decimal = 0;
    int lengthOf = static_cast<int>(hexadecimal.length()) - 1;
    for (char c : hexadecimal) {
        if ((isupper(c) && ((c > 70)  || (c < 65))) ||
            (islower(c) && ((c > 102) || (c < 97)))) {
            return 0;
        }
        if (isdigit(c)){
            decimal += (c - '0') * pow(16, lengthOf);
        } else if (isupper(c)) {
            decimal += (c - '7') * pow(16, lengthOf);
        } else {
            decimal += (c - 'W') * pow(16, lengthOf);
        } lengthOf--;
    }
    return decimal;
}

}  // namespace hexadecimal
