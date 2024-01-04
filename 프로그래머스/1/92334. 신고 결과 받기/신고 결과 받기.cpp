#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>

using namespace std;

using mapS = unordered_map<string, int>;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    mapS nameList;
    int index{};
    for(const auto& e : id_list){
        nameList[e] =index++;
    }
    vector<int> reportCount(index);
    vector<mapS> whoReport(index);
    stringstream ss;
    string A, B;
    for(const auto& e : report){
        ss.clear();
        ss << e;
        ss >> A >> B;
        if(!whoReport[nameList[A]][B]){
            whoReport[nameList[A]][B] = 1;
            reportCount[nameList[B]]++;
        } 
    }
    for(const auto& row : whoReport){
        int num{};
        for(const auto& e : row){
            if(reportCount[nameList[e.first]] >= k){
                num++;
            }
        }
        answer.emplace_back(num);
    }
    return answer;
}