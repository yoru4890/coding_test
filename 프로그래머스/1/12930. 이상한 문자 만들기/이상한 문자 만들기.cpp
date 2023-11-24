#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    
    for(int index{};auto& c : s){
        if(c == ' '){
            index = 0;
            continue;
        }else{
            if(index++&1){
                c = tolower(c);
            }else{
                c = toupper(c);
            }
        }
    }
    return s;
}