#include <string>
#include <vector>
#include <limits>

using namespace std;

int solution(vector<int> array, int n) {
    int temp {numeric_limits<int>::max()};
    int answer{};
    for(const auto& e : array){
        if(temp > abs(e-n)){
            temp = abs(e-n);
            answer = e;
        }else if(temp == abs(e-n)){
            answer = min(answer, e);
        }
    }
    return answer;
}