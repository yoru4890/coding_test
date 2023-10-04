#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    if(k&1){
        for(auto& e : arr){
            e*=k;
        }
    }else{
        for(auto& e : arr){
            e+=k;
        }
    }
    return arr;
}