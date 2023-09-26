#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string temp;
    bool isWord{};
    for(const auto& e: myString){
        if(e!='x'){
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
    sort(answer.begin(),answer.end());
    return answer;
}