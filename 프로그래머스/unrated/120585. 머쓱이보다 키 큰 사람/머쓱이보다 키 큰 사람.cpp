#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    for(const auto& e : array){
        if(height < e){
            answer++;
        }
    }
    return answer;
}