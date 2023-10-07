#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    vector<int> factorial(11);
    factorial[0] = 1;
    for(int i=1; i<11; i++){
        factorial[i] = i * factorial[i-1];
    }
    for(int i=1; i<11; i++){
        if(factorial[i] == n){
            return i;
        }else if(factorial[i] > n){
            return i-1;
        }
    }
}