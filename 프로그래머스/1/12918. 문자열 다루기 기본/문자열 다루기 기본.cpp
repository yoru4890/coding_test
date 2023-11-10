#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    int size{static_cast<int>(s.size())};
    if(size !=4 && size != 6){return false;}
    for(const auto& c : s){
        if(c <'0' || c >'9'){return false;}
    }
    return true;
}