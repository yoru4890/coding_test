#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n{}, limitWeight{};

	cin >> n >> limitWeight;

	vector<pair<int, int>> things(n);
	vector<int> maxPrice(limitWeight+1);

	for (auto& e : things) { cin >> e.first >> e.second; }

	for (const auto& e :things)
	{
		for (int j = limitWeight; j > 0; j--)
		{
			if (e.first <= j)
			{
				maxPrice[j] = max(maxPrice[j], e.second + maxPrice[j - e.first]);
			}
		}
	}
	
	cout << maxPrice[limitWeight];

}
