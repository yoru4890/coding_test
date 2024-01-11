#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer{};
    sort(people.begin(),people.end(),greater<int>());
    int size = people.size();
    for(int i{}, j{size-1}; i<=j; i++)
    {
        if(people[i] + people[j] <= limit) j--;
        
        answer++;
    }
    
    return answer;
}