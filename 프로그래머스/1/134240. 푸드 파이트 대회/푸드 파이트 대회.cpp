#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    int size{static_cast<int>(food.size())};
    string answer = "";
    for(int i{1}; i<size; i++){
        food[i]/=2;
        for(int j{};j<food[i];j++){
            answer += to_string(i);
        }
    }
    answer += '0';
    for(int i{size-1}; i>0; i--){
        for(int j{};j<food[i];j++){
            answer += to_string(i);
        }
    }
    return answer;
}