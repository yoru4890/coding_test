#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N{}, M{};
	cin >> N >> M;
	vector<int> nums(N) , table(N+1);

	for (auto& e : nums) { cin >> e; }
	for (int i = 1; i < N+1; i++) { table[i] = table[i - 1] + nums[i-1]; }

	while (M--)
	{
		int i{}, j{};
		cin >> i >> j;

		cout << table[j] - table[i-1] << '\n';
	}
}
