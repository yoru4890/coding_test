#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(int n) {
    int answer = lcm(n,6)/6;
    return answer;
}