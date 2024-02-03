#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string s{ "AEIOU" };

const int MAXSIZE = s.size();

int solution(string word) {
    int answer{};
    int wordSize = word.size();
    unordered_map<char, int> index;
    vector<int> counts;
    
    for(int i{};const auto& c : s)
    {
        index[c] = i++; 
    }
    
    for(int i{}, j{ 1 }, k{ MAXSIZE } ; i<MAXSIZE ; i++, j += k, k *= MAXSIZE)
    {
        counts.push_back(j);
    }
    
    for(int i{}, j{ MAXSIZE-1 }; i<wordSize ; i++, j--)
    {
        answer += index[word[i]] * counts[j] + 1;
    }
    
    return answer;
}
