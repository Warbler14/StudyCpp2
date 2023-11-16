//
//  GuessGame.cpp
//  StudyCppX
//
//  Created by kook on 2021/04/25.
//

#include "GuessGame.hpp"


void GuessGame::start() {
    int range = 10;
    /* initialize random seed: */
    time_t timer = time(NULL);
    srand ((unsigned int)timer);
    
    lowNumber = rand() % range;
    topNumber = lowNumber + (rand() % range) + guessLimit;
    secretNum = rand() % (topNumber - lowNumber) + lowNumber;
    
    cout << "lowNumber " << lowNumber << endl;
    cout << "topNumber " << topNumber << endl;
    cout << "secretNum " << secretNum << endl;
    
    cout << "Guess Limit is " << guessLimit << endl;
    cout << "hint : number is over " << lowNumber << ", under " << topNumber << endl;
    
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
        cout << "You lose number was " << secretNum << endl;
    }
    
}
