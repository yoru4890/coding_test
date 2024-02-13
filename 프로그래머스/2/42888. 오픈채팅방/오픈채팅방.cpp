#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    unordered_map<string, int> sIndex;
    int index{1};
    vector<string> names(1);
    for(const auto& s : record)
    {
        stringstream ss;
        ss << s;
        string input, id, name;
        ss >> input >> id >> name;
        if(input == "Enter")
        {
            int* pIndex{};
            pIndex = &sIndex[id];
            if(!*pIndex)
            {
                names.push_back(name);
                *pIndex = index++;
            }else
            {
                names[*pIndex] = name;
            }
            
            answer.push_back(to_string(*pIndex) + " Enter");
        }else if(input == "Leave")
        {
            int* pIndex{};
            pIndex = &sIndex[id];
            
            answer.push_back(to_string(*pIndex) + " Leave");
        }else
        {
            int* pIndex{};
            pIndex = &sIndex[id];
            
            names[*pIndex] = name;
        }
    }
    
    for(auto& s : answer)
    {
        stringstream ss;
        int tempIndex;
        string input;
        ss << s;
        ss >> tempIndex >> input;
        if(input == "Enter")
        {
            s = names[tempIndex]+"님이 들어왔습니다.";
        }else
        {
            s = names[tempIndex]+"님이 나갔습니다.";
        }
    }
    return answer;
}