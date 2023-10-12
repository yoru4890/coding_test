#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    for(auto& e : array){
        while(e>1){
            if(e%10 == 7){
                answer++;
            }
            e/=10;
        }
    }
    return answer;
}