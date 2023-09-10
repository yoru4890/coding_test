#include <string>
#include <vector>

using namespace std;

int solution(int number, int n, int m) {
    int answer = 0;
    answer = number % n || number % m ? 0 : 1;
    return answer;
}