#include <string>
#include <vector>
#include <numeric>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    answer.emplace_back(gcd(n,m));
    answer.emplace_back(lcm(n,m));
    return answer;
}