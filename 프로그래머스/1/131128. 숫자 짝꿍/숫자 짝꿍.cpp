#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y) {
    vector<int> numX(10), numY(10), numCommon(10);
    string answer;
    bool isHave{}, isZero{true};
    for(const auto& e : X){numX[e-'0']++;}
    for(const auto& e : Y){numY[e-'0']++;}
    
    for(int i{}; i<10; i++){
        numCommon[i] = min(numX[i],numY[i]);
    }
    
    for(int i{9}; i>=0;i--){
        if(numCommon[i]){
            isHave = true;
            while(numCommon[i]--){
                answer += to_string(i);
            }
        }
    }
    
    for(const auto& e : answer){
        if(e!='0'){isZero =false;}
    }
    
    return isHave ? isZero ? "0" : answer : "-1";
}