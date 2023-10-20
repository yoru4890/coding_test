#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    if(common[1]-common[0] == common[2]-common[1]){
        int plus{common[1]-common[0]};
        return *(common.end()-1)+plus;
    }else{
        return *(common.end()-1)*(common[1]/common[0]);
    }
}