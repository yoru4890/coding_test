#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    if(my_string.size() >= is_suffix.size() && 
       my_string.substr(my_string.size()-is_suffix.size()) == is_suffix){answer =1;}
    return answer;
}