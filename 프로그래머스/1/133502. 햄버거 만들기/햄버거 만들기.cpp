#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> order{1,3,2,1};

bool IsHamburgur(stack<int>& resources);

int solution(vector<int> ingredient) {
    int answer{};
    stack<int> resources;
    for(const auto& e : ingredient){
        resources.push(e);
        if(IsHamburgur(resources)){answer++;}
    }
    return answer;
}

bool IsHamburgur(stack<int>& resources){
    
    if(resources.top() != 1 || resources.size() < 4){return false;}
    
    stack<int> temp;
    
    for(int i{}; i<4; i++){
        if(resources.top() != order[i]){
            while(!temp.empty()){
                resources.push(temp.top());
                temp.pop();
            }
            return false;
        }
        temp.push(resources.top());
        resources.pop();
    }
    
    return true;
}