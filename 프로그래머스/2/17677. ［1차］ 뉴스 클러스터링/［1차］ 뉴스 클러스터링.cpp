#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    const int MOD{65536};
    int answer{};
    vector<int> nums1(676);
    vector<int> nums2(676);
    float commonCount{}, maxCount;
    
    for(int i{1}; i<str1.size(); i++)
    {
        if(isalpha(str1[i]) && isalpha(str1[i-1]))
        {
            nums1[((str1[i]&31)-1)*26 + (str1[i-1]&31)-1]++;
        }
    }
    
    for(int i{1}; i<str2.size(); i++)
    {
        if(isalpha(str2[i]) && isalpha(str2[i-1]))
        {
            nums2[((str2[i]&31)-1)*26 + (str2[i-1]&31)-1]++;
        }
    }
    
    for(int i{}; i<676; i++)
    {
        commonCount += min(nums1[i],nums2[i]);
        maxCount += max(nums1[i], nums2[i]);
    }
    
    return maxCount ? static_cast<int>((commonCount/maxCount) * MOD) : 65536;
}