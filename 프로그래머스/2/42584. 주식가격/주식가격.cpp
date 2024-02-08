#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> prices) {
    int size = prices.size();
    vector<int> answer(size);
    stack<int> myStack;
    myStack.push(0);
    for(int i{1}; i<size; i++)
    {
        while(!myStack.empty() && prices[myStack.top()] > prices[i])
        {
            int index{ myStack.top() };
            answer[index] = i - index;
            myStack.pop();
        }
        
        myStack.push(i);
    }
    
    size--;
    while(!myStack.empty())
    {
        int index{ myStack.top() };
        answer[index] = size - index;
        myStack.pop();
    }
    return answer;
}