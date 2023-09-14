#include <string>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

int solution(int a, int b, int c, int d) {
    map<int,int> count;
    int answer{};
    count[a]++;
    count[b]++;
    count[c]++;
    count[d]++;
    if(count.size() == 1 ){answer = 1111 * a;}
    else if(count.size() == 2){
        if(count[a]== 2){
            answer = a==b ? (a + c) * abs(a-c) : (a + b) * abs(a-b);
        }else{
            answer = count[a] == 1 ? pow(10 * b + a,2) : count[b] == 1 ? pow(10* a + b,2) : 
                    count[c] == 1 ? pow(10 * a + c,2) : pow(10 * a + d, 2);
        }
    }else if(count.size() == 3){
        answer = a == b ? c*d : a == c ? b*d : a == d ? b*c : b == c ? a * d : b == d ? a * c : a * b;
    }else{
        answer = min(a,min(b,min(c,d)));
    }
    return answer;
}