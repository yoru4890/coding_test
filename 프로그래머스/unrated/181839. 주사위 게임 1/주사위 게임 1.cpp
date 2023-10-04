#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b) {
    int answer {};
    if(a&1 && b&1){
        answer = pow(a,2)+pow(b,2);
    }else if(!(a&1) && !(b&1)){
        answer = abs(a-b);
    }else{
        answer = 2*(a+b);
    }
    return answer;
}