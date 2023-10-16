#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> dots) {
    sort(dots.begin(),dots.end());
    int answer = 0;
    double slope1{}, slope2{}, slope3{},slope4{};
    slope1 = static_cast<double>((dots[1][1]-dots[0][1]))/(dots[1][0]-dots[0][0]);
    slope2 = static_cast<double>((dots[3][1]-dots[2][1]))/(dots[3][0]-dots[2][0]);
    slope3 = static_cast<double>((dots[3][1]-dots[0][1]))/(dots[3][0]-dots[0][0]);
    slope4 = static_cast<double>((dots[2][1]-dots[1][1]))/(dots[2][0]-dots[1][0]);
    return slope1 == slope2 || slope3 == slope4;
}