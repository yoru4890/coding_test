#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int odd{}, even{};
    for(int i{};const auto& e : num_list){
        if(i&1){
            even += e;
        }else{
            odd += e;
        }
        i++;
    }
    return max(even,odd);
}