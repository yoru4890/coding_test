#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<pair<int,int>> answer;
    for(int i=0; i<score.size(); i++){
        answer.push_back({score[i][0]+score[i][1],i});
    }
    
    sort(answer.begin(),answer.end(),[](pair<int,int> a, pair<int,int> b){return a.first > b.first;});
    
    vector<pair<int,int>> rank;
    int rankIndex{1};
    for(int i=0; i<score.size(); i++){
        rank.push_back({answer[i].second, rankIndex++});
        if(i-1>=0 && answer[i-1].first == answer[i].first){
            rank[i].second = rank[i-1].second;
        }
    }
    sort(rank.begin(),rank.end(), [](pair<int,int> a, pair<int,int> b){return a.first < b.first;});
    vector<int> temp;
    for(const auto& e : rank){
        temp.emplace_back(e.second);
    }
    
    return temp;
}