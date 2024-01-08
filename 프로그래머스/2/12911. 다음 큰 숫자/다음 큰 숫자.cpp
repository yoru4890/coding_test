#include <string>
#include <vector>

using namespace std;

int GetBinaryOne(int num){
    int temp{};
    while(num){
        if(num%2){temp++;}
        num/=2;
    }
    return temp;
}

int solution(int n) {
    int answer{};
    int original{GetBinaryOne(n)};
    for(int i{n+1}; i<=1'000'000; i++){
        if(original == GetBinaryOne(i)){return i;}
    }
    return answer;
}