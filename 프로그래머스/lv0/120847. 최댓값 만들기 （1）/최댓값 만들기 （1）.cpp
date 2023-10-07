#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    sort(numbers.begin(),numbers.end(),[](int a,int b){return a > b;});
    return numbers[0]*numbers[1];
}