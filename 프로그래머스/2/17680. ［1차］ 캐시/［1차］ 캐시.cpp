#include <string>
#include <vector>
#include <list>
#include <unordered_map>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer{4};
    list<string> cache;
    unordered_map<string, list<string>::iterator> cacheMap;
    if(!cacheSize)
    {
        return 5*cities.size();
    }
    
    for(auto& c : cities[0])
    {
        c = tolower(c);
    }
    
    cache.emplace_back(cities[0]);
    cacheMap[cities[0]] = cache.begin();
    
    for(auto& s : cities)
    {
        for(auto& c : s)
        {
            c = tolower(c);
        }
        
        auto it = cacheMap.find(s);
        
        if(it != cacheMap.end())
        {
            answer++;
            cache.erase(cacheMap[s]);
            cache.emplace_back(s);
            cacheMap[s] = --cache.end();
        }else
        {
            answer += 5;
            if(cache.size() >= cacheSize)
            {
                cacheMap.erase(cache.front());
                cache.erase(cache.begin());
            }
            cache.emplace_back(s);
            cacheMap[s] = --cache.end();
        }
    }
    return answer;
}