#include <iostream>
#include <vector>
using namespace std;

int solution(vector<vector<int> > land)
{
    int answer{};
    int size = land.size();
    vector<vector<int>> dp(size, vector<int>(4));
    
    for(int i{}; i<4; i++)
    {
        dp[0][i] = land[0][i];
    }
    
    for(int i{1}; i<size; i++)
    {
        for(int j{}; j<4; j++)
        {
            for(int k{}; k<4; k++)
            {
                if(j == k) continue;
                dp[i][j] = max(dp[i][j], dp[i-1][k] + land[i][j]);
            }
        }        
    }
    
    for(int i{}; i<4; i++)
    {
        answer = max(answer, dp[size-1][i]);
    }
    
    return answer;
}
