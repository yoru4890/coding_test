#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string,int> search;
    vector<int> counts(1);
    vector<string> nameList(1,"");
    int index{1};
    for(const auto& s : participant){
        if(search[s]){
            counts[search[s]]++;
        }else{
            search[s] = index++;
            counts.emplace_back(1);
            nameList.emplace_back(s);
        }
    }
    for(const auto& s : completion){
        counts[search[s]]--;
    }
    
    index = 0;
    for(const auto& e : counts){
        if(e >=1){return nameList[index];}
        index++;
    }
    
    return "";
}