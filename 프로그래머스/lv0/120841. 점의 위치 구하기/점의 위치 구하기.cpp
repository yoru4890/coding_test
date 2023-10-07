#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) {
    int check{static_cast<int>(0x80000000)};
    return dot[0]&check ? dot[1]&check ? 3 : 2 :
                    dot[1]&check ? 4 : 1;
}