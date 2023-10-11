#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    int max{},index{};
    for(int i=0; i<array.size(); i++){
        if(max < array[i]){
            max = array[i];
            index = i;
        }
    }
    return vector<int>{max,index};
}