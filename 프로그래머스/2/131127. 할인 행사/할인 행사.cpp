#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer{};
    int flag{};
    int size = number.size();
    vector<int> tempNumber(size);
    unordered_map<string, int> stringIndex;
    
    for(int i{1}; const auto& s : want)
    {
        stringIndex[s] = i++;
    }
    for(int i{}; i<size; i++)
    {
        flag |= 1<<i;
    }
    
    for(int i{}; i<10; i++)
    {
        int index {stringIndex[discount[i]]-1};
        if(index >= 0)
        {
            tempNumber[index]++;
            if(tempNumber[index] >= number[index])
            {
                flag &= ~(1<<index);
            }
        }
    }
    
    if(!flag){answer++;}
    
    for(int i{}; i<discount.size()-10; i++)
    {
        int minusIndex {stringIndex[discount[i]]-1};
        if(minusIndex >= 0)
        {
            if(tempNumber[minusIndex])
            {
                tempNumber[minusIndex]--;
                if(tempNumber[minusIndex] < number[minusIndex])
                {
                    flag |= 1<<minusIndex;
                }
            }
        }
        
        int plusIndex {stringIndex[discount[i+10]]-1};
        if(plusIndex >= 0)
        {
            tempNumber[plusIndex]++;
            if(tempNumber[plusIndex] >= number[plusIndex])
            {
                flag &= ~(1<<plusIndex);
            }
        }
        if(!flag){answer++;}
    }
    
    return answer;
}