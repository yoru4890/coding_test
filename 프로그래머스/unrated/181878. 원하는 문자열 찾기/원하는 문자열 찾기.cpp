#include <string>
#include <vector>

using namespace std;

bool Check(string& myString, string& pat, int index);

int solution(string myString, string pat) {
    int answer = 0;
    for(auto& e : myString){
        if(e>='A'&&e<='Z'){
            e -= ('A'-'a');
        }
    }
    for(auto& e : pat){
        if(e>='A'&&e<='Z'){
            e -= ('A'-'a');
        }
    }
    
    int i{};
    for(const auto& e : myString){
        if(e== pat[0]){
            if(Check(myString,pat,i)){
                return 1;
            }
        }
        i++;
    }
    return 0;
}

bool Check(string& myString, string& pat, int index){
    for(int i=1, j=index+1; pat[i]!='\0'; i++,j++){
        if(myString[j] != pat[i]){return false;}
    }
    return true;
}