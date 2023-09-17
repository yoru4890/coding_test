#include <string>
#include <vector>
#include <string>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    for(const auto& e : intStrs){
        int temp {stoi(e.substr(s,l))};
        if(k < temp){answer.push_back(temp);}
    }
    return answer;
}