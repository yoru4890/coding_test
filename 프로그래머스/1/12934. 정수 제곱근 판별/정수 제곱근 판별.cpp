#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long temp {static_cast<long long>(sqrt(n))};
    return temp*temp == n ? (temp+1)*(temp+1) : -1;
}