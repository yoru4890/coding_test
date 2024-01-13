#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    const int MOD{1234567};
    vector<int> dp(n+1);
    dp[0] = dp[1] = 1;
    for(int i{2}; i<=n; i++)
    {
        dp[i] = (dp[i-1] + dp[i-2])%MOD;
    }
    return dp[n];
    
}