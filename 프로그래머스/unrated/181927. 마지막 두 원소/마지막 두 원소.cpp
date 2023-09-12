#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer{num_list};
    int preEnd{*(answer.rbegin()+1)};
    answer.push_back(answer.back() > preEnd ? answer.back()-preEnd : 2*answer.back());
    return answer;
}