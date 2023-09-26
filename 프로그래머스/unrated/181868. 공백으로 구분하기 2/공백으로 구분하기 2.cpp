#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string temp;
    bool isWord{false};
    for(const auto& e: my_string){
        if(e != ' '){
            temp += e;
            isWord = true;
        }else{
            if(isWord){
                answer.emplace_back(temp);
                temp.clear();
                isWord = false;
            }
            
        }
    }
    if(isWord){
        answer.emplace_back(temp);
    }
    return answer;
}