#include <string>
#include <vector>

using namespace std;

string solution(string a, string b) {
    int sizeA{static_cast<int>(a.size())}, 
        sizeB{static_cast<int>(b.size())};
    int plusNum{};
    int i= sizeA-1, j = sizeB-1;
    string answer;
    for(;i>=0 && j>=0; i--, j--){
        int one{a[i]-'0'}, two{b[j]-'0'};
        string temp{to_string(one+two+plusNum)};
        if(temp.size() >1){
            plusNum = temp[0]-'0';
            answer = temp[1]+ answer;
        }else{
            plusNum = 0;
            answer = temp[0] + answer;
        }
    }
    if(i!=-1){
        while(i>-1){
            int num{a[i]-'0'+plusNum};
            string temp{to_string(num)};
            if(temp.size()>1){
                plusNum = temp[0]-'0';
                answer = temp[1] + answer;
            }else{
                plusNum = 0;
                answer = temp[0] + answer;
            }
            i--;
        }
    }else if(j!= -1){
        while(j>-1){
            int num{b[j]-'0'+plusNum};
            string temp{to_string(num)};
            if(temp.size()>1){
                plusNum = temp[0]-'0';
                answer = temp[1] + answer;
            }else{
                plusNum = 0;
                answer = temp[0] + answer;
            }
            j--;
        }
    }
    
    if(plusNum){
        answer = static_cast<char>(plusNum +'0') + answer;
    }
    
    return answer;
}