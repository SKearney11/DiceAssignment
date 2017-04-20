//
//  Dice.hpp
//  Dice
//
//  Created by Sean Kearney on 27/03/2017.
//  Copyright © 2017 Sean Kearney. All rights reserved.
//

#ifndef Dice_hpp
#define Dice_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class Dice
{
public:
    Dice();
    void setSides(int sides);
    int getSides();
private:
    int m_NoOfSides;
};

vector<int> rollDice(int times, vector<int> rollVec, int sides);


#endif /* Dice_hpp */
