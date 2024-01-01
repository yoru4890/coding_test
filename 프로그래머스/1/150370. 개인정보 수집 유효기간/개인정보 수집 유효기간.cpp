#include <string>
#include <vector>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    vector<int> alphabets(26);
    vector<int> period;
    int todayNum{};
    string toYear;
    string toMonth;
    string toDay;
    toYear += today[2];
    toYear += today[3];
    toMonth += today[5];
    toMonth += today[6];
    toDay += today[8];
    toDay += today[9];
    todayNum = stoi(toYear)*12 + stoi(toMonth);
  
    for(const auto& e : terms){
        string temp{};
        for(int i{2}; e[i]!='\0';i++){
            temp += e[i];
        }
        alphabets[e[0]-'A'] = stoi(temp);
    }
    
    for(int index{1};const auto& e : privacies){
        string year, month, day;
        char temp;
        year += e[2];
        year += e[3];
        month += e[5];
        month += e[6];
        day += e[8];
        day += e[9];
        temp = e[11];
        
        int num(stoi(year) * 12 + stoi(month) + alphabets[temp-'A']);
        if(num < todayNum){
            answer.push_back(index);
        }else if( num == todayNum){
            if(day <= toDay){
                answer.push_back(index);
            }
        }
        
        index++;
    }
    
    return answer;
}
