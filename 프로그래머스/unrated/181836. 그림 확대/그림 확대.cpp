#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    for(auto& e : picture){
        string temp;
        for(int i=0; i<e.size(); i++){
            for(int j =0; j<k; j++){
                temp += e[i];
            }
        }
        for( int i=0; i<k; i++){
            answer.emplace_back(temp);
        }
    }
    return answer;
}