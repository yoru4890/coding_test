#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    vector<string> sounds{"aya","ye","woo","ma"};
    int answer = 0;
    for(auto& e : babbling){
        string temp(e.size(),'z');
        for(const auto & s : sounds){
            auto it = e.find(s);
            if(it!=string::npos){
                temp.replace(it,s.size(),s);
            }
        }
        if(e ==temp){
            answer++;
            if(e.find("maya")!=string::npos){
                answer--;
            }
        }
    }
    return answer;
}