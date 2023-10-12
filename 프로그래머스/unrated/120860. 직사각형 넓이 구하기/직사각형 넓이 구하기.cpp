#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int minX{dots[0][0]},maxX{dots[0][0]}, minY{dots[0][1]},maxY{dots[0][1]};
    for(const auto& e : dots){
        minX = min(minX,e[0]);
        maxX = max(maxX,e[0]);
        minY = min(minY,e[1]);
        maxY = max(maxY,e[1]);
    }
    return (maxX-minX) * (maxY-minY);
}