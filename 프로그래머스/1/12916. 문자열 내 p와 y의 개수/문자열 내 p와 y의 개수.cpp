#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    int countP{},countY{};
    
    for(const auto& e : s){
        if(e =='p' || e == 'P'){
            countP++;
        }else if(e == 'y' || e == 'Y'){
            countY++;
        }
    }
    
    return countP == countY;
}