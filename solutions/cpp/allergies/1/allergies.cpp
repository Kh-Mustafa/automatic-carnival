#include "allergies.h"

namespace allergies {

    allergy_test::allergy_test(int score) {
        score_ = score;
    }

    bool allergy_test::is_allergic_to(std::string allergen){
        return (((allergen == "eggs") && (score_ & 1)) 
            || ((allergen == "peanuts") && (score_ & 2))
            || ((allergen == "shellfish") && (score_ & 4)) 
            || ((allergen == "strawberries") && (score_ & 8)) 
            || ((allergen == "tomatoes") && (score_ & 16)) 
            || ((allergen == "chocolate") && (score_ & 32)) 
            || ((allergen == "pollen") && (score_ & 64)) 
            || ((allergen == "cats") && (score_ & 128)));
    }

    std::unordered_set<std::string> allergy_test::get_allergies() {
        std::unordered_set<std::string> allergenSet;
        if (score_ & 1) {
            allergenSet.emplace("eggs");
        } if (score_ & 2) {
            allergenSet.emplace("peanuts");
        } if (score_ & 4) {
            allergenSet.emplace("shellfish");
        } if (score_ & 8) {
            allergenSet.emplace("strawberries");
        } if (score_ & 16) {
            allergenSet.emplace("tomatoes");
        } if (score_ & 32) {
            allergenSet.emplace("chocolate");
        } if (score_ & 64) {
            allergenSet.emplace("pollen");
        } if (score_ & 128) {
            allergenSet.emplace("cats");
        }
        return allergenSet;
    }
}  // namespace allergies
