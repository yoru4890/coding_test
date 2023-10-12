#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer(2);
    int xSize{board[0]/2}, ySize{board[1]/2};
    for(const auto& e : keyinput){
        if(e == "left"){
            if(-xSize < answer[0]){
                answer[0]--;
            }
        }else if( e== "right"){
            if(xSize > answer[0]){
                answer[0]++;
            }
        }else if(e == "up"){
            if(ySize > answer[1]){
                answer[1]++;
            }
        }else{
            if(-ySize < answer[1] ){
                answer[1]--;
            }
        }
    }
    return answer;
}