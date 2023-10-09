#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int i{1};
    while(n>=i){
        if(n%i == 0){answer.emplace_back(i);}
        i++;
    }
    return answer;
}