#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer{};
    priority_queue<int, vector<int>, greater<int>> heap;
    for(const auto& e : scoville)
    {
        heap.push(e);
    }
    
    while(heap.top() < K)
    {
        int num{};
        num += heap.top();
        heap.pop();
        if(heap.empty()){return -1;}
        num += heap.top()*2;
        heap.pop();
        heap.push(num);
        answer++;
    }
    
    return answer;
}