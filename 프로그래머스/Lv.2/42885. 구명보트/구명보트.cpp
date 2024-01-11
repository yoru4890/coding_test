#include <string>
#include <vector>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer{};
    vector<int> weightCount(241);
    for(const auto& e : people)
    {
        weightCount[e]++;
    }
    
    for(int i{limit}; i>limit/2; i--)
    {
        int temp{limit - i};
        while(weightCount[i])
        {
            if(temp < 40)
            {
                answer += weightCount[i];
                weightCount[i] = 0;
            }else if(weightCount[temp])
            {               
                weightCount[i]--;
                weightCount[temp]--;
                answer++;     
            }else
            {
                temp--;
            }
            
        }
    }
    
    int size{};
    for(int i{}; i<=limit/2; i++)
    {
        size += weightCount[i];
    }
    
    return answer + size/2 + size%2;
}