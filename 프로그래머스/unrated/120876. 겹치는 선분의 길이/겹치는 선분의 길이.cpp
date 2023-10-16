#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer{};
    bool isTwo{};
    for(double i=-99.5; i<=100.5;i++){
        int count{};
        for(const auto& e : lines){
            if(i>=e[0] && i<=e[1]){
                count++;
            }
        }
        if(!isTwo && count >= 2){
            isTwo = true;
            answer++;
        }else if(isTwo && count >= 2){
            answer++;
        }else if(isTwo && count < 2){
            isTwo =false;
        }
    }
    return answer;
}