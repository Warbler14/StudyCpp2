//
//  ExternTest.cpp
//  StudyCppX
//
//  Created by kook on 11/16/23.
//

#include "ExternTest.hpp"

int exturnVariable = 1;

void ExternTest::setExternVariable(int number){
    exturnVariable = number;
}

void ExternTest::execute() {
    setExternVariable(100);
    cout << "ExturnVariable : " << exturnVariable << endl;
   
}
