#include <iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;

class Sol
{
public:
    int original{};
    vector<char> letter;
    vector<int> preNum;

    void Print(int num);
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T{}, num{}, target{};
    cin >> T;
    while (T--)
    {
        cin >> num >> target;

        Sol s;

        s.original = num;
        s.letter.resize(10000);
        s.preNum.resize(10000);

        queue<int> bfs;
        bfs.push(num);
        s.preNum[num] = num;

        while (!bfs.empty())
        {
            int tempNum = bfs.front();
            bfs.pop();

            int DNum{ 2 * tempNum % 10000};
            int SNum{ tempNum == 0 ? 9999 : tempNum - 1 };
            int LNum{ (tempNum * 10) % 10000 + tempNum / 1000 };
            int RNum{ (tempNum % 10) * 1000 + tempNum / 10 };

            if (!s.letter[DNum])
            {
                s.letter[DNum] = 'D';
                s.preNum[DNum] = tempNum;

                if (DNum == target)
                {
                    s.Print(DNum);
                    break;
                }

                bfs.push(DNum);
            }

            if (!s.letter[SNum])
            {
                s.letter[SNum] = 'S';
                s.preNum[SNum] = tempNum;

                if (SNum == target)
                {
                    s.Print(SNum);
                    break;
                }

                bfs.push(SNum);
            }

            if (!s.letter[LNum])
            {
                s.letter[LNum] = 'L';
                s.preNum[LNum] = tempNum;

                if (LNum == target)
                {
                    s.Print(LNum);
                    break;
                }

                bfs.push(LNum);
            }

            if (!s.letter[RNum])
            {
                s.letter[RNum] = 'R';
                s.preNum[RNum] = tempNum;

                if (RNum == target)
                {
                    s.Print(RNum);
                    break;
                }

                bfs.push(RNum);
            }
        }

        cout << '\n';
    }
}

void Sol::Print(int num)
{
    if (num == original) return;

    Print(preNum[num]);
    cout << letter[num];
}
