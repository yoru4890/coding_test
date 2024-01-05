#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(vector<string> friends, vector<string> gifts) {
    int answer{};
    unordered_map<string, int> peopleIndex;
    stringstream ss;
    int index{};
    for(const auto& people : friends){
        peopleIndex[people] = index++;
    }
    vector<vector<int>> giftCounts(index,vector<int>(index));
    vector<int> giftScore(index);
    string from, to;
    for(const auto& s : gifts){
        ss.clear();
        ss << s;
        ss >> from >> to;
        giftCounts[peopleIndex[from]][peopleIndex[to]]++;
        giftScore[peopleIndex[from]]++;
        giftScore[peopleIndex[to]]--;
    }
    vector<int> maxGift(index);
    for(int i{}; i<index; i++){
        for(int j{i+1}; j<index; j++){
            if(giftCounts[i][j] > giftCounts[j][i]){
                maxGift[i]++;
            }else if(giftCounts[i][j] < giftCounts[j][i]){
                maxGift[j]++;
            }else{
                if(giftScore[i] > giftScore[j]){
                    maxGift[i]++;
                }else if(giftScore[i] < giftScore[j]){
                    maxGift[j]++;
                }
            }
        }
    }
    answer = *max_element(maxGift.begin(), maxGift.end());
    return answer;
}