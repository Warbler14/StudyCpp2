//
//  GuessGame.hpp
//  StudyCppX
//
//  Created by kook on 2021/04/25.
//

#ifndef GuessGame_hpp
#define GuessGame_hpp

#include <iostream>

using namespace std;

class GuessGame {
private:
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;
    
public:
    void start();
    
    void end();
    
    GuessGame() {
        cout << "Guess Game Start" << endl;
    }
    
};

#endif /* GuessGame_hpp */
