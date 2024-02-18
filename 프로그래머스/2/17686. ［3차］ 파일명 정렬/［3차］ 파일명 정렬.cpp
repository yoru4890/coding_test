#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool CompareFile(const string& a, const string& b)
{
    string headA, headB;
    int cutA{}, cutB{};
    string sNumA, sNumB;
    
    while(!isdigit(a[cutA])) cutA++;
    while(!isdigit(b[cutB])) cutB++;
    
    headA = a.substr(0,cutA);
    headB = b.substr(0,cutB);
    
    for(int i{cutA}; i<a.size(); i++)
    {
        if(!isdigit(a[i])) break;
        sNumA.push_back(a[i]);
    }
    
    for(int i{cutB}; i<b.size(); i++)
    {
        if(!isdigit(b[i])) break;
        sNumB.push_back(b[i]);
    }
    
    for(auto& c : headA)
    {
        c = tolower(c);
    }
    
    for(auto& c : headB)
    {
        c = tolower(c);
    }
    
    int numA{stoi(sNumA)}, numB{stoi(sNumB)};
    
    return headA == headB ? numA < numB : headA < headB;
}

vector<string> solution(vector<string> files) {
    
    stable_sort(files.begin(),files.end(), CompareFile);

    return files;
}