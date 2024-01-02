#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string,int> record;
    int index{};
    for(const auto& e : players){
        record[e] = index++;
    }
    for(const auto& e : callings){
        string pre{players[record[e]-1]};
        swap(players[record[e]], players[record[e]-1]);
        record[e]--;
        record[pre]++;
    }
    return players;
}