#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    string temp{to_string(order)};
    for(const auto& e : temp){
        if(e == '3' || e == '6' || e == '9'){
            answer++;
        }
    }
    return answer;
}