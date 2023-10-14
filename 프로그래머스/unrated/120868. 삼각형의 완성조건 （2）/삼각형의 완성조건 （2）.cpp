#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int longLine{max(sides[0],sides[1])};
    answer += (sides[0]+sides[1]-longLine-1);
    answer += longLine-abs(sides[0]-sides[1]);
    return answer;
}