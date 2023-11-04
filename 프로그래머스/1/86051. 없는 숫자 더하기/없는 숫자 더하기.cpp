#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer {};
    for(const auto& e : numbers){
        answer += e;
    }
    
    return 45-answer;
}