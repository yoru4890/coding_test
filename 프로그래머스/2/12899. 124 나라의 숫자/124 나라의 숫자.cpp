#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    vector<string> nums{"1", "2", "4"};
    string answer = "";
    int num{1};
    int sum{};
    while(sum < n)
    {
        num*=3;
        sum += num;
    }
    sum -= num;
    n-= sum;
    n--;
    while(num != 1)
    {
        answer = nums[n%3] + answer;
        n/=3;
        num/=3;
    }
    
    return answer;
}