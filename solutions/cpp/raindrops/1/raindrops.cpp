#include "raindrops.h"

namespace raindrops {

std::string convert(int givenNumber){
    std::string resultant;
    if (givenNumber%3 == 0) {
        resultant = resultant + "Pling";
    } 
    if (givenNumber%5 == 0) {
        resultant = resultant + "Plang";
    }
    if (givenNumber%7 == 0) {
        resultant = resultant + "Plong";
    }
    if (resultant.length() == 0) {
        return std::to_string(givenNumber);
    } else {
        return resultant;
    }
}
    
}  // namespace raindrops
