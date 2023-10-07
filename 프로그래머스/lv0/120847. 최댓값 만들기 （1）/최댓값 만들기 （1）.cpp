#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int maxOne{*max_element(numbers.begin(),numbers.end())};
    numbers.erase(find(numbers.begin(),numbers.end(),maxOne));
    int maxTwo{*max_element(numbers.begin(),numbers.end())};
    return maxOne*maxTwo;
}