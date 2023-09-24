#include <string>
#include <vector>

using namespace std;

bool Check(vector<int>& arr, vector<int>& temp);

int solution(vector<int> arr) {
    int count{-1};
    vector<int> temp;
    do{
        temp = arr;
        for(auto& e: arr){
            if(e>=50 && !(e&1)){e/=2;}
            else if(e<50 && e&1){e = e*2+1;}
        }
        count++;
    }while(Check(arr, temp));
    
    return count;
}

bool Check(vector<int>& arr, vector<int>& temp){
    int i{};
    for(const auto& e : arr){
        if(e!=temp[i++]){return true;}
    }
    return false;
}