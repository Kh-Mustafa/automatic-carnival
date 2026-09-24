#include "kindergarten_garden.h"

namespace kindergarten_garden {

PlantArray plants(std::string layout, std::string name) {
    std::string perChildSet;
    int childPosition = get_child_position(name);
    int splitPoint = layout.find('\n');
    int offset = childPosition *2;

    perChildSet += layout[offset];
    perChildSet += layout[1 + offset];
    perChildSet += layout[splitPoint + 1 + offset];
    perChildSet += layout[splitPoint+ 2 + offset];
    std::array<Plants, 4> plantArray;
    for (int i = 0; i < 4; i++){
        plantArray[i] = char_to_plant(perChildSet[i]);
    }
    return plantArray;
}

int get_child_position(std::string name){
    std::vector<std::string> children = {"Alice", "Bob", "Charlie", "David", 
        "Eve", "Fred", "Ginny", "Harriet", "Ileana", "Joseph", "Kincaid", "Larry"};
    return std::distance(children.begin(), 
        std::find(children.begin(), children.end(), name));
}

Plants char_to_plant(char ch) {
    switch (ch) {
        case 'C': return Plants::clover;
        case 'G': return Plants::grass;
        case 'R': return Plants::radishes;
        default:  return Plants::violets;
    }
}

}  // namespace kindergarten_garden
