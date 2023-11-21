#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int row{static_cast<int>(arr1.size())}, col{static_cast<int>(arr1[0].size())};
    vector<vector<int>> answer(row, vector<int>(col));
    for(int i{}; i<row; i++){
        for(int j{}; j<col; j++){
            answer[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    return answer;
}