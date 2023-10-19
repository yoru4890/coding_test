#include <string>
#include <vector>
#include <stack>

using namespace std;

string solution(string bin1, string bin2) {
    stack<char> num1;
    stack<char> num2;
    int plus{};
    string answer = "";
    for(const auto& e : bin1){
        num1.push(e);
    }
    for(const auto& e : bin2){
        num2.push(e);
    }
    
    while(!num1.empty() || !num2.empty()){
        int x{},y{}, result{};
        if(!num1.empty()){
            x = num1.top()-'0';
            num1.pop();
        }
        if(!num2.empty()){
            y = num2.top()-'0';
            num2.pop();
        }
        result = plus+x+y;
        if(result>1){
            plus = 1;
            result -=2;
        }else{
            plus = 0;
        }
        answer = to_string(result)+answer;
    }
    if(plus){answer = to_string(plus)+answer;}
    return answer;
}