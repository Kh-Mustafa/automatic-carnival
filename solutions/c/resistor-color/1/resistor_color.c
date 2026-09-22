#include "resistor_color.h"


resistor_band_t color_code(int num){
    resistor_band_t resist = num;
    return resist;
}

const resistor_band_t *colors(void){
    static const resistor_band_t colors[] = {    BLACK,
    BROWN,
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    VIOLET,
    GREY,
    WHITE};
    return colors;
}