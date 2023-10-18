#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    sort(numlist.begin(),numlist.end(),
         [&](int a, int b){
            return abs(a-n) == abs(b-n) ? a > b : abs(a-n) < abs(b-n); 
         });
    return numlist;
}