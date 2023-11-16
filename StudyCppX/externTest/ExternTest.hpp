//
//  ExternTest.hpp
//  StudyCppX
//
//  Created by kook on 11/16/23.
//

#ifndef ExternTest_hpp
#define ExternTest_hpp

#include <iostream>
#include <string>

using namespace std;

extern int externVariable;

class ExternTest {
public:
    void execute();

    void setExternVariable(int number);
    
    ExternTest() {
        cout << "ExternTest Start" << endl;
    }
};

#endif /* ExternTest_hpp */
