#include <string>
#include <vector>
#include <sstream>
#include <limits>

using namespace std;

string solution(string s) {
    stringstream ss;
    ss << s;
    int maxNum{numeric_limits<int>::min()}, minNum{numeric_limits<int>::max()};
    int num{};
    while(ss >> s){
        num = stoi(s);
        maxNum = max(maxNum, num);
        minNum = min(minNum, num);
    }
    string answer;
    answer+=to_string(minNum);
    answer+=' ';
    answer+=to_string(maxNum);
    return answer;
}