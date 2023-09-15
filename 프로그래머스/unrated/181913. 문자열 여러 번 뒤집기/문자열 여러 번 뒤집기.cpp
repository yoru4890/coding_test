#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    for(const auto& row : queries){
        for(int i=row[0], j = row[1] ; i<j; i++,j--){
            swap(my_string[i],my_string[j]);
        }
    }
    return my_string;
}