#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";
    for(const auto& e : str_list){
        if(e.find(ex) == string::npos){
            answer += e;
        }
    }
    return answer;
}