#pragma once

#include <string>
#include <cmath>
#include <cstdlib>

namespace trinary {

int to_decimal(std::string trinaryNumber);
bool checkValidity(std::string trinaryNumber, int lengthOf);

}  // namespace trinary
