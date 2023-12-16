#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y) {
    vector<int> numX(10), numY(10), numCommon(10);
    string answer;
    for(const auto& e : X){numX[e-'0']++;}
    for(const auto& e : Y){numY[e-'0']++;}
    
    for(int i{}; i<10; i++){
        numCommon[i] = min(numX[i],numY[i]);
    }
    
    for(int i{9}; i>=0;i--){
        if(numCommon[i]){
            while(numCommon[i]--){
                answer += to_string(i);
            }
        }
    }
    
    return answer !="" ? answer[0]=='0'&&answer.size()>1 ? "0" : answer : "-1";
}