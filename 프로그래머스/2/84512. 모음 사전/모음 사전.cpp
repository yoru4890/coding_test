#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int index{};
string s{"AEIOU"};

void DFS(unordered_map<string,int>& dic, string result, int deep);

int solution(string word) {
    int answer{};
    
    unordered_map<string,int> dic;
    
    DFS(dic, "", 0);
    
    return dic[word];
}

void DFS(unordered_map<string,int>& dic, string result, int deep)
{
    if(deep > 5)
    {
        return;
    }
    
    if(!dic[result])
    {
        dic[result] = index++;
    }
    
    for(const auto& c : s)
    {
        DFS(dic,result+c, deep+1);
    }
    
}