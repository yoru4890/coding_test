#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    answer.emplace_back(arr[0]);
    for(int i=0; i<arr.size(); i++){
        if(find(answer.begin(),answer.end(),arr[i])!=answer.end()){continue;}
        answer.emplace_back(arr[i]);
    }
    if(k > answer.size()){
        for(int i = k-answer.size(); i>0 ;i--){
            answer.emplace_back(-1);
        }
    }else{
        return vector<int>{answer.begin(),answer.begin()+k};
    }
    return answer;
}