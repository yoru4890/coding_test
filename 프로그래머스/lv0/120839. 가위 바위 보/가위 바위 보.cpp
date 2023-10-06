#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    for(const auto& e :rsp){
        if(e == '2'){
            answer += '0';
        }else if(e == '0'){
            answer += '5';
        }else{
            answer += '2';
        }
    }
    return answer;
}