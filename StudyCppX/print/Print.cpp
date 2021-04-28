//
//  Print.cpp
//  StudyCppX
//
//  Created by kook on 2021/04/29.
//

#include "Print.hpp"
#include <string>

void Print::start() {
    //g++ main.cpp ./print/*.cpp -o main
    
    cout << "PrintNum : " << printNum << endl;
   
    char ch = 'A';
    string stringBuffer;
    for (int idx = 0; idx < printNum ; idx++) {
        stringBuffer += (ch + idx);
    }
    
    cout << stringBuffer;
    
    cout << "\b" ;
    
    char last = stringBuffer.at(stringBuffer.length()-1);
    
    if(last >= 65 && last <=90) {
        last += 32;
        cout << last;
    }
    
    cout << stringBuffer << "\n";
}
