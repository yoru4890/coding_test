#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer{};
    for(int i{1}; i<=n; i++){
        for(int j{n/i},k{};j>0; j--){
            k = j*i + (j *(j-1))/2;
            if(k == n){
                answer++;
                break;
            }
        }
    }
    return answer;
}