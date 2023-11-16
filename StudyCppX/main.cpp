//
//  main.cpp
//  StudyCpp01
//
//  Created by kook on 2021/04/23.
//

#include <iostream>

#include "link/LinkForStudy.hpp"
#include "ctime/PrintTime.hpp"
#include "game/guessGame/GuessGame.hpp"
#include "print/Print.hpp"
#include "math/MyMath.hpp"
#include "externTest/ExternTest.hpp"

//not works
//#include "logTest/LogTest.hpp"



int main(int argc, const char * argv[]) {

    ExternTest exturnTest;
    exturnTest.execute();
    
//    LinkForStudy linkForStudy;
//    linkForStudy.execute();
    
//    PrintTime printTime;
//    printTime.print();
//    printTime.print2(NULL);

//    GuessGame guessGame;
//    guessGame.start();

//    Print print;
//    print.start();
//    print.stdIn();
//    print.printArray();
//    print.swapTest();
    
//    MyMath math;
//    math.start();
    
// ======================================
//    LogTest logTest;
//    logTest.example01();

    return 0;
}
