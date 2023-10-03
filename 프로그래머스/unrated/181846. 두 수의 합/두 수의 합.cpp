#include <string>
#include <vector>

using namespace std;

string solution(string a, string b) {
    int sizeA{static_cast<int>(a.size())-1}, 
        sizeB{static_cast<int>(b.size())-1};
    int plusNum{};
    int maxSize{max(sizeA,sizeB)};
    string answer;
    for(int i=0; i<=maxSize; i++){
        int one{i<=sizeA ? a[sizeA-i]-'0' : 0};
        int two{i<=sizeB ? b[sizeB-i]-'0' : 0};
        int num{one + two + plusNum};
        
        plusNum = num > 9 ? 1 : 0;
        
        answer = static_cast<char>(num%10 +'0') + answer; 
    }
    if(plusNum){
        answer = static_cast<char>(plusNum +'0') + answer;
    }
    
    return answer;
}