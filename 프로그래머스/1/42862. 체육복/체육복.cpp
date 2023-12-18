#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer{};
    vector<int> have(n+1,1);
    for(const auto& e : lost){
        have[e]--;
    }
    for(const auto& e : reserve){
        have[e]++;
    }
    
    for(int i{1}; i<=n;i++){
        if(!have[i]){
            if(have[i-1]==2){
                have[i-1]--;
                answer++;
            }else if(have[i+1] == 2){
                have[i+1]--;
                answer++;
            }
        }else{
            answer++;
        }
    }
    
    return answer;
}