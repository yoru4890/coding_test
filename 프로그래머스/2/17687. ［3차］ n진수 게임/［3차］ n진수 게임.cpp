#include <string>
#include <vector>

using namespace std;

string solution(int n, int t, int m, int p) {
    string answer;
    string result{"0"};
    const int MAX_SIZE{t*m+1};
    int num{1};
    while(result.size() < MAX_SIZE)
    {
        int numTemp{num};
        string temp;
        while(numTemp)
        {
            int spot{numTemp%n};
            if(spot > 9)
            {
                temp = (char)((spot-10) + 'A') + temp;
            }else
            {
                temp = to_string(spot) + temp;
            }
            numTemp/=n;
        }
        
        result += temp;
        num++;
    }
    
    int index {p-1};
    while(answer.size() < t)
    {
        answer += result[index];
        index += m;
    }
    
    return answer;
}