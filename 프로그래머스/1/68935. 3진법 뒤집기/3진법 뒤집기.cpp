#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(int n) {
    int answer {};
    stack<int> temp;
    while(n){
        temp.push(n%3);
        n/=3;
    }
    
    int num{}, three{1};
    while(!temp.empty()){
        num = temp.top();
        temp.pop();
        answer += three*num;
        three *= 3;
    }
    return answer;
}