#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    map<string, int> myMap;
    
    const int MAXTIME{1439};
    
    for(const auto& s : records)
    {
        stringstream ss;
        
        ss << s;
        
        string sTime, car, move;
        ss >> sTime >> car >> move;
        
        int time{};
        
        time =  stoi(sTime.substr(0,2))*60 + stoi(sTime.substr(3,2));
        
        if(move == "IN")
        {
            myMap[car] += MAXTIME-time;
        }else
        {
            myMap[car] -= MAXTIME-time;
        }
        
    }
    
    for(const auto& [car,value] : myMap)
    {
        if(value > fees[0])
        {
            answer.push_back(fees[1] + ((value - fees[0] + fees[2] - 1) / fees[2]) * fees[3]);
        }else
        {
            answer.push_back(fees[1]);
        }
    }
    
    return answer;
}