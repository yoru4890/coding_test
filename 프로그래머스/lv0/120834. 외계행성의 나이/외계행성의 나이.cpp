#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    answer = to_string(age);
    for(auto& e : answer){
        e += ('a'-'0');
    }
    return answer;
}