#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string myString, string pat) {
    string temp{myString};
    reverse(myString.begin(),myString.end());
    reverse(pat.begin(),pat.end());
    temp = temp.substr(0,myString.size()-myString.find(pat));
    return temp;
}