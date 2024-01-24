#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer{1};
    queue<pair<int,int>> temp;
    queue<pair<int,int>> temp2;
    for(int index{};const auto& e : priorities)
    {
        temp.emplace(make_pair(e,index));
        index++;
    }
    
    while(!temp.empty() || !temp2.empty())
    {
        if(temp.empty())
        {
            while(!temp2.empty())
            {
                if(temp.empty() || temp.front().first >= temp2.front().first)
                {
                    temp.emplace(temp2.front());
                    temp2.pop();
                }else
                {
                    while(!temp.empty())
                    {
                        temp2.emplace(temp.front());
                        temp.pop();
                    }
                    temp.emplace(temp2.front());
                    temp2.pop();
                }
            }
            if(temp.front().second == location)
            {
                return answer;
            }
            
            temp.pop();
        }else
        {
            while(!temp.empty())
            {
                if(temp2.empty() || temp2.front().first >= temp.front().first)
                {
                    temp2.emplace(temp.front());
                    temp.pop();
                }else
                {
                    while(!temp2.empty())
                    {
                        temp.emplace(temp2.front());
                        temp2.pop();
                    }
                    temp2.emplace(temp.front());
                    temp.pop();
                }
            }
            if(temp2.front().second == location)
            {
                return answer;
            }
            
            temp2.pop();
        }
        answer++;
    }
    
    return answer;
}