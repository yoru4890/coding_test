#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for(const auto& e : queries){
        for(int i=e[0]; i<=e[1]; i++){
            arr[i]++;
        }
    }
    return arr;
}