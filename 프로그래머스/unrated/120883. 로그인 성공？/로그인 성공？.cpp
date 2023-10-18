#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    bool isFail{},isLogin{};
    for(const auto& e : db){
        if(e[0] == id_pw[0]){
            isFail = true;
            if(e[1] == id_pw[1]){
                isLogin = true;
            }
        }
    }
    return isFail ? isLogin ? "login":"wrong pw" : "fail";
}