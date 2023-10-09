#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    for(auto& e : my_string){
        if(e>='a' && e<='z'){
            e += ('A'-'a');
        }else{
            e += ('a'-'A');
        }
    }
    return my_string;
}