#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int size{static_cast<int>(s.size())-1};
    return s.substr(size/2,size%2+1);
}