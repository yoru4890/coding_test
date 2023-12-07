#include <string>
#include <vector>
#include <queue>

using namespace std;



vector<int> solution(int k, vector<int> score) {
    priority_queue<int, vector<int>, greater<int>> rank;
    vector<int> answer;
    for(const auto& e : score){
        rank.push(e);
        if(rank.size() > k){
            rank.pop();
        }
        
        answer.emplace_back(rank.top());
        
    }
    
    return answer;
}