#include <string>
#include <vector>
#include <limits>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(const auto& row : queries){
        int minE{10'000'000};
        for(int i = row[0]; i<=row[1]; i++){
            if(row[2] < arr[i]){
                minE = min(minE,arr[i]);
            }
        }
        if(minE == 10'000'000){answer.push_back(-1);}
        else {answer.push_back(minE);}
    }
    return answer;
}