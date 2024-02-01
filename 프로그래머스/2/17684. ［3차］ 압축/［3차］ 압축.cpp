#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(string msg) {
    vector<int> answer;
    unordered_map<string, int> dic;
    dic[""] = -1;
    int index{};
    int size = msg.size();
    for(string i{"A"}; i[0]<='Z'; i[0]++)
    {
        dic[i] = ++index;
    }
    
    for(int i{}; i<size; i--)
    {
        string temp{};
        while(dic[temp])
        {
            temp += msg[i++];
        }
        
        dic[temp] = ++index;
        temp.pop_back();
        answer.push_back(dic[temp]);
    }
    return answer;
}