#include "dnd_character.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ability(void){
    int abilityScore = 0;
    int diceToDrop = 6;

    for (int i = 1; i <=4; i++){
        int diceThrow = (rand() % 6) + 1;
        if (diceThrow < diceToDrop) {diceToDrop = diceThrow;}
        abilityScore += diceThrow;
    }
    
    abilityScore -= diceToDrop;
    
    return abilityScore;
}

int modifier(int score){
    return (int)floor((score - 10) / 2.0);
}

dnd_character_t make_dnd_character(void){
    dnd_character_t guyPerson;
    
    guyPerson.strength = ability();
    guyPerson.dexterity = ability();
    guyPerson.constitution = ability();
    guyPerson.intelligence = ability();
    guyPerson.wisdom = ability();
    guyPerson.charisma = ability();

    guyPerson.hitpoints = modifier(guyPerson.constitution) + 10;

    return guyPerson;
}