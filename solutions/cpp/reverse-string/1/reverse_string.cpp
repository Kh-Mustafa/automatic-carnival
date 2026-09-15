#include "reverse_string.h"

namespace reverse_string {

std::string reverse_string(std::string input){
    std::string output;
    int inputLength = input.length();
    output.reserve(inputLength);
    for (int i = 1; i <= inputLength; i++) {
        output += input[inputLength - i];
    }
    return output;
}

}  // namespace reverse_string
