//
//  main.cpp
//  BullCowGame
//
//  Created by Mean Machine #2 on 8/7/17.
//  Copyright © 2017 MeanMachine. All rights reserved.
//

#include <iostream>
#include <string>

#include "BullCowGame.hpp"

/* Util functions */
void playIntro(); // For the ASCII art
void playGame(); // Main game function
bool askToPlayAgain(); // Ask if user wants to play again
std::string getGuess();

BullCowGame BCGame; // Create an instance of a new game

int main(int argc, const char * argv[]) {
   
    // std::cout << "Hello, I'm starting my bull cow game!\n";
    bool playAgain = false;
    
    do {
        playIntro();
        playGame();
        // TODO Add summarize game ()
        playAgain = askToPlayAgain();
    } while(playAgain);
    
    
    return 0;
}

// Introduce the game
void playIntro()
{
    constexpr int WORD_LENGTH = 9;
    std:: cout << "Welcome to Amit's Bulls and Cows game! " << std::endl;
    std:: cout << "Let's start. Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking off? " << std::endl;
    std :: cout << std:: endl;
    return;
}

bool askToPlayAgain()
{
    std::cout << "Do you want to play again? (y/n)\n";
    std::string response = "";
    std::getline(std::cin, response);
    return (response[0] == 'y' || response[0] == 'Y');
}

void playGame()
{
    BCGame.Reset(); // Initialize everything
    
    int maxTries = BCGame.getMaxTries();
    std:: cout << "\n Max Tries: " << maxTries << std::endl;
    
    for(int count = 1; count <= maxTries; count++)
    {
        std::string guess = getGuess();
        // TODO checkGuessValidity
        std::cout << "Your guess was: " << guess << std::endl;
        std::cout << std::endl;
    }
    
    
}

std::string getGuess()
{

    std::string guess = "";
    std::cout << "\nTry "<< BCGame.getCurrentTry() <<". Enter your guess: " << std::endl;
    std::getline(std::cin, guess);
    
    // TODO Add more exeption handling
    
    return guess;
}

