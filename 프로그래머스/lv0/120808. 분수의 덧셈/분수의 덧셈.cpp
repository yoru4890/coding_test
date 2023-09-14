#include <string>
#include <vector>
#include <numeric>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int commonDenom {lcm(denom1,denom2)};
    int commonNumer {numer1*(commonDenom/denom1) + numer2*(commonDenom/denom2)};
    int greatCommon {gcd(commonDenom,commonNumer)};
    answer.push_back(commonNumer/greatCommon);
    answer.push_back(commonDenom/greatCommon);
    
    return answer;
}