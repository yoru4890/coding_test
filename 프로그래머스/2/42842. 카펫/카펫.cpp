#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    int total{brown + yellow};
    for(int i{3}; i<total; i++){
        if(!(total%i)){
            for(int j{i-2}; j>0; j--){
                if(!(yellow%j)){
                    if((yellow/j) + 2 <= total/i){
                        return {total/i, i};
                    }
                }
            }
        }
    }
}