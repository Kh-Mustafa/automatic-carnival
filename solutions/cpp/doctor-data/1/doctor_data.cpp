#include "doctor_data.h"

namespace heaven {
    Vessel::Vessel(std::string captainName, int generationValue){
        captain = captainName;
        generation = generationValue;
        current_system = star_map::System::Sol;
        busters = 0;
        
    }

    Vessel::Vessel(std::string captainName, int generationValue, star_map::System starSystemName){
        captain = captainName;
        generation = generationValue;
        current_system = starSystemName;
        busters = 0;
    }

    Vessel Vessel::replicate(std::string newCaptain) {
        return Vessel(newCaptain, generation + 1, current_system);
    }

    void Vessel::make_buster(){
        busters++;
    }

    bool Vessel::shoot_buster(){
        if ( busters != 0 ) {
            busters--;
            return true;
        } else {
            return false;
        }
    }

    std::string get_older_bob(Vessel vesselInst, Vessel vesselInst2){
        if (vesselInst.generation < vesselInst2.generation) {
            return vesselInst.captain;
        } else {
            return vesselInst2.captain;
        }
    }

    bool in_the_same_system(Vessel vesselInst, Vessel vesselInst2){
        if (vesselInst.current_system == vesselInst2.current_system) {
            return true;
        } else {
            return false;
        }
    }
}