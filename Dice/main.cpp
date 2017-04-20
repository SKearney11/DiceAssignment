//
//  main.cpp
//  Dice
//
//  Created by Sean Kearney on 27/03/2017.
//  Copyright © 2017 Sean Kearney. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Dice.hpp"

using namespace std;
vector<int> resultsVec;
Dice dice;
int main() {
    cout << "How many sides are on your dice?" << endl;
    int sides;
    cin >> sides;
    dice.setSides(sides);
    cout << "How many times do you want to roll?" << endl;
    int times;
    cin >> times;
    resultsVec = rollDice(times, resultsVec, dice.getSides());
    cout << "Your results are:" << endl;
    for (vector<int>::iterator i = resultsVec.begin(); i != resultsVec.end(); ++i)
    {
        std::cout << *i << endl;
    }
    return 0;
}
