#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(int brown, int yellow) {
    int AddRowCol{(brown-4)/2};
    for(int i{1}; i<=sqrt(yellow); i++){
        if(!(yellow%i)){
            if(i + yellow/i == AddRowCol){
                return {yellow/i+2,i+2};
            }
        }
    }
}