#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    for(auto& e : delete_list){
        auto it {find(arr.begin(),arr.end(),e)};
        if(it != arr.end()){arr.erase(it);}
    }
    return arr;
}