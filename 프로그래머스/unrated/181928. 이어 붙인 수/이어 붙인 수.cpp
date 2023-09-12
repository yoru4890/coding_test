#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    string strOdd, strEven;
    for(const auto& e : num_list){
        if(e&1){
            strOdd += to_string(e);
        }else{
            strEven += to_string(e);
        }
    }
    return stoi(strOdd) + stoi(strEven);
}