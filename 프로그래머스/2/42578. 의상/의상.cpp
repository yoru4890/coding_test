#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer{1};
    unordered_map<string, int> numTag;
    unordered_map<string, bool> bHave;
    vector<int> list(1);
    for(int index{1};const auto& vectorString : clothes)
    {
        if(numTag[vectorString[1]])
        {
            if(!bHave[vectorString[0]])
            {
                list[numTag[vectorString[1]]]++;
                bHave[vectorString[0]] = true;
            }
        }else
        {
            numTag[vectorString[1]] = index++;
            list.emplace_back(1);
            bHave[vectorString[0]] = true;
        }
    }
    for(const auto& num : list)
    {
        answer *= (num+1);
    }
    return --answer;
}