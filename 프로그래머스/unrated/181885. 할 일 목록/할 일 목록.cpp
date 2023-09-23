#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> todo_list, vector<bool> finished) {
    vector<string> answer;
    for(int i{}; const auto& e : finished){
        if(!e){
            answer.emplace_back(todo_list[i]);
        }
        i++;
    }
    return answer;
}