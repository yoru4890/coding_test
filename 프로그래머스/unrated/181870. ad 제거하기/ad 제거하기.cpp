#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for(auto& e : strArr){
        if(e.find("ad")==string::npos){
             answer.emplace_back(e);
        }
    }
    return answer;
}