#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer(arr1.size(),vector<int>(arr2[0].size()));
    for(int i{}; i<arr1.size(); i++)
    {
        for(int j{}; j<arr2[0].size(); j++)
        {
            for(int k{}; k<arr2.size(); k++)
            {
                answer[i][j] += arr1[i][k] * arr2[k][j]; 
            }
        }
    }
    return answer;
}