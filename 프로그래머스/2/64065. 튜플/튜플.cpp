#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    const int MAX_NUM{100'000};
    vector<pair<int,int>> counts(MAX_NUM+1);
    vector<int> answer;
    string temp;
    
    for(int i{}; i<=MAX_NUM; i++)
    {
        counts[i].second = i;
    }
    
    for(const auto& c : s)
    {
        if(c >= '0' && c<='9')
        {
            temp += c;
        }else if(!temp.empty())
        {
            counts[stoi(temp)].first++;
            temp.clear();
        }
    }
    
    sort(counts.begin(), counts.end(),[](const pair<int,int>& a, const pair<int,int>& b)
         {return a.first > b.first;});
    
    for(const auto& [num, index] : counts)
    {
        if(num == 0){break;}
        answer.emplace_back(index);
    }
    
    return answer;
}