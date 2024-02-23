#include <string>
#include <vector>
#include <cmath>

using namespace std;

int answer{};

void DFS(const string& numbers, int deep, vector<bool>& isVisit, string target, vector<bool>& isPrimeNum);

int solution(string numbers) {
    const int MAX_NUM{10000000};
    vector<bool> isPrimeNum(MAX_NUM, true);
    isPrimeNum[0] = isPrimeNum[1] = false;
    
    double mid {sqrt(MAX_NUM)};
    
    for(int i{4}; i<MAX_NUM; i+=2)
    {
        isPrimeNum[i] = false;
    }
    
    for(int i{3}; i<= mid; i+=2)
    {
        if(isPrimeNum[i])
        {
            for(int j{i+i}; j<MAX_NUM; j+=i)
            {
                isPrimeNum[j] = false;
            }
        }
    }
    
    vector<bool> isVisit(static_cast<int>(numbers.size()));
    DFS(numbers, 0, isVisit, "", isPrimeNum);
    
    return answer;
}

void DFS(const string& numbers, int deep, vector<bool>& isVisit, string target, vector<bool>& isPrimeNum)
{
    if(target != "")
    {
        int temp{stoi(target)};
        
            if(isPrimeNum[temp])
        {
            answer++;
            isPrimeNum[temp] = false;
        }
    }
    
    if(deep >= numbers.size())
    {
        return;
    }
    
    for(int i{}; i<numbers.size(); i++)
    {
        if(!isVisit[i])
        {
            isVisit[i] = true;
            DFS(numbers, deep + 1, isVisit, target+numbers[i], isPrimeNum);
            isVisit[i] = false;
        }
    }
}