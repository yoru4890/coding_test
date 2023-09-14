#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer{}, i{1};
    vector<int> dice(6);
    vector<vector<int>> table(5);
    dice[a-1]++; dice[b-1]++; dice[c-1]++; dice[d-1]++;
    
    for(const auto& e : dice){
        table[e].push_back(i++);
    }
    
    if(!table[4].empty()){ answer = 1111 * table[4][0]; }
    else if(!table[3].empty()){ answer = pow(10 * table[3][0] + table[1][0], 2); }
    else if(table[2].size() == 2){
        answer = (table[2][0] + table[2][1]) * abs(table[2][0] - table[2][1]);
    }else if(table[2].size() == 1){
        answer = table[1][0] * table[1][1];
    }else{ answer = *min_element(table[1].begin(), table[1].end()); }
   
    return answer;
}