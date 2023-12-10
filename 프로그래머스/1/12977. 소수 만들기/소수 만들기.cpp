#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

void DFS(vector<int>& nums, int sum, int& answer, int deep,vector<bool>& isPrime, int index);

int solution(vector<int> nums) {
    int answer{};
    vector<bool> isPrime(3000,true);
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i{2}; i<sqrt(3000); i++){
        if(isPrime[i]){
            for(int j{i*2}; j<3000; j+=i){
                isPrime[j] = false;
            }
        }
    }
    DFS(nums, 0, answer, 0, isPrime, 0);
    
    return answer;
}

void DFS(vector<int>& nums, int sum, int& answer, int deep,vector<bool>& isPrime, int index){
    if(deep >= 3){
        if(isPrime[sum]){answer++;}
        return;
    }
    if(index >= nums.size()){return;}
    
    DFS(nums, sum+nums[index], answer, deep+1, isPrime, index+1);
    DFS(nums, sum, answer, deep, isPrime, index+1);
}