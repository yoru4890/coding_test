#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer {};
    sort(A.begin(),A.end(),less<int>());
    sort(B.begin(),B.end(),greater<int>());
    for(int i{}; i<A.size(); i++){
        answer += A[i] * B[i];
    }
    return answer;
}