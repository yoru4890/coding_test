#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

class Sol
{
public:
	vector<char> order;
	vector<int> preNum;

public:
	void Print(int num);
};

int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	cout.tie(NULL);

	int T{};
	int original, target;
	cin >> T;
	
	while (T--)
	{
		cin >> original >> target;

		Sol s;
		s.order.resize(10000);
		s.preNum.resize(10000);

		queue<int> cacul;
		s.order[original] = -1;
		cacul.push(original);

		while (!cacul.empty())
		{
			int tempN{ cacul.front()};
			cacul.pop();
			
			int dd{ tempN * 2 % 10000 }, ss{ (tempN + 9999) % 10000 }, 
				ll{ (tempN * 10) % 10000 + tempN / 1000 }, rr{ tempN / 10 + (tempN % 10) * 1000 };

			if (!s.order[dd])
			{
				s.order[dd] = 'D';
				cacul.push(dd);
				s.preNum[dd] = tempN;

				if (dd == target)
				{
					s.Print(dd);
					cout << '\n';
					break;
				}
			}

			if (!s.order[ss])
			{
				s.order[ss] = 'S';
				cacul.push(ss);
				s.preNum[ss] = tempN;

				if (ss == target)
				{
					s.Print(ss);
					cout << '\n';
					break;
				}
			}

			if (!s.order[ll])
			{
				s.order[ll] = 'L';
				cacul.push(ll);
				s.preNum[ll] = tempN;

				if (ll == target)
				{
					s.Print(ll);
					cout << '\n';
					break;
				}
			}

			if (!s.order[rr])
			{
				s.order[rr] = 'R';
				cacul.push(rr);
				s.preNum[rr] = tempN;

				if (rr== target)
				{
					s.Print(rr);
					cout << '\n';
					break;
				}
			}

		}

	}

}

void Sol::Print(int num)
{
	if (order[num] == -1) { return; }

	Print(preNum[num]);
	cout << order[num];
}
