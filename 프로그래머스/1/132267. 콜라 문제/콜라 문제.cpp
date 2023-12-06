#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer{};
    while(n>=a){
        answer += (n/a)*b;
        n =(n/a)*b + n%a;
    }
    return answer;
}