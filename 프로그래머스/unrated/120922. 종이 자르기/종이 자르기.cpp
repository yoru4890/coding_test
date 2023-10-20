#include <string>
#include <vector>

using namespace std;

int solution(int M, int N) {
    return min((M-1)+(N-1)*M,(N-1)+(M-1)*N);
}