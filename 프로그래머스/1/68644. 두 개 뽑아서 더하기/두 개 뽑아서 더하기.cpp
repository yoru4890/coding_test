#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers) {
    set<int> temp;
    vector<int> answer;
    for(int i{};i<numbers.size();i++){
        for(int j{}; j<numbers.size();j++){
            if(i==j){continue;}
            
            temp.insert(numbers[i]+numbers[j]);
        }
    }
    for(const auto& e : temp){
        answer.emplace_back(e);
    }
    return answer;
}