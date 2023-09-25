#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) {
    for(auto& e: my_string){
        if(e == alp[0]){
            e = toupper(e);
        }
    }
    return my_string;
}