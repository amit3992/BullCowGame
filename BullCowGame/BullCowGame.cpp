//
//  BullCowGame.cpp
//  BullCowGame
//
//  Created by Mean Machine #2 on 8/9/17.
//  Copyright © 2017 MeanMachine. All rights reserved.
//

#include "BullCowGame.hpp"

void BullCowGame::Reset()
{
    BullCowGame::myCurrentTry = 1;
    BullCowGame::myMaxTries = 5;
    BullCowGame::myHiddenWord = "slope";
}

int BullCowGame::getMaxTries() const
{
    return myMaxTries;
}

int BullCowGame::getCurrentTry() const
{
    return myCurrentTry;
}

bool BullCowGame::isGameWon()
{
    return false;
}


bool BullCowGame::checkGuessValidity(std::string s)
{
    return false;
}


void BullCowGame::setMaxTries(int maxT)
{
    BullCowGame::myMaxTries = maxT;
}

void BullCowGame::updateCurrentTry(int currT)
{
    BullCowGame::myCurrentTry = currT;
}

// receives a valid guess, increment bulls and cows
BullCowCount submitGuess(std::string g)
{
    // increment the turn number
   //  myCurrentTry++;
    
    
    // setup a return variable
    BullCowCount bcCount;
    
    
    
    // loop through all the lettters
        // compare letters against all letters of the hidden word
    
    return bcCount;
}
