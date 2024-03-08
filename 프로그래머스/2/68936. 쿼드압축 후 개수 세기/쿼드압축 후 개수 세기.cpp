#include <string>
#include <vector>

using namespace std;

vector<int> answer(2);

void Quad(vector<vector<int>>& arr, int li, int lj, int ri, int rj)
{
    bool isSame{true};
    
    for(int i{li}; i < ri; i++)
    {
        for(int j{lj}; j< rj; j++)
        {
            if(arr[li][lj] != arr[i][j])
            {
                isSame = false;
                break;
            }
        }
    }
    
    if(isSame)
    {
        answer[arr[li][lj]]++;
    }else
    {
        Quad(arr,li,lj,(ri+li)/2,(rj+lj)/2);
        Quad(arr,(ri+li)/2,lj, ri, (rj+lj)/2);
        Quad(arr,li,(rj+lj)/2,(ri+li)/2,rj);
        Quad(arr,(ri+li)/2,(rj+lj)/2,ri,rj);
    }
}

vector<int> solution(vector<vector<int>> arr) {
    int size = arr.size();
    Quad(arr, 0, 0, size, size);
    return answer;
}