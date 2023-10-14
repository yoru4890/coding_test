#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int size{static_cast<int>(spell.size())};
    for(const auto& str : dic){
        if(str.size() == size){
            int count{};
            for(const auto& e : spell){
                if(str.find(e)!=string::npos){
                    count++;
                }
            }
            if(count == size){
                return 1;
            }
        }
    }
    return 2;
}