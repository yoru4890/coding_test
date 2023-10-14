#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string num;
    for(const auto& e : my_string){
        if(e>='0'&&e<='9'){
            num += e;
        }else{
            if(num.empty()){continue;}
            answer += stoi(num);
            num.clear();
        }
    }
    if(!num.empty()){answer += stoi(num);}
    return answer;
}