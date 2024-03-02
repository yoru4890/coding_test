#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool CompareNum(const int& a, const int& b)
{
    string aS{to_string(a)};
    string bS{to_string(b)};
    
    return aS + bS > bS + aS;
}

string solution(vector<int> numbers) {
    string answer = "";
    sort(numbers.begin(), numbers.end(), CompareNum);
    for(const auto& e : numbers)
    {
        if(answer == "0" && e == 0) continue;
        answer += to_string(e);
    }
    return answer;
}