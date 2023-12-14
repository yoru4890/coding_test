#include <string>
#include <vector>

using namespace std;

vector<string> standard{"aya","ye","woo","ma"};

int solution(vector<string> babbling) {
    int answer{};
    for(const auto& s : babbling){
        string temp{};
        int indexS{};
        string pre;
        while(temp.size() < s.size()){
            bool isExist{};
            for(const auto& e : standard){
                if(s[indexS] == e[0] && pre !=e){
                    temp += e;
                    indexS += e.size();
                    isExist = true;
                    pre = e;
                }
            }
            if(!isExist){break;}
        }
        if(temp == s){answer++;}
    }
    
    return answer;
}