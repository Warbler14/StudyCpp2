//
//  Print.hpp
//  StudyCppX
//
//  Created by kook on 2021/04/29.
//

#ifndef Print_hpp
#define Print_hpp

#include <iostream>

using namespace std;

class Print {
private:
    const int printNum = 10;
    
public:
    void start();
        
    Print() {
        cout << "Print Start" << endl;
    }
    
};

#endif /* Print_hpp */
