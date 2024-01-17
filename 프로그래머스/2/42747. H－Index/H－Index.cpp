#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer{};
    int size = citations.size();
    sort(citations.begin(),citations.end());
    for(int i{}; i<size; i++)
    {
        auto it = upper_bound(citations.begin(),citations.end(),i);
        if (size - (it-citations.begin()) >= i+1)
        {
            answer = i+1;
        }
    }
    return answer;
}