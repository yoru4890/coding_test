#include<vector>
#include <queue>
using namespace std;

int solution(vector<vector<int> > maps)
{
    using pairSet = pair<int,pair<int,int>>;
    vector<pair<int,int>> offset{{-1,0},{1,0},{0,-1},{0,1}};
    int answer {-1};
    int n = maps[0].size()-1;
    int m = maps.size()-1;
    queue<pairSet> BFS;
    BFS.push({1,{0,0}});
    while(!BFS.empty())
    {
        pair<int,int> pos {BFS.front().second};
        int value{BFS.front().first};
        if(pos.first == n && pos.second == m)
        {
            answer = value;
            break;
        }
        BFS.pop();
        
        for(const auto& [ox,oy] : offset)
        {
            int nx{pos.first + ox}, ny{pos.second + oy};
            if(nx < 0 || nx > n || ny < 0 || ny > m) continue;
            
            if(maps[ny][nx] == 1)
            {
                maps[ny][nx] = 0;
                BFS.push({value+1,{nx,ny}});
            }
        }
    }
    return answer;
}