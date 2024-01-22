#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer{};
    vector<int> temp;
    for(int index{};const auto& num : progresses)
    {
        temp.emplace_back((100-num + speeds[index] -1)/speeds[index]);
        index++;
    }
    stack<int> myStack;
    int counts{};
    for(const auto& num : temp)
    {
        if(myStack.empty())
        {
            myStack.push(num);
            counts = 1;
        }else if(myStack.top() >= num)
        {
            counts++;
        }else
        {
            answer.emplace_back(counts);
            myStack.pop();
            myStack.push(num);
            counts = 1;
        }
    }
    answer.emplace_back(counts);
    return answer;
}