#include <vector>
using namespace std;

int solution(vector<int> nums)
{
    int answer{};
    vector<bool> isPoket(200'001);
    for(const auto& e : nums){
        if(!isPoket[e]){
            answer++;
            isPoket[e] = true;
        }
    }
    return answer > nums.size()/2 ? nums.size()/2 : answer;
}