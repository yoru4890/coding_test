#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    vector<int> alphabets(26);
    vector<int> period;
    stringstream ss;
    
    int todayNum{stoi(today.substr(2,2))*12 + stoi(today.substr(5,2))};

    for(const auto& e : terms){
        ss.clear();
        ss << e;
        char c;
        int day;
        ss >> c >> day;
        alphabets[c-'A'] = day;
    }
    
    for(int index{1};const auto& e : privacies){
        int num(stoi(e.substr(2,2)) * 12 + stoi(e.substr(5,2)) + alphabets[e[11]-'A']);
        
        if(num < todayNum){
            answer.push_back(index);
        }else if( num == todayNum){
            if(e.substr(8,2) <= today.substr(8,2)){
                answer.push_back(index);
            }
        }
        
        index++;
    }
    
    return answer;
}
