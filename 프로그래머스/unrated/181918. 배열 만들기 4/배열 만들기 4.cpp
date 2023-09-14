#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    int i{};
    int size{static_cast<int>(arr.size())};
    while(i<size){
        if(stk.empty()){stk.push_back(arr[i++]);}
        else if(stk.back() < arr[i]){stk.push_back(arr[i++]);}
        else {stk.pop_back();}
    }
    return stk;
}