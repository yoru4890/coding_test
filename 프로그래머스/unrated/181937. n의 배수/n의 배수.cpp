#include <string>
#include <vector>

using namespace std;

int solution(int num, int n) {
    int answer = 0;
    answer = num % n ? 0 : 1;
    return answer;
}