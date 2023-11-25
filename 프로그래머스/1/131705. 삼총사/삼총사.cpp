#include <string>
#include <vector>

using namespace std;

class Sol{
    public:
    int answer{};
    int size{};
    vector<int> nums;
    
    public:
    void DFS(int start, int temp,int deep);
};

int solution(vector<int> number) {
    Sol s;
    s.nums = number;
    s.size = s.nums.size();
    
    s.DFS(0,0,0);
    return s.answer;
}

void Sol::DFS(int start, int temp,int deep){
    if(deep >=3){
        if(!temp){
         answer++;   
        }
        return;
    }
    
    for(int i{start}; i<size; i++){
        
        DFS(i+1,temp+nums[i],deep+1);
       
    }
}