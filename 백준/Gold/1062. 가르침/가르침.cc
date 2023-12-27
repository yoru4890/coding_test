#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<bool> alphabet(26);

vector<int> wordsConvertInt;

int K{}, maxCount{};

void Travel(int cur, int letter);

void Check();

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<char> letters{ 'a','n','t','i','c' };
    for (const auto& c : letters)
    {
        alphabet[c - 'a'] = true;
    }

    int N{};
    cin >> N >> K;

    vector<string> words(N);
    for (auto& s : words) { cin >> s; }
    
    if (K < 5) { cout << 0; return 0; }

    K -= 5;

    wordsConvertInt.resize(N);
    for (int index{};const auto& s : words)
    {
        for (const auto& c : s)
        {
            wordsConvertInt[index] |= (1 << c - 'a');
        }

        index++;
    }

    Travel(0, 0);

    cout << maxCount;
}

void Travel(int cur, int letter)
{
    if (cur >= K || letter >= 26)
    {
        Check();
        return;
    }

    if (!alphabet[letter])
    {
        alphabet[letter] = true;
        Travel(cur + 1, letter + 1);
        alphabet[letter] = false;
    }

    Travel(cur, letter + 1);
    
}

void Check()
{
    int num{}, temp{};
    for (int i{}; i < alphabet.size(); i++)
    {
        if (alphabet[i])
        {
            num |= (1 << i);
        }
    }

    for (const auto& e : wordsConvertInt)
    {
        if ((num & e) == e) { temp++; }
    }

    maxCount = max(maxCount, temp);
}
