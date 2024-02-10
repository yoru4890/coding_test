#include <string>
#include <vector>

using namespace std;

bool Check(const string& s, const string& skill);

int solution(string skill, vector<string> skill_trees) {
    int answer{};
    
    for(const auto& s : skill_trees)
    {
        if(Check(s, skill))
        {
            answer++;
        }
    }
    return answer;
}

bool Check(const string& s, const string& skill)
{
    int index{};
    for(const auto& c : s)
    {
        auto it = skill.find(c);
            
        if(it != string::npos)
        {
            if(index < it)
            {
                return false;
            }else if(index == it)
            {
                index++;
            }
        }
    }
    
    return true;
}