#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int number, int limit, int power) {
    int answer{};
    for(int i{1}; i<=number; i++){
        int temp{};
        for(int j{1}; j<sqrt(i); j++){
            if(!(i%j)){temp++;}
        }
        temp*=2;
        int mid{static_cast<int>(sqrt(i))};
        if(i == mid*mid){temp++;}
        if(temp > limit){
            answer += power;
        }else{
            answer += temp;
}
    }
    return answer;
}