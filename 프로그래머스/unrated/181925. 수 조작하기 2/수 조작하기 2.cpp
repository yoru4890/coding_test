#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<int> numLog) {
    map<int, char> control{{1,'w'},{-1,'s'},{10,'d'},{-10,'a'}};
    string answer = "";
    for(int i=1; i<numLog.size();i++){
        answer += control[numLog[i]-numLog[i-1]];
    }
    
    return answer;
}