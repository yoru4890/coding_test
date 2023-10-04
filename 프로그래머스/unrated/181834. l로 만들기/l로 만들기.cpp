#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    for(auto& e : myString){
        if(e <'l'){
            e = 'l';
        }
    }
    return myString;
}