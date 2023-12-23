#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer{},size{static_cast<int>(board.size())};
    stack<int> basket;
    vector<stack<int>> temp(size);
    for(int i{size-1}; i>=0; i--){
        for(int j{}; j<size; j++){
            if(board[i][j]){
                temp[j].push(board[i][j]);
            }
        }
    }
    
    int index{};
    for(const auto& e : moves){
        index = e-1;
        if(!temp[index].empty()){
            if(basket.empty()){
                basket.push(temp[index].top());
            }else{
                if(basket.top() == temp[index].top()){
                    basket.pop();
                    answer+=2;
                }else{
                    basket.push(temp[index].top());
                }
            }
            temp[index].pop();
        }
    }
    return answer;
}