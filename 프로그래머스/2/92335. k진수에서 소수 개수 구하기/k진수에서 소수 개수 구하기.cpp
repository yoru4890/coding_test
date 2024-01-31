#include <string>
#include <vector>

using namespace std;

void GetAllPrime(vector<bool>& isPrime);

bool IsPrimeNum(long long num);

const int MOD{1'000'000};

int solution(int n, int k) {
    int answer{};
    
    vector<bool> isPrime(MOD,true);
    
    GetAllPrime(isPrime);
    
    string temp;
    
    while(n)
    {
        if(n%k)
        {
            temp = to_string(n%k) + temp;
        }else
        {
            if(!temp.empty())
            {
                if(isPrime[stoi(temp)])
                {
                    answer++;
                }
                
                temp = "";
            }
        }
        
        n/=k;
    }
    
    if(!temp.empty())
    {
        long long numTemp{stoll(temp)};
        if(numTemp >= MOD)
        {
            if(IsPrimeNum(numTemp))
            {
                answer++;
            }
        }else
        {
            if(isPrime[numTemp])
            {
                answer++;
            }
        }
    }
    
    return answer;
}

void GetAllPrime(vector<bool>& isPrime)
{
    isPrime[0] = isPrime[1] = false;
    
    for(int i{4}; i<MOD; i+=2)
    {
        isPrime[i] = false;
    }
    
    for(int i{3}; i*i<MOD; i+=2)
    {
        if(isPrime[i])
        {
            for(int j{i+i}; j<MOD; j+=i)
            {
                isPrime[j] = false;
            }
        }
    }
}

bool IsPrimeNum(long long num)
{
    if(num%2 == 0)
    {
        return false;
    }
    
    for(long long i{3}; i*i<= num; i+=2)
    {
        if(num%i == 0)
        {
            return false;
        }
    }
    return true;
}