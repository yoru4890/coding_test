#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    bool mode{};
    for(int i=0; code[i]!='\0'; i++){
        if(code[i]!='1'&&!mode && !(i&1)){
            answer += code[i];
        }else if(code[i]!='1'&&mode && (i&1)){
            answer += code[i];
        }
        
        if(code[i]=='1'){
            mode = !mode;
        }
            
        
    }
    if(answer ==""){answer = "EMPTY";}
    return answer;
}