#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    for(int i{};const auto& e : num_list){
        if(e<0){return i;}
        i++;
    }
    return -1;
}