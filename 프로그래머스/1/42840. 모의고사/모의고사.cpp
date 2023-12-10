#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> num1{1,2,3,4,5};
    vector<int> num2{2,1,2,3,2,4,2,5};
    vector<int> num3{3,3,1,1,2,2,4,4,5,5};
    vector<int> answer;
    int sum1{},sum2{}, sum3{};
    int i{};
    for(const auto& e : answers){
        if(e == num1[i%num1.size()]){sum1++;}
        if(e == num2[i%num2.size()]){sum2++;}
        if(e == num3[i%num3.size()]){sum3++;}
        i++;
    }
    int maxSum{sum1};
    maxSum = max(maxSum, sum2);
    maxSum = max(maxSum, sum3);
    if(maxSum == sum1){answer.emplace_back(1);}
    if(maxSum == sum2){answer.emplace_back(2);}
    if(maxSum == sum3){answer.emplace_back(3);}
   
    return answer;
}