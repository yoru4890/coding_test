#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    
    s[0] = toupper(s[0]);
    
    for(int index{1};auto& c : s){
        if(s[index-1] == ' '){
            s[index] = toupper(s[index]);
        }else{
            s[index] = tolower(s[index]);
        }
        index++;
    }

    return s;
}