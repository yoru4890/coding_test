#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(const auto& e : commands){
        vector<int> temp;
        for(int i{e[0]-1}; i<e[1];i++){
            temp.emplace_back(array[i]);
        }
        sort(temp.begin(),temp.end());
        answer.emplace_back(temp[e[2]-1]);
    }
    return answer;
}