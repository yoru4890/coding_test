#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int preNum{};
    bool isMinus{};
    string num;
    for(const auto& e : s){
        if(e == '-'){
            isMinus = true;
        }
        else if(e>='0'&&e<='9'){
            num += e;
        }else if(e == 'Z'){
            answer -= preNum;
            
        }else{
            if(num.empty()){continue;}
            if(isMinus){preNum = -stoi(num);}
            else{preNum = stoi(num);}
            num.clear();
            answer += preNum;
            isMinus = false;
        }
    }
    if(!num.empty()){
        if(isMinus){answer-=stoi(num);}
            else{answer += stoi(num);}
    }
    return answer;
}