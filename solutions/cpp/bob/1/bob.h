#pragma once
#include <string>
#include <cctype>
#include <algorithm>

namespace bob {

std::string hey(std::string prompt);
bool checkShouting(std::string prompt);
bool checkQuestion(std::string prompt);
bool checkSilence(std::string prompt);

}  // namespace bob
