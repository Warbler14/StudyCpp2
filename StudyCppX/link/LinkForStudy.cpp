//
//  LinkForStudy.cpp
//  StudyCppX
//
//  Created by kook on 2023/05/05.
//

#include "LinkForStudy.hpp"

vector<string> split(string input, char delimiter) {
    vector<string> answer;
    stringstream ss(input);
    string temp;
 
    while (getline(ss, temp, delimiter)) {
        answer.push_back(temp);
    }
 
    return answer;
}

int getSecond(string time) {
    vector<string> nodes = split(time, ':');
    
    int nodeSize = (int)nodes.size();
    
    if (nodeSize == 1) {
        return stoi(nodes[0]);
    }
    
    if (nodeSize == 2) {
        int minute = stoi(nodes[0]);
        int second = stoi(nodes[1]);
        return minute * 60 + second;
    }
    
    if (nodeSize == 3) {
        int hour = stoi(nodes[0]);
        int minute = stoi(nodes[1]);
        int second = stoi(nodes[2]);
        return hour * 3600 + minute * 60 + second;
    }
    
    return 0;
}

string getLink(string homepage, string page, string time) {
    string link = homepage + "/watch?v=" + page + "&t=";
    link += to_string(getSecond(time)) + "s";
    return link;
}

void LinkForStudy::execute() {
    
    string homepage = "https://www.youtube.com";
    string page = "8jLOx1hD3_o";

    string time1 = "1:57:27";
    
    cout << getLink(homepage, page, time1) << endl;
}
