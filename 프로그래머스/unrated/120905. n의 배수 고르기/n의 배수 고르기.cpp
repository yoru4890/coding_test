#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;
    for(const auto& e : numlist){
        if(e %n == 0){
            answer.emplace_back(e);
        }
    }
    return answer;
}