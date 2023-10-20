#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    
        int a {total/num};
        int end{a+num/2};
        for(int i=a-num/2+!(num&1); i<=end; i++){
            answer.emplace_back(i);
        }
    return answer;
}