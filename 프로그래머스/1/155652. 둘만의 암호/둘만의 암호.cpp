#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s, string skip, int index) {
    vector<char> alphabet;
    sort(skip.begin(),skip.end());
    int j{};
    for(char i{'a'}; i<='z'; i++){
        if(skip[j] == i){
            j++;
            continue;
        }else{
            alphabet.emplace_back(i);
        }
    }
    int length{static_cast<int>(alphabet.size())};
    for(auto& c : s){
        auto it = lower_bound(alphabet.begin(),alphabet.end(), c);
        c = alphabet[(it + index - alphabet.begin())%length];
    }
    return s;
}