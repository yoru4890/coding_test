#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> pos(26,-1);
    vector<int> answer;
    int i{};
    for(const auto& c : s){
        if(pos[c-'a'] == -1){
            answer.emplace_back(pos[c-'a']);
        }else{
            answer.emplace_back(i-pos[c-'a']);
        }
        pos[c-'a'] = i;
        i++;
    }
    return answer;
}