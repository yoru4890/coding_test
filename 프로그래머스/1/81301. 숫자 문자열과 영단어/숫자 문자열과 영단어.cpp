#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string s) {
    map<string,char> word;
    word["zero"] = '0';
    word["one"] = '1';
    word["two"] = '2';
    word["three"] = '3';
    word["four"] = '4';
    word["five"] = '5';
    word["six"] = '6';
    word["seven"] = '7';
    word["eight"] = '8';
    word["nine"] = '9';
    
    string answer;
    string temp;
    for(const auto& c : s){
        if(c>='a'&&c<='z'){
            temp+=c;
        }else{
            answer += c;
        }
        
        if(word[temp]){
            answer += word[temp];
            temp.clear();
        }
    }
    int result {stoi(answer)};
    return result;
}