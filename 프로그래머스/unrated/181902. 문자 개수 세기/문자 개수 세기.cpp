#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52);
    for(const auto& e : my_string){
        if(e>='A'&&e<='Z'){
            answer[e-'A']++;
        }else{
            answer[e-'a'+26]++;
        }
    }
    return answer;
}