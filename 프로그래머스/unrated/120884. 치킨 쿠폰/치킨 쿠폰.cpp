#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int coupon{};
    int answer{};
    while(chicken>0){
        coupon+= chicken;
        chicken=coupon/10;
        answer+=coupon/10;
        coupon%=10;
    }
    return answer;
}