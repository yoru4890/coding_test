#include <string>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX_NUM{10'000'001};
vector<int> numCounts(MAX_NUM);

int solution(int k, vector<int> tangerine) {
    int answer{};
    for(const auto& num : tangerine)
    {
        numCounts[num]++;
    }
    sort(numCounts.begin(),numCounts.end(),greater<int>());
    for(const auto& e : numCounts)
    {
        k-=e;
        answer++;
        if(k <= 0){break;}
    }
    return answer;
}