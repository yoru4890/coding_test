#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string temp;
    for(const auto& e: my_string){
        if(e != ' '){
            temp += e;
        }else{
            answer.emplace_back(temp);
            temp.clear();
        }
    }
    answer.emplace_back(temp);
    return answer;
}