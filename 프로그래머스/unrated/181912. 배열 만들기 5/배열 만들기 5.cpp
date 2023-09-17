#include <string>
#include <vector>
#include <string>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    for(const auto& e : intStrs){
        string str;
        for(int i=s; i<s+l;i++){
            str += e[i];
        }
        int temp {stoi(str)};
        if(k < temp){answer.push_back(temp);}
    }
    return answer;
}