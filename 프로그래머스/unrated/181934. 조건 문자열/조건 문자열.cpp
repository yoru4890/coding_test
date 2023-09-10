#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    int answer = 0;
    answer = ineq == ">" ? eq == "=" ? n>=m : n > m : eq == "=" ? n <= m : n < m;
    return answer;
}