#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    string answer = "";
    for(const auto& e : rny_string){
        if(e !='m'){
            answer += e;
        }else{
            answer += "rn";
        }
    }
    return answer;
}