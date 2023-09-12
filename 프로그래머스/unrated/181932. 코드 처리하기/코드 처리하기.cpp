#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    bool mode{};
    for(int i=0; code[i]!='\0'; i++){
        if(code[i]=='1'){
            mode = !mode;
        }else{
            switch(mode){
            case false:
                if(!(i&1)){answer += code[i];}
                break;
            case true:
                if(i&1){answer += code[i];}
                break;
            }
        }
    }
    if(answer.empty()){answer = "EMPTY";}
    return answer;
}