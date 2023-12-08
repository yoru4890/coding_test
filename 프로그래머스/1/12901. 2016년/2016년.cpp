#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    vector<string> day7{"THU","FRI","SAT","SUN","MON","TUE","WED"};
    vector<int> days30{0,31,29,31,30,31,30,31,31,30,31,30,31};
    int daySum{b};
    for(int i{1}; i<a; i++){
        daySum+=days30[i];
    }
    return day7[daySum%7];
}