#include <string>
#include <vector>

using namespace std;

int solution(string num_str) {
    int answer{};
    for(const auto& e : num_str){
        answer += e-'0';
    }
    return answer;
}