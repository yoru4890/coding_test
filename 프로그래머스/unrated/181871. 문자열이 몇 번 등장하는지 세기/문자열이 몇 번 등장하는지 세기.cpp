#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    while(myString.find(pat)!=string::npos){
        answer++;
        myString = myString.substr(myString.find(pat)+1);
    }
    return answer;
}