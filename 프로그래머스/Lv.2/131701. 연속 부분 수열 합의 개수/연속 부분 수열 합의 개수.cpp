#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> elements) {
    unordered_set<int> numStore;
    int size = elements.size();
    vector<int> subSums{0};
    for(const auto& e : elements)
    {
        subSums.emplace_back(subSums.back()+e);
    }
    for(const auto& e : elements)
    {
        subSums.emplace_back(subSums.back()+e);
    }
    
    for(int i{1}; i<=size; i++){
        for(int j{}; j<size; j++)
        {
            numStore.insert(subSums[i+j]-subSums[j]);
        }
    }
    return numStore.size();
}