#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> numbers) {
    int size = numbers.size();
    vector<int> answer(size,-1);
    stack<int> temp;
    
    for(int i{size-1}; i > -1; i--)
    {
        while(!temp.empty() && temp.top() <= numbers[i])
        {
            temp.pop();
        }
        
        if(!temp.empty())
        {
            answer[i] = temp.top();
        }
        
        temp.push(numbers[i]);
    }
    
    return answer;
}