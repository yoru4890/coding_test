#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    int size{static_cast<int>(my_string.size())};
    vector<bool> isDelete(size);
    for(const auto& e : indices){
        isDelete[e] = true;
    }
    for(int i=0; i<size; i++){
        if(!isDelete[i]){
            answer +=my_string[i];
        }
    }
    return answer;
}