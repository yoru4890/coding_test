#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int size{static_cast<int>(arr.size())};
    int start{}, end{-1};
    for(int i=0; i<size;i++){
        if(arr[i] == 2){
            start = i;
            break;
        }
    }
     for(int i=size; i>-1;i--){
        if(arr[i] == 2){
            end = i;
            break;
        }
    }
    for(int i=start; i<=end; i++){
        answer.emplace_back(arr[i]);
    }
    if(answer.empty()){answer.emplace_back(-1);}
    return answer;
}