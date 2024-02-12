#include <string>
#include <vector>

using namespace std;

int solution(vector<int> topping) {
    const int MAX_NUM{10'001};
    int answer {};
    int size = topping.size();
    vector<int> one(MAX_NUM);
    vector<int> two(MAX_NUM);
    int countOne{};
    int countTwo{};
    for(const auto& e : topping)
    {
        if(!one[e])
        {
            countOne++;
        }

        one[e]++;
    }

    for(int i{size-1}; i>0; i--)
    {
        one[topping[i]]--;
        if(!one[topping[i]])
        {
            countOne--;
        }

        if(!two[topping[i]])
        {
            countTwo++;
        }
        two[topping[i]]++;

        if(countOne == countTwo)
        {
            answer++;
        }
    }
    return answer;
}