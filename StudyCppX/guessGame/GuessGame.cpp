//
//  GuessGame.cpp
//  StudyCppX
//
//  Created by kook on 2021/04/25.
//

#include "GuessGame.hpp"


void GuessGame::start() {
    cout << "Guess Limit is " << guessLimit << endl;
    
    while (secretNum != guess && !outOfGuesses) {
        if(guessCount < guessLimit) {
            cout << "Enter guess : ";
            cin >> guess;
            guessCount++;
            
        } else {
            outOfGuesses = true;
        }
    }
    
    end();
    
}

void GuessGame::end() {
    if(secretNum == guess) {
        cout << "You win" << endl;
    } else {
        cout << "You lose" << endl;
    }
    
}
