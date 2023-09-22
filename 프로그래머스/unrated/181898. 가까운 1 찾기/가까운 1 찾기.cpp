#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr, int idx) {
    int size{static_cast<int>(arr.size())};
    for(int i=idx; i<size; i++){
        if(arr[i]){return i;}
    }
    return -1;
}