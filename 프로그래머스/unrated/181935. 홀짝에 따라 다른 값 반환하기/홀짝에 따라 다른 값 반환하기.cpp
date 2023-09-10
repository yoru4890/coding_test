#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    if(n&1){
        int temp{(n+1)/2};
        answer = temp*temp;
    }else{
        for(int i=n; i>0; i-=2){
            answer += i*i;
        }
    }
    return answer;
}