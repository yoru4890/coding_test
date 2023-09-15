#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> array) {
    map<int,int> count;
    int answer{};
    int maxNum{};
    for(const auto& e : array){
        count[e]++;
        if(maxNum < count[e]){
            maxNum = count[e];
            answer = e;
        }else if(maxNum == count[e]){
            answer = -1;
        }
    }
    return answer;
}