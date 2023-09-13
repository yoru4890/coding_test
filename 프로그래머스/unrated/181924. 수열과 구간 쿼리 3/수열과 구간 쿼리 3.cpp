#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for(const auto& row : queries){
        swap(arr[row[0]],arr[row[1]]);
    }
    return arr;
}