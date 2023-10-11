#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    string ns{to_string(num)};
    char target{static_cast<char>(k+'0')};
    return ns.find(target) == string::npos ? -1 : ns.find(target)+1;
}