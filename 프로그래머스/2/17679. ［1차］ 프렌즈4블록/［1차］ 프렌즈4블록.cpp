#include <string>
#include <vector>

using namespace std;

int solution(int m, int n, vector<string> board) {
    int answer{};
    while(true)
    {
        vector<vector<bool>> isDestroy(m,vector<bool>(n));
        int destroy{};
        
        for(int i{}; i<m; i++)
        {
            for(int j{}; j<n; j++)
            {
                if(board[i][j] != '0')
                {
                    if(i >= m-1 || j >= n-1) continue;
                    
                    if(board[i][j] == board[i][j+1] && board[i][j] == board[i+1][j] && board[i][j] == board[i+1][j+1])
                    {
                        isDestroy[i][j] = true;
                        isDestroy[i][j+1] = true;
                        isDestroy[i+1][j] = true;
                        isDestroy[i+1][j+1] = true;
                    }
                }
            }
        }
        
        for(int i{}; i<m; i++)
        {
            for(int j{}; j<n; j++)
            {
                if(isDestroy[i][j])
                {
                    board[i][j] = '0';
                    destroy++;
                }
            }
        }
        
        if(!destroy) break;
        
        answer += destroy;
        
        for(int i{}; i<n; i++)
        {
            for(int j{m-1}; j >= 0; j--)
            {
                if(board[j][i] == '0')
                {
                    int temp{j-1};
                    while(temp >= 0 && board[temp][i] == '0')
                    {
                        temp--;
                    }
                    
                    if(temp >= 0)
                    {
                        swap(board[temp][i], board[j][i]);
                    }
                }
            }
        }
    }
    return answer;
}