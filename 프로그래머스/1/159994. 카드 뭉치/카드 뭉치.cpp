#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    for(int i{},j{},k{}; i<goal.size(); i++){
        if(cards1[j] == goal[i]){
            j++;
        }else if(cards2[k] == goal[i]){
            k++;
        }else{
            return "No";
        }
    }
    return "Yes";
}