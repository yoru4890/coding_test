#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    int size1{static_cast<int>(arr1.size())},
    size2{static_cast<int>(arr2.size())};
    if(size1 != size2){
        return size1 > size2 ? 1 : -1;
    } 
    int sum1 {accumulate(arr1.begin(),arr1.end(),0)}, sum2 {accumulate(arr2.begin(), arr2.end(),0)};
     
      return sum1 > sum2 ? 1 : sum1 == sum2 ? 0 : -1;
       
}