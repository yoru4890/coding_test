#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    char first{},another{};
    int answer{}, count1{}, count2{};
    for(int i{}; i<s.size(); i++){
        if(!first){
            first = s[i];
            count1 = 1;
        }else if(s[i] != first){
            count2++;
        }else if(s[i] == first){
            count1++;
        }
        
        if(count1 == count2){
            answer++;
            first = '\0';
            count1 = count2 = 0;
        }
    }
    if(first){answer++;}
    return answer;
}