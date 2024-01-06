#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    if(islower(s[0])){
        s[0] = toupper(s[0]);
    }
    for(int index{1};auto& c : s){
        if(s[index-1] == ' '){
            if(islower(s[index])){
                s[index] = toupper(s[index]);
             }
        }else if(isupper(s[index])){
            s[index] = tolower(s[index]);
        }
        index++;
    }

    return s;
}