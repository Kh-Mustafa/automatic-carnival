#pragma once
#include <string>

namespace luhn {

bool valid(std::string number);
bool luhnRun(std::string cleanNumber);
std::string cleanNumber(std::string number);
    
}  // namespace luhn
