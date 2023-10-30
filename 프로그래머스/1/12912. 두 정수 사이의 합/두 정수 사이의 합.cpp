#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if(a > b){swap(a,b);}
    answer = static_cast<long long>(a+b)*(b-a+1)/2;
    return answer;
}