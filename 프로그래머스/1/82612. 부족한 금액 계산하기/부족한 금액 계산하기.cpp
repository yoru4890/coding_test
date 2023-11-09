using namespace std;

long long solution(int price, int money, int count)
{
    long long answer{};
    answer = static_cast<long long>(price) * count *(count+1)/2 - money;
    return answer <= 0 ? 0 : answer;
}