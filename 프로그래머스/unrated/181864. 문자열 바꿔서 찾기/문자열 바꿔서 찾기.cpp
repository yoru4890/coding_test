#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    for(auto& e: myString){
        if(e=='A'){
            e = 'B';
        }else if(e == 'B'){
            e = 'A';
        }
    }
    
    return myString.find(pat) == string::npos ? 0 : 1;
}