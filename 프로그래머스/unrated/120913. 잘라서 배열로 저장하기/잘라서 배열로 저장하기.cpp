#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    int index{};
    int size{static_cast<int>(my_str.size())};
    while(index+n<size){
        answer.emplace_back(my_str.substr(index,n));
        index+=n;
    }
    answer.emplace_back(my_str.substr(index));
    
    return answer;
}