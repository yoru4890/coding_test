#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;
    int size{static_cast<int>(num_list.size())};
    switch(n){
        case 1:
            for(int i=0; i<=slicer[1]; i++){
                answer.emplace_back(num_list[i]);
            }
            break;
        case 2:
            for(int i=slicer[0]; i<size;i++){
                answer.emplace_back(num_list[i]);
            }
            break;
        case 3:
            for(int i=slicer[0]; i<=slicer[1]; i++){
                answer.emplace_back(num_list[i]);
            }
            break;
        case 4:
            for(int i=slicer[0]; i<=slicer[1]; i+=slicer[2]){
                answer.emplace_back(num_list[i]);
            }
            break;
        default:
            break;
    }
    return answer;
}