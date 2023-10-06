#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> temp{emergency};
    sort(temp.begin(),temp.end(),[](int a,int b){return a >b;});
    vector<int> answer{};
    for(int i=0; i<temp.size(); i++){
        auto it = find(temp.begin(),temp.end(),emergency[i]);
        answer.emplace_back(it-temp.begin()+1);
    }
    return answer;
}