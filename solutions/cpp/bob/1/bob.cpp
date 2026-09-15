#include "bob.h"

namespace bob {

std::string hey(std::string prompt){
    if ( checkSilence(prompt) ){
        return "Fine. Be that way!";
    } else if ( checkShouting(prompt) && checkQuestion(prompt)){
        return "Calm down, I know what I'm doing!";
    } else if ( !checkShouting(prompt) && checkQuestion(prompt) ){
        return "Sure.";
    } else if ( checkShouting(prompt) && !checkQuestion(prompt) ) {
        return "Whoa, chill out!";
    } else {
        return "Whatever.";
    }  
}

bool checkSilence(std::string prompt){
    return std::all_of(prompt.begin(), prompt.end(), isspace);
}

bool checkShouting(std::string prompt){
    int lengthOf = static_cast<int>(prompt.length()) - 1;
    int letterCount = 0;
    bool upperCase = true;
    for (int i = 0; i < lengthOf; i++){
        if (islower(prompt[i])) {
            upperCase = false;
        } if (isalpha(prompt[i])) {
            letterCount++;
        }
    } if (upperCase && letterCount) {
        return true;
    } else {
        return false;
    }
}

bool checkQuestion(std::string prompt){
    int finalChar = prompt.length() - 1;
    while ( prompt[finalChar] == ' ') {
        finalChar--;
    }
    if (prompt[finalChar] == '?') {
        return true;
    } else {
        return false;
    }
}

}  // namespace bob
