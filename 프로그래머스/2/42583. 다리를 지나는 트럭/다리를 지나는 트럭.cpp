#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer{};
    int index{};
    int totalWeight{};
    queue<int> bridge;
    
    for(int i{}; i<bridge_length; i++)
    {
        bridge.push(0);
    }
    
    while(index < truck_weights.size())
    {
        answer++;
        totalWeight -= bridge.front();
        bridge.pop();
        
        if(totalWeight + truck_weights[index] <= weight)
        {
            bridge.push(truck_weights[index]);
            totalWeight += truck_weights[index];
            index++;
        }else
        {
            bridge.push(0);
        }
    }
    
    return answer + bridge_length;
}