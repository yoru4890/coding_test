#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer{1};
    int paint{section[0]};
    
    for(const auto& e : section){
        if(paint + m > e){continue;}
        else{
            paint = e;
            answer++;
        }
    }
    
    return answer;
}