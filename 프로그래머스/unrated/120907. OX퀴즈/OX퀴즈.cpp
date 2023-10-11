#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answers;
    for(auto& e : quiz){
        int result{};
        int answer{};
        int num2{};
        stringstream ss;
        char oper{};
        ss.str(e);
        ss >> answer >> oper >> num2;
        if(oper == '+'){
            answer += num2;
        }else{
            answer -= num2;
        }
        ss >> oper >> result;
        if(answer == result){
            answers.emplace_back("O");
        }else{
            answers.emplace_back("X");
        }
    }
    return answers;
}