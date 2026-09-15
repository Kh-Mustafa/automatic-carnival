#pragma once

#include <string>
#include <unordered_set>

namespace allergies {
class allergy_test{
public:    
    allergy_test(int score);
    bool is_allergic_to(std::string allergen);
    std::unordered_set<std::string> get_allergies();
private:
    int score_;
};
}  // namespace allergies
