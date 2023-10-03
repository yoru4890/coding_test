#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    int count{};
    if(n_str[0] == '0'){
        for(const auto& e : n_str){
            if(e != '0'){break;}
            count++;
        }
    }
    return n_str.substr(count);
}