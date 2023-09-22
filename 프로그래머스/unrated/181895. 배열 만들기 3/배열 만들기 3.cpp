#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    for(const auto& row : intervals){
        for(int i=row[0]; i<=row[1]; i++){
            answer.emplace_back(arr[i]);
        }
    }
    return answer;
}