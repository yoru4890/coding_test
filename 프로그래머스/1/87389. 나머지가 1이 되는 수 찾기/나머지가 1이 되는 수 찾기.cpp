#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int num{n-1};
    for(int i=2;i<=num; i++){
        if(num%i==0){return i;}
    }
}