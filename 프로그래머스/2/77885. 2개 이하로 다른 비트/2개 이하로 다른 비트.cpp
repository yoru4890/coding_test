#include <string>
#include <vector>

using namespace std;

vector<long long> solution(vector<long long> numbers) {
    vector<long long> answer;
    for(const auto& e : numbers)
    {
        long long checkBit{1};
        while(true)
        {
            if(!(e & checkBit))
            {
                answer.push_back(e + (checkBit - (checkBit >> 1)));            
                break;
            }
            
            checkBit <<= 1;
        }
    }
    return answer;
}