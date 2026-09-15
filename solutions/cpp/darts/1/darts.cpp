#include "darts.h"
#include <cmath>

namespace darts {
enum boardSize {
    CENTRE = 1,
    MIDDLE = 5,
    EDGE = 10
};

int score(double x, double y){
    if ( inRange(x, y, CENTRE) ) {
        return 10;
    } else if (inRange(x, y, MIDDLE)) {
        return 5;
    } else if (inRange(x, y, EDGE)) {
        return 1;
    } else {
        return 0;
    }
    }

    bool inRange(double x, double y, double bound){
        return hypot(x, y) <= bound;
    }

}  // namespace darts
