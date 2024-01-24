#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer{1};
    queue<pair<int,int>> temp;
    priority_queue<int> process;
    for(int index{};const auto& e : priorities)
    {
        temp.emplace(make_pair(e,index++));
        process.emplace(e);
    }

    while(!temp.empty())
    {
        if(temp.front().first != process.top())
        {
            temp.emplace(temp.front());
            temp.pop();
        }else if(temp.front().first == process.top() && priorities[temp.front().second] == process.top())
        {
            if(location == temp.front().second)
            {
                return answer;
            }else
            {
                temp.pop();
                process.pop();
                answer++;
            }
        }
    }
    
    return answer;
}