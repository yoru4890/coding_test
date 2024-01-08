#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
    stack<char> keepS;
    for(const auto& c : s){
        if(!keepS.empty() && keepS.top() == c){
            keepS.pop();
        }else{
            keepS.push(c);
        }
    }
    return keepS.empty();
}