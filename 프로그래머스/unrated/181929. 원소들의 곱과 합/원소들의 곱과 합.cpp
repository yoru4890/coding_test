#include <string>
#include <vector>
#include <numeric>
#include <cmath>

using namespace std;

int solution(vector<int> num_list) {
    return accumulate(num_list.begin(),num_list.end(),1,[](int a, int b){return a*b;}) <
        pow(accumulate(num_list.begin(),num_list.end(),0),2);
      
}