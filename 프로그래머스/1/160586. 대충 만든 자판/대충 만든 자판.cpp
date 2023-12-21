#include <string>
#include <vector>
#include <limits>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    vector<int> counts(26,numeric_limits<int>::max());
    int input{}, inputSum{};
    for(const auto& s : keymap){
        input = 1;
        for(const auto& c : s){
            counts[c-'A'] = min(counts[c-'A'], input);
            input++;
        }
    }
    for(const auto& s : targets){
        inputSum = 0;
        for(const auto& c : s){
            if(counts[c-'A'] == numeric_limits<int>::max()){
                inputSum = -1;
                break;
            }
             inputSum += counts[c-'A'];
        }
        answer.emplace_back(inputSum);
    }
    return answer;
}