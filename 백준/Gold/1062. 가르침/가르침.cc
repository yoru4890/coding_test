#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> wordsConvertInt;

int K{}, maxCount{};

void Travel(int cur, int letter, int num);

void Check(int num);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<char> letters{ 'a','n','t','i','c' };

    int N{}, num{};
    cin >> N >> K;

    for (const auto& c : letters) { num |= (1 << c - 'a'); }

    vector<string> words(N);
    for (auto& s : words) { cin >> s; }
    
    if (K < 5) { cout << 0; return 0; }

    wordsConvertInt.resize(N);
    for (int index{};const auto& s : words)
    {
        for (const auto& c : s)
        {
            wordsConvertInt[index] |= (1 << c - 'a');
        }

        index++;
    }

    Travel(5, 0, num);

    cout << maxCount;
}

void Travel(int cur, int letter, int num)
{
    if (cur >= K || letter >= 26)
    {
        Check(num);
        return;
    }

    for (int i{ letter }; i < 26; i++)
    {
        if (num & (1 << i)) { continue; }

        Travel(cur + 1, i + 1, num |(1 << i));
    }
    
}

void Check(int num)
{
    int temp{};

    for (const auto& e : wordsConvertInt)
    {
        if ((num & e) == e) { temp++; }
    }

    maxCount = max(maxCount, temp);
}
