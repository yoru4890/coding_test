#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    vector<int> noThree(n+1);
    for(int i=1; i<=n; i++){
        noThree[i] = noThree[i-1]+1;
        string temp{to_string(noThree[i])};
        while(noThree[i]%3==0 || temp.find('3')!=string::npos){
            noThree[i]++;
            temp = to_string(noThree[i]);
        }
    }
    return noThree[n];
}