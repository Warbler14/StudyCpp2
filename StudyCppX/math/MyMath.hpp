//
//  MyMath.hpp
//  StudyCppX
//
//  Created by kook on 2021/05/02.
//

#ifndef MyMath_hpp
#define MyMath_hpp

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

class MyMath {
private:
    const int numberX = 60;
    const int numberY = 100;
    const int numberZ = 100;
    
public:
    void start();
    void stdIn();
        
    MyMath() {
        cout << "MyMath Start" << endl;
    }
    
};

#endif /* MyMath_hpp */
