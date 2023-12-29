#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer ;
    unordered_map<char,int> points;
    
    for(int i{};const auto& s : survey){
        points[s[0]]+= 4-choices[i];
        i++;
    }
    
    answer += points['R'] >= points['T'] ? 'R' : 'T';
    answer += points['C'] >= points['F'] ? 'C' : 'F';
    answer += points['J'] >= points['M'] ? 'J' : 'M';
    answer += points['A'] >= points['N'] ? 'A' : 'N';
    
    
    return answer;
}