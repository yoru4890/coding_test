#include <string>
#include <vector>

using namespace std;

int solution(int balls, int share) {
    long long answer = 1;
    share = min(share, balls-share);
    for(int i=balls,j=1; j<=share; i--,j++){
        answer *= i;
        answer /= j;
    }
    return answer;
}