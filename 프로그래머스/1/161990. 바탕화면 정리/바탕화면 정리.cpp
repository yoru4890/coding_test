#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    int row{static_cast<int>(wallpaper.size())}, col{static_cast<int>(wallpaper[0].size())};
    vector<int> answer{row,col,0,0};
    for(int i{}; i<row; i++){
        for(int j {}; j<col; j++){
            if(wallpaper[i][j] == '#'){
                answer[0] = min(i,answer[0]);
                answer[1] = min(j,answer[1]);
                answer[2] = max(i+1, answer[2]);
                answer[3] = max(j+1, answer[3]);
            }
        }
    }
    return answer;
}