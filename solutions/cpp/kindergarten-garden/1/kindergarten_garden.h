#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <array>

namespace kindergarten_garden {
enum class Plants {
    clover,
    grass,
    violets,
    radishes
};
    
using PlantArray = std::array<Plants, 4>;
PlantArray plants( std::string layout, std::string name);
int get_child_position(std::string name);
Plants char_to_plant(char ch);

}  // namespace kindergarten_garden
