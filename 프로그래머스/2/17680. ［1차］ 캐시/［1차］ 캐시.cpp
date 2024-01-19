#include <string>
#include <vector>
#include <list>

using namespace std;

bool CheckCache(list<string>& cache, const string& s);

int solution(int cacheSize, vector<string> cities) {
    int answer{};
    list<string> cache;
    if(!cacheSize)
    {
        return 5*cities.size();
    }
    for(auto& s : cities)
    {
        for(auto& c : s)
        {
            c = tolower(c);
        }
        
        if(cache.empty())
        {
            cache.emplace_back(s);
            answer +=5;
        }else
        {
            if(CheckCache(cache, s))
            {
                answer++;
            }else
            {
                answer +=5;
                if(cache.size() >= cacheSize)
                {
                    cache.erase(cache.begin());
                }
                cache.emplace_back(s);
            }
        }
    }
    return answer;
}

bool CheckCache(list<string>& cache, const string& s)
{
    for(auto it{cache.begin()}; it!=cache.end(); it++)
    {
        if(*it == s)
        {
            cache.erase(it);
            cache.emplace_back(s);
            return true;
        }
    }
    
    return false;
}