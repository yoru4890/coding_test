#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    string a,oper,b;
    stringstream ss;
    ss.str(binomial);
    ss >> a >> oper >> b;
    if(oper == "+"){
        answer = stoi(a) + stoi(b);
    }else if(oper == "-"){
        answer = stoi(a) - stoi(b);
    }else{
        answer = stoi(a) * stoi(b);
    }
    return answer;
}