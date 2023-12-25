#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer;
    vector<pair<int,int>> keyPad{{1,0},{0,3},{1,3},{2,3},{0,2},{1,2},{2,2},{0,1},{1,1},{2,1},{0,0},{2,0}};
    int left{10}, right{11};
    int distL{}, distR{};
    for(const auto& e : numbers){
        if(e == 1 || e == 4 || e == 7){
            answer += 'L';
            left = e;
        }else if(e == 3 || e== 6 || e== 9){
            answer += 'R';
            right = e;
        }else{
            distL = abs(keyPad[left].first - keyPad[e].first) + abs(keyPad[left].second - keyPad[e].second);
            distR = abs(keyPad[right].first - keyPad[e].first) + abs(keyPad[right].second - keyPad[e].second);
            if(distL < distR){
                answer += 'L';
                left = e;
            }else if(distL > distR){
                answer += 'R';
                right = e;
            }else{
                if(hand == "left"){
                    answer += 'L';
                    left = e;
                }else{
                    answer += 'R';
                    right = e;
                }
            }
        }
    }
    return answer;
}