#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    for(int i{}; i<n; i++){
        string temp;
        for(int j{n-1}; j>=0; j--){
            temp+= (arr1[i] & (1<<j) || arr2[i] & (1<<j)) ? '#' : ' ';
        }
        answer.emplace_back(temp);
    }
    return answer;
}