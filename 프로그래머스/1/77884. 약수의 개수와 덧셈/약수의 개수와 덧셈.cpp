#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int left, int right) {
    int answer {};
    for(int i = left; i<=right;i++){
        if(i == static_cast<int>(sqrt(i)) * sqrt(i)){
            answer -= i;
        }else{
            answer += i;
        }
        
    }
    return answer;
}