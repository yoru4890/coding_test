#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for(const auto& row : queries){
        for(int i=row[0]; i<=row[1];i++){
            if(i % row[2] == 0){
                arr[i]++;
            }
        }
    }
    return arr;
}