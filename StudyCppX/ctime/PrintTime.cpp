//
//  PrintTime.cpp
//  ctime StudyCppX
//
//  Created by kook on 2021/04/25.
//

#include "PrintTime.hpp"

string getMonth(const int mon);

void PrintTime::print() {
    time_t timer = time(NULL);
    
    struct tm * t = localtime(&timer);
    
    printf("유닉스 타임 (Unix Time): %ld 초\n", timer);
    printf("현재 년: %d\n", t->tm_year + 1900);
    printf("현재 월: %d\n", t->tm_mon + 1);
    printf("현재 일: %d\n", t->tm_mday);
    printf("현재 시: %d\n", t->tm_hour);
    printf("현재 분: %d\n", t->tm_min);
    printf("현재 초: %d\n", t->tm_sec);
    printf("현재 요일: %d\n", t->tm_wday); // 일=0, 월=1, 화=2, 수=3, 목=4, 금=5, 토=6
    printf("올해 몇 번째 날: %d\n", t->tm_yday); // 1월 1일은 0, 1월 2일은 1
    printf("서머타임 적용 여부: %d\n", t->tm_isdst); // 실시 중이면 양수, 미실시면 0, 실시 정보가 없으면 음수
}

void PrintTime::print2() {
    // current date/time based on current system
    time_t now = time(0);

    cout << "Number of sec since January 1,1970 is:: " << now << endl;

    tm *ltm = localtime(&now);

    // print various components of tm structure.
    cout << "Year:" << 1900 + ltm->tm_year <<endl;
    cout << "Month: " << 1 + ltm->tm_mon;
    cout << " " << getMonth(ltm->tm_mon) << endl;
    cout << "Day: " << ltm->tm_mday << endl;
    cout << "Time: " << 5+ltm->tm_hour << ":";
    cout << 30+ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;
}

string getMonth(const int mon) {
    switch (mon) {
        case 0:
            return "January";
        case 1:
            return "February";
        case 2:
            return "March";
        case 3:
            return "April";
        case 4:
            return "May";
        case 5:
            return "June";
        case 6:
            return "July";
        case 7:
            return "August";
        case 8:
            return "September";
        case 9:
            return "October";
        case 10:
            return "November";
        case 11:
            return "December";
        default:
            break;
    }
    
    return "";
}
