#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> strArr) {
    int maxCount{};
    map<int,int> counts;
    for(const auto& e : strArr){
        int size{static_cast<int>(e.size())};
        counts[size]++;
        maxCount = max(maxCount, counts[size]);
    }
    return maxCount;
}