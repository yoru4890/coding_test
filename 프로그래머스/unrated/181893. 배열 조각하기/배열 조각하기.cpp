#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer;
    int start{},end{};
    for(int i{};const auto& e : query){
        if(i&1){
            start = start + e;
        }else{
            end = start+e;
        }
        i++;
    }
    
    answer = vector<int>(arr.begin()+start,arr.begin()+end+1);
    return answer;
}