#include <string>
#include <vector>

using namespace std;

int myCount;

void DFS(vector<int>& numbers, int target, int result, int index);

int solution(vector<int> numbers, int target) {
 
    DFS(numbers, target, 0, 0);
    
    return myCount;
}

void DFS(vector<int>& numbers, int target, int result, int index)
{
    if(index >= numbers.size())
    {
        if(result == target)
        {
            myCount++;
        }
        return;
    }
    
    DFS(numbers, target, result+numbers[index], index+1);
    DFS(numbers, target, result-numbers[index], index+1);
}