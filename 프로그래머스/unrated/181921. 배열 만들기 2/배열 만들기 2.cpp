#include <string>
#include <vector>

using namespace std;

bool Check(int num){
    string str{to_string(num)};
    for(const auto& e : str){
        if(e != '0' && e!= '5'){
            return false;
        }
    }
    
    return true;
}

vector<int> solution(int l, int r) {
    vector<int> answer;
    for(int i=l; i<=r; i++){
        if(Check(i)){
            answer.push_back(i);
        }
    }
    if(answer.empty()){
        answer.push_back(-1);
    }
    
    return answer;
}