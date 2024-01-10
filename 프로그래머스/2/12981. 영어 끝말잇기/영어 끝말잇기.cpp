#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer{0,0};
    unordered_map<string, bool> log;
    log[words[0]] = true;
    for(int i{1}; i<words.size(); i++){
        if(log[words[i]] || words[i][0] != words[i-1].back()){
            return{i%n + 1, i/n + 1};
        }else{
            log[words[i]] = true;
        }
    }
    return answer;
}