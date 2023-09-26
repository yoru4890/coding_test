#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int count{};
    for(const auto& e : myString){
        if(e !='x'){
            count++;
        }else{
            answer.emplace_back(count);
            count = 0;
        }
    }
    
    answer.emplace_back(count);
    
    return answer;
}