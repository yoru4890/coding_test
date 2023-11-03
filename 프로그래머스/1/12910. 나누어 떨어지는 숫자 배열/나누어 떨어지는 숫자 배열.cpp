#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for(const auto& e : arr){
        if(e%divisor == 0){
            answer.emplace_back(e);
        }
    }
    
    sort(answer.begin(),answer.end());
    if(answer.empty()){
        answer.emplace_back(-1);
    }
    return answer;
}