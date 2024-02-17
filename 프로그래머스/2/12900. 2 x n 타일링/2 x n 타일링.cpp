#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    const unsigned int MOD{1'000'000'007};
    vector<unsigned int> dp(n+1);
    dp[0] = dp[1] = 1;
    for(int i{2}; i<=n; i++)
    {
        dp[i] = (dp[i-1] + dp[i-2])%MOD;
    }
    return dp[n];
}