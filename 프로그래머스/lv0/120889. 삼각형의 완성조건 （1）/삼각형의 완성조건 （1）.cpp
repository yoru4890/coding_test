#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int sum{};
    for(const auto& e : sides){
        sum += e;
    }
    return sum > 2*(*max_element(sides.begin(),sides.end())) ? 1 : 2; 
}