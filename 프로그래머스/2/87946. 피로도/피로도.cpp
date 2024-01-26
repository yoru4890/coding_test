#include <string>
#include <vector>

using namespace std;

class Sol
{
public:
    int size{};
    int maxCounts{};
    vector<bool> IsVisit;
    
    void DFS(int k, vector<vector<int>>& dungeons, int deep, int counts)
    {
        maxCounts = max(maxCounts, counts);
        
        if(deep >= size)
        {
            return;
        }
        
        for(int i{}; i<size; i++)
        {
            if(!IsVisit[i] && k >= dungeons[i][0])
            {
                IsVisit[i] = true;
                DFS(k-dungeons[i][1], dungeons, deep+1, counts+1);
                IsVisit[i] = false;
            }
        }
    }
};

int solution(int k, vector<vector<int>> dungeons) {
    
    Sol s;
    s.size = dungeons.size();
    s.IsVisit.resize(s.size);
    s.DFS(k, dungeons, 0, 0);
    
    return s.maxCounts;
}
