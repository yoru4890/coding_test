#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n,vector<int>(n));
    int i{}, j{n-1}, num{1}, temp{n-1};
    
    for(int k=0; k<n; k++){
        answer[i][k] = num++;
    }
    
    while(num <=n*n){
        for(int k = 0; k <temp; k++){
            answer[++i][j] = num++;        
        }
        for(int k=0; k<temp; k++){
            answer[i][--j] = num++;
        }
        temp--;
        for(int k=0; k<temp; k++){
            answer[--i][j] = num++;
        }
        for(int k =0; k<temp; k++){
            answer[i][++j] = num++;
        }
        temp--;
    }
    return answer;
}