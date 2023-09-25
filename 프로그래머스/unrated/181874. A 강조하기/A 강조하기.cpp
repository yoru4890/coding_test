#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    for(auto& e: myString){
        if(e =='a'|| e =='A'){
            e = toupper(e);
        }else{
            e = tolower(e);
        }
    }
    return myString;
}