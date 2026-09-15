#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:
bool connection_check(pillar_men_sensor* sensor){
    if (sensor == nullptr){
        return false;
    } return true;
}

int activity_counter(pillar_men_sensor* array, int arrayCapacity){
    int accumulation = 0;
    int counter = 0;
    while (counter < arrayCapacity){
        accumulation += (array + counter)->activity;
        counter++;
    }
    return accumulation;
}

bool alarm_control(pillar_men_sensor* sensor){
    if ((sensor == nullptr) || ((sensor->activity) == 0)){
        return false;
    } return true;
}

bool uv_alarm(pillar_men_sensor* sensor){
    if ((sensor == nullptr) || (uv_light_heuristic(&sensor->data) <= sensor->activity)){
        return false;
    } return true;
}

// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}

}  // namespace speedywagon
