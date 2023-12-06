#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    map<string,int> point;
    vector<int> answer;
    for(int i{}; i<name.size();i++){
        point[name[i]]=yearning[i];
    }
    for(const auto& row : photo){
        int temp{};
        for(const auto& e : row){
            temp += point[e];
        }
        answer.emplace_back(temp);
    }
    
    return answer;
}