#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

bool solution(vector<string> phone_book) {
    unordered_map<string, bool> prefix;
    for(const auto& s : phone_book)
    {
        prefix[s] = true;
    }
    
    for(const auto& s : phone_book)
    {
        for(int i{1}; i<s.size(); i++)
        {
            if(prefix[s.substr(0,i)])
            {
                return false;
            }
        }
    }
    return true;
}