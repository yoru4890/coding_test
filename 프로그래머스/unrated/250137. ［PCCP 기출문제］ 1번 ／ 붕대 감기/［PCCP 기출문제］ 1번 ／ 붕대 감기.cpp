#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int nowHp{health};
    int preTime{};
    for(const auto& row : attacks){
        if(nowHp == health){
            nowHp -= row[1];
        }else{
            int timeInterval{row[0] - preTime-1};
            nowHp += bandage[2] * (timeInterval/bandage[0]);
            nowHp += timeInterval * bandage[1];
            if(nowHp > health){nowHp = health;}
            nowHp -= row[1];
        }
        
        if(nowHp <= 0){
            return -1;
        }
        preTime = row[0];
    }
    return nowHp;
}