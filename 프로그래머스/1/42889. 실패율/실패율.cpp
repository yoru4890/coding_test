#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> counts(N+2);
    vector<pair<double,int>> failure;
    vector<int> answer;
    for(const auto& e : stages){
        counts[e]++;
    }
    double people{static_cast<double>(stages.size())};
    for(int i{1}; i<=N; i++){
        if(people){
            failure.emplace_back(make_pair(counts[i] / people, i));
        }else{
            failure.emplace_back(make_pair(0, i));
        }
        
        people-= counts[i];
    }
    sort(failure.begin(), failure.end(), 
         [](pair<double,int> a, pair<double,int> b){
             return a.first == b.first ? a.second < b.second : a.first > b.first;
         });
    for(const auto& e : failure){
        answer.emplace_back(e.second);
    }
    
    return answer;
}