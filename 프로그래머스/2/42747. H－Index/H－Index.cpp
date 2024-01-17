#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    sort(citations.begin(),citations.end(),greater<int>());
    for(int i{}; const auto& e : citations)
    {
        if(e < ++i)
        {
            return i-1;
        }
    }
    return citations.size();
}