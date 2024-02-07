#include <string>
#include <vector>
using namespace std;

int solution(string dirs) {
    int answer{};
    pair<int,int> pos{make_pair(5,5)};
    vector<vector<bool>> rowVisit(11, vector<bool>(10));
    vector<vector<bool>> colVisit(11, vector<bool>(10));
    
    for(const auto& c : dirs)
    {
        if( c == 'U')
        {
            if(pos.second == 0){continue;}
            pos.second--;
            if(!colVisit[pos.first][pos.second])
            {
                colVisit[pos.first][pos.second] = true;
                answer++;
            }
        }else if(c == 'D')
        {
            if(pos.second == 10){continue;}
            if(!colVisit[pos.first][pos.second])
            {
                colVisit[pos.first][pos.second] = true;
                answer++;
            }
            pos.second++;
        }else if(c == 'R')
        {
            if(pos.first == 10){continue;}
            if(!rowVisit[pos.second][pos.first])
            {
                rowVisit[pos.second][pos.first] = true;
                answer++;
            }
            pos.first++;
        }else
        {
            if(pos.first == 0){continue;}
            pos.first--;
            if(!rowVisit[pos.second][pos.first])
            {
                rowVisit[pos.second][pos.first] = true;
                answer++;
            }
        }
    }
    return answer;
}