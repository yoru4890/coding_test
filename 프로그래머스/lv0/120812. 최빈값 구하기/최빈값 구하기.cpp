#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> array) {
    map<int,int> count;
    pair<int,int> max{0,0};
    pair<int, int> max2{0,0};
    for(const auto& e : array){
        count[e]++;
        if(max.second < count[e]){
            max = {e,count[e]};
        }else if(max.second == count[e] && max.first != e){
            max2 = {e,count[e]};
        }
    }
    return max.second == max2.second && max.first != max2.first ? -1 : max.first;
}