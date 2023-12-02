#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    sort(strings.begin(),strings.end(),
         [&](string a, string b)
         {
             return a[n] == b[n] ? a < b : a[n] < b[n];
         });
    return strings;
}