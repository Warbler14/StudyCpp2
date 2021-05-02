//
//  Print.cpp
//  StudyCppX
//
//  Created by kook on 2021/04/29.
//

#include "Print.hpp"
#include <string>
#include <array>

const int DEFAULT_WIDTH = 46;
const char DEFAULT_DIVIDER = '-';

string getDivisionTitle(string title, const char ch, int title_width);

void Print::start() {
    //g++ main.cpp ./print/*.cpp -o main
    
    cout << getDivisionTitle("test I/O rePrint", DEFAULT_DIVIDER, DEFAULT_WIDTH) << endl;
    
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
    
    cout << getDivisionTitle("to_sting", DEFAULT_DIVIDER, DEFAULT_WIDTH) << endl;
    
    string numberString = to_string(1000);
    
    cout << numberString << endl;
    
    numberString[0] = '2';
    
    cout << numberString << endl;
    
    cout << getDivisionTitle("string to int", DEFAULT_DIVIDER, DEFAULT_WIDTH) << endl;
    
    std::string::size_type sz;   // alias of size_t

    int num = std::stoi (numberString, &sz);

    cout << "number : " << num << ", sz " << sz << ", &sz " << &sz << endl;

}

string getDivisionTitle(string title, const char ch, const int title_width) {
    if(title.empty() || title_width <= 0) {
        return NULL;
    }
    
    int width = (title_width - (int)title.size()) / 2;
    
    string buffer;
    buffer.append(width, ch);
    buffer.append(title);
    buffer.append(width, ch);
    if(title.size() % 2 > 0) {
        buffer.append(1, ch);
    }
    
    return buffer;
}

