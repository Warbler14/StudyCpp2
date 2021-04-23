//
//  main.cpp
//  StudyCpp01
//
//  Created by kook on 2021/04/23.
//

#include <iostream>
#include <ctime>

int main(int argc, const char * argv[]) {
    
    time_t timer = time(NULL);
    struct tm * t = localtime(&timer);
    printf("유닉스 타임 (Unix Time): %ld 초\n\n", timer);
    printf("현재 년: %d\n", t->tm_year + 1900);
    printf("현재 월: %d\n", t->tm_mon + 1);
    printf("현재 일: %d\n", t->tm_mday);
    printf("현재 시: %d\n", t->tm_hour);
    printf("현재 분: %d\n", t->tm_min);
    printf("현재 초: %d\n", t->tm_sec);
    printf("현재 요일: %d\n", t->tm_wday); // 일=0, 월=1, 화=2, 수=3, 목=4, 금=5, 토=6
    printf("올해 몇 번째 날: %d\n", t->tm_yday); // 1월 1일은 0, 1월 2일은 1
    printf("서머타임 적용 여부: %d\n", t->tm_isdst); // 실시 중이면 양수, 미실시면 0, 실시 정보가 없으면 음수
        
    
    
    return 0;
}
