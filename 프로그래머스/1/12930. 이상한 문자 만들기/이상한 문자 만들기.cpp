#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    s+=' ';
    string answer;
    string temp;
    for(const auto& e : s){
        if(e != ' '){
            temp+=e;
        }else{
            for(int i{}; i<temp.size(); i++){
                if(!(i&1)){
                    if(temp[i]>='a'&&temp[i]<='z'){
                        temp[i]+=('A'-'a');
                    }
                }else{
                    if(temp[i]>='A' && temp[i]<='Z'){
                        temp[i]+=('a'-'A');
                    }
                }
            }
            answer += temp;
            answer += ' ';
            temp.clear();
        }
    }
    answer.pop_back();
    return answer;
}