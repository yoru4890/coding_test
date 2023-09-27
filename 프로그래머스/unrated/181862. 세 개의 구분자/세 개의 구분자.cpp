#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string temp;
    for(const auto& e : myStr){
        if(e != 'a'&&e!='b'&&e!='c'){
            temp += e;
        }else{
            if(temp.empty()){continue;}
            else{
                answer.emplace_back(temp);
                temp.clear();
            }
        }
    }
    if(!temp.empty()){
        answer.emplace_back(temp);
    }
    if(answer.empty()){
        answer.emplace_back("EMPTY");
    }
    return answer;
}