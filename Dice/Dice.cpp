//
//  Dice.cpp
//  Dice
//
//  Created by Sean Kearney on 27/03/2017.
//  Copyright © 2017 Sean Kearney. All rights reserved.
//

#include "Dice.hpp"
#include <vector>

Dice::Dice(){
    int m_NoOfSides(6);
    {}
}

void Dice::setSides(int sides){
    m_NoOfSides = sides;
}

int Dice::getSides(){
    return m_NoOfSides;
}

vector<int> rollDice(int times, vector<int> rollVec, int sides){
    srand(static_cast<int>(time(0)));
    
    for(int i = 0; i < times; i++)
    {
        int randomNumber = rand();
        int result = (randomNumber % sides) + 1;
        rollVec.push_back(result);
    }
    return rollVec;
}
