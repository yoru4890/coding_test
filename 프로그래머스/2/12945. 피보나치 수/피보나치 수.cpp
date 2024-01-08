#include <string>
#include <vector>

using namespace std;

const int MOD{1234567};

int solution(int n) {
    vector<int> fibo(n+1);
    fibo[1] = 1;
    for(int i{2}; i<=n; i++){
        fibo[i] = (fibo[i-1] + fibo[i-2])%MOD;
    }
    return fibo[n];
}