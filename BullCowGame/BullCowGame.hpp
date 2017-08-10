//
//  BullCowGame.hpp
//  BullCowGame
//
//  Created by Mean Machine #2 on 8/9/17.
//  Copyright © 2017 MeanMachine. All rights reserved.
//
#pragma once
#ifndef BullCowGame_hpp
#define BullCowGame_hpp

#include <stdio.h>
#include <string>

struct BullCowCount
{
    int bulls = 0;
    int cows = 0;
};


class BullCowGame {
    

public:
    
    /* Constructor */
    BullCowGame(int currentTry = 1, int maxTries = 5)
    {
        myCurrentTry = currentTry;
        myMaxTries = maxTries;
    }
    
    /* Util methods */
    void Reset(); // TODO: make a more rich return values
    bool isGameWon();
    bool checkGuessValidity(std::string);
    BullCowCount submitGuess(std::string);// provide a method for counting bulls and cows and increaing turn #
    
    /* Setters */
    void setMaxTries(int maxTry);
    void updateCurrentTry(int currentTry);
    
    /* Getters */
    int getMaxTries() const;
    int getCurrentTry() const;
    
    int myCurrentTry;
    
/* Variables */
private:
    int myMaxTries;
    std::string myHiddenWord;
    
};


#endif /* BullCowGame_hpp */
