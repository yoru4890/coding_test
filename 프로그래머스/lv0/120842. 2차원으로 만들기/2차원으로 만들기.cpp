#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    int row{static_cast<int>(num_list.size())/n};
    vector<vector<int>> answer(row, vector<int>(n));
    for(int i=0; i<row; i++){
        for(int j=0; j<n; j++){
            answer[i][j] = num_list[n*i+j];
        }
    }
    return answer;
}