#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    vector<int> count(26);
    string answer = "";
    for(const auto& e : s){
        count[e-'a']++;
    }
    for(int i=0; i<26;i++){
        if(count[i] == 1){
            answer+= i+'a';
        }
    }
    return answer;
}