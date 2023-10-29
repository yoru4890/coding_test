#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    string temp{to_string(x)};
    int num{};
    for(const auto& e : temp){
        num += e-'0';
    }
    return !(x%num);
}