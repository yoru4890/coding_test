#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    for(auto& e : arr){
        if(e>=50 && !(e&1)){
            e/=2;
        }else if(e<50 && e&1){
            e*=2;
        }
    }
    return arr;
    
}