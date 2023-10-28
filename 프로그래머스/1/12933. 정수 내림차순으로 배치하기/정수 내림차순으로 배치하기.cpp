#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    string temp{to_string(n)};
    sort(temp.begin(),temp.end(),[](char a, char b){return a > b;});
    long long answer = stoll(temp);
    return answer;
}