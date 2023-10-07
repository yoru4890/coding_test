#include <string>
#include <vector>

using namespace std;

int Check(int num);

int solution(int n) {
    int answer = 0;
    for(int i=4; i<=n;i++){
        answer += Check(i);
    }
    return answer;
}

int Check(int num){
    for(int i=2; i<num;i++){
            if(num%i){continue;}
        return 1;
        }
    return 0;
}