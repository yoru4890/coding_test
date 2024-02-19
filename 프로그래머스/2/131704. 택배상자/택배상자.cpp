#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<int> order) {
    int answer {};
    stack<int> temp;
    int box{1};
    for(const auto& e : order)
    {
        if(box == e)
        {
            box++;
            answer++;
            continue;
        }
        
        if(!temp.empty() && temp.top() == e)
        {
            temp.pop();
            answer++;
            continue;
        }
        
        while(box <= order.size() && box < e)
        {
            temp.push(box++);
        }
        
        if(box == e)
        {
            box++;
            answer++;
            continue;
        }
        
        if(box != e && !temp.empty() && temp.top() != e)
        {
            break;
        }
    }
    return answer;
}