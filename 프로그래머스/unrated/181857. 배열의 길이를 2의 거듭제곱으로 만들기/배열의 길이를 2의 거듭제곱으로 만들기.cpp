#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int two{1};
    while(two != arr.size()){
        two*=2;
        if(two > arr.size()){
            break;
        }
    }
    for(int i=arr.size(); i<two; i++){
        arr.emplace_back(0);
    }
    return arr;
}