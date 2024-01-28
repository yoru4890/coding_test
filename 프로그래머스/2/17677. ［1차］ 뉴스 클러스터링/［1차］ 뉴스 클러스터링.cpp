#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string str1, string str2) {
    const int MOD{65536};
    int answer{};
    vector<int> nums1;
    vector<int> nums2;
    float commonCount{};
    
    for(auto& c : str1)
    {
        if((c >= 'a' && c<='z') || (c>='A' && c<='Z'))
        {
            c = tolower(c);
        }
    }
    
    for(auto& c : str2)
    {
        if((c >= 'a' && c<='z') || (c>='A' && c<='Z'))
        {
            c = tolower(c);
        }
    }
    
    for(int i{1}; i<str1.size(); i++)
    {
        if((str1[i] >= 'a' && str1[i]<='z') && (str1[i-1]>='a' && str1[i-1]<='z'))
        {
            nums1.push_back(str1[i]*26 + str1[i-1]);
        }
    }
    
    for(int i{1}; i<str2.size(); i++)
    {
        if((str2[i] >= 'a' && str2[i]<='z') && (str2[i-1]>='a' && str2[i-1]<='z'))
        {
            nums2.push_back(str2[i]*26 + str2[i-1]);
        }
    }
    
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    
    int index1{}, index2{};
    while(index1 < nums1.size() && index2 < nums2.size())
    {
        if(nums1[index1] == nums2[index2])
        {
            commonCount++;
            index1++;
            index2++;
        }else if(nums1[index1] > nums2[index2])
        {
            index2++;
        }else
        {
            index1++;
        }
    }
    
    float result{};
    
    if(nums1.size() || nums2.size())
    {
        result = commonCount / (nums1.size() + nums2.size() - commonCount);
    }else
    {
        result = 1;
    }
    result *= MOD;
    
    return static_cast<int>(result);
}