#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int size{static_cast<int>(p.size())};
    int answer{};
    
    for(int i{}; i<=t.size()-size; i++){
        if(t.substr(i,size) <= p){
            answer++;
        }
    }
    return answer;
}