#pragma once
#include <string>

namespace star_map{
    enum System {
        EpsilonEridani,
        BetaHydri,
        Sol,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
    };
}

namespace heaven {
    class Vessel {
        public:
            std::string captain;
            star_map::System current_system;
            int generation;
            int busters;
    
            Vessel(std::string captainName, int generationValue);
            Vessel(std::string captainName, int generationValue, star_map::System starSystemName);
            Vessel replicate (std::string someString);
            void make_buster();
            bool shoot_buster();
        };

    std::string get_older_bob(Vessel vesselInst, Vessel vesselInst2);
    bool in_the_same_system(Vessel vesselInst, Vessel vesselInst2);
}