#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> temp;
    for(int index{};const auto& num : progresses)
    {
        temp.emplace_back((100-num + speeds[index] -1)/speeds[index]);
        index++;
    }
    queue<int> myQueue;
    for(const auto& num : temp)
    {
        if(myQueue.empty() || myQueue.front() >= num)
        {
            myQueue.push(num);
        }else
        {
            answer.emplace_back(myQueue.size());
            while(!myQueue.empty())
            {
                myQueue.pop();
            }
            myQueue.push(num);
        }
        
    }
    answer.emplace_back(myQueue.size());
    return answer;
}