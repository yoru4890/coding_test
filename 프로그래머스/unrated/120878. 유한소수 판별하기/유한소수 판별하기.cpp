#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(int a, int b) {
    b/=gcd(a,b);
    while(b%2==0){
        b/=2;
    }
    while(b%5==0){
        b/=5;
    }
    if(b!=1){return 2;}
    return 1;
}