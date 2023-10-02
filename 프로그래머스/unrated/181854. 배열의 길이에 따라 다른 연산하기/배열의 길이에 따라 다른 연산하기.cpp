#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    int size{static_cast<int>(arr.size())};
        for(int i=(size+1)%2; i<size;i+=2){
            arr[i] +=n;
        }
    return arr;
}