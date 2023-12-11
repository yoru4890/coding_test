#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    const int MAX_NUM{1'000'001};
    
    vector<bool> isPrime(MAX_NUM, true);
    isPrime[0] = isPrime[1] = false;
    int answer{};
    
    for(int i{2}; i<sqrt(MAX_NUM); i++){
        if(isPrime[i]){
            for(int j{i*2}; j<MAX_NUM; j+=i){
                isPrime[j] = false;
            }
        }
    }
    for(int i{2}; i<=n; i++){
        if(isPrime[i]){answer++;}
    }
    
    return answer;
}