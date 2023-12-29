#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer ;
    unordered_map<char,int> points;
    for(int i{};const auto& s : survey){
        points[s[0]]+= (4 - choices[i]);
        i++;
    }
    if(points['R'] >= points['T']){
        answer += 'R';
    }else{
        answer += 'T';
    }
    if(points['C'] >= points['F']){
        answer += 'C';
    }else{
        answer += 'F';
    }
    if(points['J'] >= points['M']){
        answer += 'J';
    }else{
        answer += 'M';
    }
    if(points['A'] >= points['N']){
        answer += 'A';
    }else{
        answer += 'N';
    }
    return answer;
}