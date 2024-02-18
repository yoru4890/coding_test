#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct MyFile
{
    string mName;
    int mIndex;
};

bool CompareFile(const MyFile& a, const MyFile& b)
{
    string headA, headB;
    int cutA{}, cutB{};
    string sNumA, sNumB;
    
    while(!isdigit(a.mName[cutA])) cutA++;
    while(!isdigit(b.mName[cutB])) cutB++;
    
    headA = a.mName.substr(0,cutA);
    headB = b.mName.substr(0,cutB);
    
    for(int i{cutA}; i<a.mName.size(); i++)
    {
        if(!isdigit(a.mName[i])) break;
        sNumA.push_back(a.mName[i]);
    }
    
    for(int i{cutB}; i<b.mName.size(); i++)
    {
        if(!isdigit(b.mName[i])) break;
        sNumB.push_back(b.mName[i]);
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
    
    return headA == headB ? (numA == numB ? a.mIndex < b.mIndex : numA < numB) : headA < headB;
}

vector<string> solution(vector<string> files) {
    
    int size = files.size();
    
    vector<string> answer;
    
    vector<MyFile> myFiles(size);
    
    for(int i{}; i<files.size(); i++)
    {
        myFiles[i].mName = files[i];
        myFiles[i].mIndex = i;
    }
    
    sort(myFiles.begin(),myFiles.end(), CompareFile);
    
    for(const auto& e : myFiles)
    {
        answer.push_back(e.mName);
    }
    
    return answer;
}