#include <string>
#include <vector>

using namespace std;

bool Check(vector<vector<int>>& board, int i, int j);

vector<pair<int,int>> dir{{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};

int solution(vector<vector<int>> board) {
    int answer{};
    for(int i=0; i<board.size();i++){
        for(int j=0; j<board[0].size();j++){
            if(!board[i][j] && Check(board,i,j)){
                answer++;
            }
        }
    }
    return answer;
}

bool Check(vector<vector<int>>& board, int i, int j){
    for(auto& e : dir){
        int ni{i+e.first}, nj{j+e.second};
        if(ni<0 || ni>=board.size() || nj <0 || nj >= board[0].size()){continue;}
        
        if(board[ni][nj]){return false;}
    }
    
    return true;
}