#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount)
{
    int answer=0;
    map<string,int> m;
    for(int i=0; i<9; i++) m[discount[i]]++;
    for(int i=9; i<discount.size(); i++)
    {
        m[discount[i]]++;
        bool flag=true;
        for(int j=0; j<want.size(); j++)
            if(m[want[j]]!=number[j])
            { flag=false; break; }
        if(flag==true) answer++;
        m[discount[i-9]]--;
    }
    return answer;
}