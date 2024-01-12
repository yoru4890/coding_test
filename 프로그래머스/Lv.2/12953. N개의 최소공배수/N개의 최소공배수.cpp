#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> arr) {
    int answer{arr[0]};
    for(const auto& e : arr)
    {
        answer = lcm(e,answer);
    }
    return answer;
}