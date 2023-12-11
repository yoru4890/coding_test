#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    vector<bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;
    int answer{};
    
    for(int i{2}; i<=n; i++){
        if(isPrime[i]){
            answer++;
            for(int j{i*2}; j<=n; j+=i){
                isPrime[j] = false;
            }
        }
    }
    
    return answer;
}