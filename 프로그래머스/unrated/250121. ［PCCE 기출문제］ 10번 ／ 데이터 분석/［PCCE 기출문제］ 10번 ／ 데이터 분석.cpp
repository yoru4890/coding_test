#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    vector<string> str{"code","date","maximum","remain"};
    int extIndex = find(str.begin(),str.end(),ext)-str.begin();
    int byIndex = find(str.begin(), str.end(),sort_by)-str.begin();
    for(const auto& e : data){
        if(e[extIndex] < val_ext){
            answer.emplace_back(e);
        }
    }
    sort(answer.begin(),answer.end(),[&](vector<int> a, vector<int> b){return a[byIndex] < b[byIndex];});
    return answer;
}