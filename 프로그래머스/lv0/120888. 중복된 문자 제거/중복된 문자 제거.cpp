#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string my_string) {
    string answer = "";
    map<char,int> myMap;
    for(const auto& e : my_string){
        if(myMap[e]){
            continue;
        }else{
            myMap[e]++;
            answer+= e;
        }
    }
    return answer;
}