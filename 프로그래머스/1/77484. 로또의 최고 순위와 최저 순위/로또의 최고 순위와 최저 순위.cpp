#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<bool> isGoal(46);
    vector<int> answer;
    int counts{7},zeroCounts{};
    for(const auto& e : win_nums){
        isGoal[e] = true;
    }
    for(const auto& e : lottos){
        if(isGoal[e]){counts--;}
        if(e == 0){zeroCounts++;}
    }
    
    answer.emplace_back(counts-zeroCounts > 5 ? 6 : counts-zeroCounts);
    answer.emplace_back(counts > 5 ? 6 : counts);
    
    return answer;
}