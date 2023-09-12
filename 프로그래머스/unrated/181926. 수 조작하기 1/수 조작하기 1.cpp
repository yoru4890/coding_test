#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(int n, string control) {
    map<char, int> count;
    for(const auto& e : control){
        count[e]++;
    }
    return n+count['w']-count['s']+10*(count['d']-count['a']);
}