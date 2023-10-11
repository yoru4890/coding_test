#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer{};
    bool isMinus{};
    string temp;
    for(const auto& e : my_string){
        if(e == ' '){
            if(temp == "+"){
                isMinus = false;
            }else if(temp == "-"){
                isMinus = true;
            }else{
                if(isMinus){
                    answer -= stoi(temp);
                }else{
                    answer += stoi(temp);
                }
            }
            temp.clear();
        }else{
            temp += e;
        }
    }
    if(isMinus){
                    answer -= stoi(temp);
                }else{
                    answer += stoi(temp);
                }
    return answer;
}