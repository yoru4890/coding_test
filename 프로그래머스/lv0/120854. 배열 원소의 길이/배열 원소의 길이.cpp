#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
    for(auto& e : strlist){
        answer.emplace_back(e.size());
    }
    return answer;
}