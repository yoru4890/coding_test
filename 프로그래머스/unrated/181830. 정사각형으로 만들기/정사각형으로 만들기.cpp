#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    int row{static_cast<int>(arr.size())},
        col{static_cast<int>(arr[0].size())};
    int dif{abs(row-col)};
    if(row > col){
        for(int i=0; i<row;i++){
            for(int j=0; j<dif; j++){
                arr[i].emplace_back(0);
            }
        }
    }else if(row < col){
        while(dif--){
            vector<int>temp(col);
            arr.emplace_back(temp);
        }
    }
    return arr;
}