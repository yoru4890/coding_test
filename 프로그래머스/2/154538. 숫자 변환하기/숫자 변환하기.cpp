#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int x, int y, int n) {
    int answer {-1};
    queue<pair<int,int>> bfs;
    vector<bool> isVisit(y+1);
    bfs.push({x,0});
    if(x == y) return 0;
    while(!bfs.empty())
    {
        int value{bfs.front().first};
        int moveCount{bfs.front().second};
        bfs.pop();
        
        int plus{value+n}, two{2*value}, three{3*value};
        
        if(plus <= y)
        {
            if(!isVisit[plus])
            {
                if(plus == y)
                {
                    answer = moveCount+1;
                    break;
                }
                
                bfs.push({plus,moveCount+1});
                isVisit[plus] = true;
            }
        }
        
        if(two <= y)
        {
            if(!isVisit[two])
            {
                if(two == y)
                {
                    answer = moveCount+1;
                    break;
                }
                
                bfs.push({two,moveCount+1});
                isVisit[two] = true;
            }
        }
        
        if(three <= y)
        {
            if(!isVisit[three])
            {
                if(three == y)
                {
                    answer = moveCount+1;
                    break;
                }
                
                bfs.push({three,moveCount+1});
                isVisit[three] = true;
            }
        }
    }
    return answer;
}