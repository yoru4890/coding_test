#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    int ccount{};
    
    for(const auto& c : s){
        if(c == '('){
            ccount++;
        }else{
            if(ccount <= 0){return false;}
            ccount--;
        }
    }

    return ccount > 0 ? false : true;
}