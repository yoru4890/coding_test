#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer{};
    vector<pair<int,int>> offset{{-1,0},{1,0},{0,-1},{0,1}};
    
    for(const auto& o : offset){
        int nh { h + o.first }, nw { w + o.second };
        if(nh < 0 || nh >= board.size() || nw < 0 || nw >= board[0].size()){continue;}
        
        if(board[h][w] == board[nh][nw]) {answer++;}
    }
    return answer;
}