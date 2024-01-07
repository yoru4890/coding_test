#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    int ccount{};
    
    for(const auto& c : s){
        if(ccount < 0){return false;}
        
        if(c == '('){
            ccount++;
        }else{
            ccount--;
        }
    }

    return ccount == 0;
}