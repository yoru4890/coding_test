#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    const int MAX_NUM{100'000};
    vector<int> counts(MAX_NUM+1);
    vector<int> answer;
    string temp;
    
    for(const auto& c : s)
    {
        if(c >= '0' && c<='9')
        {
            temp += c;
        }else if(!temp.empty())
        {
            counts[stoi(temp)]++;
            temp.clear();
        }
    }
    
    vector<pair<int,int>> result;
    
    for(int i{}; i<=MAX_NUM; i++)
    {
        if(counts[i])
        {
            result.emplace_back(make_pair(counts[i],i));
        }
    }
    
    sort(result.begin(), result.end(),[](const pair<int,int>& a, const pair<int,int>& b)
         {return a.first > b.first;});
    
    for(const auto& [num, index] : result)
    {
        answer.emplace_back(index);
    }
    
    return answer;
}