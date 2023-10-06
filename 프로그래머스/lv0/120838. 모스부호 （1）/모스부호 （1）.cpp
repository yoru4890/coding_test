#include <string>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

string solution(string letter) {
    vector<string> mos{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    map<string,char> change;
    char myChar{'a'};
    for(const auto& e : mos){
        change[e] = myChar++;
    }
    string answer = "";
    istringstream temp{letter};
    string temp2;
    while(temp >> temp2){
        answer += change[temp2];
    }
    return answer;
}