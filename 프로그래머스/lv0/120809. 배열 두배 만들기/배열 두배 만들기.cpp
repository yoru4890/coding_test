#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    for(auto& e : numbers){
        e*=2;
    }
    return numbers;
}