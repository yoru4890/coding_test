#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(string numbers) {
    vector<string> number{
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };
    string temp, answerTemp;
    for(const auto& e : numbers){
        temp+= e;
        auto it = find(number.begin(),number.end(),temp);
        if(it != number.end()){
            answerTemp += to_string(it-number.begin());
            temp.clear();
        }
    }
    return stol(answerTemp);
}