#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    vector<char> vowels{'a','e','i','o','u'};
    string answer = "";
    for(const auto& e : my_string){
        if(find(vowels.begin(),vowels.end(),e) == vowels.end()){
            answer += e;
        }
    }
    return answer;
}