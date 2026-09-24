#include "lasagna_master.h"

namespace lasagna_master {

int preparationTime(std::vector<std::string> layers, int timePerLayer){
    return timePerLayer * layers.size();
}

amount quantities(std::vector<std::string> layers){
    amount needed;
    int noodlyAmt = 0;
    double sauciness = 0.0;
    for (const std::string& thing : layers) {
        if (thing == "noodles") {
            noodlyAmt+= 50;
        }
        if (thing == "sauce") {
            sauciness+= 0.2;
        }
    }
    needed.noodles = noodlyAmt;
    needed.sauce = sauciness;
    return needed;
}
    
void addSecretIngredient(std::vector<std::string>& myList, const std::vector<std::string>& friendsList){
    myList[myList.size() - 1] = friendsList[friendsList.size() - 1];
}
std::vector<double> scaleRecipe(const std::vector<double>& quantities, int portions){
    std::vector<double> scaledSize = quantities;
    int i = 0;
    for (const double& quantity : quantities) {
        scaledSize[i] = (quantity / 2) * portions;
        i++;
    }
    return scaledSize;
}

void addSecretIngredient(std::vector<std::string>& myList, const std::string secretIngredient){
    myList[myList.size() - 1] = secretIngredient;
}

}  // namespace lasagna_master
