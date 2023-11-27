#include <string>
#include <vector>
#include <limits>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int maxRow{numeric_limits<int>::min()}, maxCol{numeric_limits<int>::min()};
    for(const auto& e : sizes){
        maxRow = max(maxRow,min(e[0],e[1]));
        maxCol = max(maxCol,max(e[0],e[1]));
    }
    return maxRow*maxCol;
}