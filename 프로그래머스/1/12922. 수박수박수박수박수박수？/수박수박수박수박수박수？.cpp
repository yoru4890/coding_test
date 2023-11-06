#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    int temp{n/2};
    string answer = "";
    while(temp--){
        answer += "수박";
    }
    if(n&1){answer += "수";}
    return answer;
}