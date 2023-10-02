#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    vector<pair<int,int>> rank2;
    for(int i=0; i<rank.size(); i++){
        if(attendance[i]){
            rank2.push_back({i,rank[i]});
        }
    }
    sort(rank2.begin(),rank2.end(),[](pair<int,int>a, pair<int,int>b){return a.second < b.second;});
    return rank2[0].first*10000+100*rank2[1].first+rank2[2].first;
}