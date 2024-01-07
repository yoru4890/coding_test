#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    string temp;
    int totalCount{},zeroCount{};
    while(s != "1"){
        totalCount++;
        temp.clear();
        for(const auto& c : s){
            if(c == '1'){
                temp+=c;
            }else{
                zeroCount++;
            }
        }
        int nSize = temp.size();
        temp.clear();
        while(nSize){
            if(nSize%2){temp+='1';}
            else {temp +='0';}
            nSize/=2;
        }
        
        s = temp;
        
    }
    return {totalCount,zeroCount};
}