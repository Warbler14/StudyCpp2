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
    cout << getDivisionTitle("test boolean", DEFAULT_DIVIDER, DEFAULT_WIDTH) << endl;
    
    cout << "true : " << true << endl;
    cout << "false : " << false << endl;
    
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

void Print::printArray() {
    string cars[] = {"Volvo", "BMW", "Ford"};
    
    for (int idx = 0 ; idx < 3 ; idx++) {
        string &car = cars[idx];
        string _car = cars[idx];
        cout << cars[idx] << " " << car << " " << _car << endl;
    }
}

void swap(int &x, int&y) {
    int z = x;
    x = y;
    y = z;
}

void swap(long &x, long&y) {
    long z = x;
    x = y;
    y = z;
}

void Print::swapTest() {
    int x = 10;
    int y = 20;
    swap(x, y);
    cout << x << y << endl;
    
    long xl = 1000;
    long yl = 2000;
    
    swap(xl, yl);
    cout << xl << yl << endl;
}

void Print::stdIn() {
    cout << getDivisionTitle("message input test", DEFAULT_DIVIDER, DEFAULT_WIDTH) << endl;
    
    string message;
    cout << "Type message : ";
//    getline(cin, message);
    cin >> message;
    cout << "message is : " << message << endl;
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

