#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    return is_prefix == my_string.substr(0,is_prefix.size());
}