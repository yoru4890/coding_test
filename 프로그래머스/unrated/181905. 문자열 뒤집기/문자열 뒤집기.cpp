#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) {
    for(int i=s, j=e; i<=j; i++,j--){
        swap(my_string[i],my_string[j]);
    }
    return my_string;
}