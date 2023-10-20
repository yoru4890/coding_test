#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    while(A != B){
        answer++;
        rotate(A.rbegin(),A.rbegin()+1,A.rend());
        if(answer > A.size() ){return -1;}
    }
    return answer;
}