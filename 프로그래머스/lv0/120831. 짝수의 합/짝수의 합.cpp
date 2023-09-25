#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    if(n&1){n--;}
    n/=2;
    return n*(n+1);
}