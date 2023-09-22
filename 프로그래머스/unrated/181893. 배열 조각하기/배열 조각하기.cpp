#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    for(int i{};const auto& e : query){
        if(i&1){
            arr.erase(arr.begin(),arr.begin()+e);
        }else{
            arr.erase(arr.begin()+e+1,arr.end());
        }
        i++;
    }
    return arr;
}