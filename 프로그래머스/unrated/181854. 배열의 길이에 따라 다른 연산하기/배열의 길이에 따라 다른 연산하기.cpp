#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    int size{static_cast<int>(arr.size())};
    if(size & 1){
        for(int i=0; i<size;i+=2){
            arr[i] +=n;
        }
    }else{
        for(int i=1;i<size; i+=2){
            arr[i] += n;
        }
    }
    return arr;
}