#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(string dartResult) {
    const int CHECK{100'000};
    vector<int> scores(3, CHECK);
    string temp;
    for(const auto& c : dartResult){
        if(c >= '0' && c <='9'){
            temp+= c;
        }else{
            if(!temp.empty()){
                for(auto& e : scores){
                    if(e == CHECK){
                        e = stoi(temp);
                        break;
                    }
                }
                temp.clear();
            }
            
            if(c == 'D'){
                for(int i{2}; i >=0; i--){
                    if(scores[i] != CHECK){
                        scores[i] = pow(scores[i],2);
                        break;
                    }
                }
            }else if(c == 'T'){
                for(int i{2}; i >=0; i--){
                    if(scores[i] != CHECK){
                        scores[i] = pow(scores[i],3);
                        break;
                    }
                }
                
            }else if(c == '*'){
                for(int i{2}; i >=0; i--){
                    if(scores[i] != CHECK){
                        scores[i] *=2;
                        if(i){scores[i-1]*=2;}
                        break;
                    }
                }
            }else if(c == '#'){
                for(int i{2}; i >=0; i--){
                    if(scores[i]!= CHECK){
                        scores[i] *= -1;
                        break;
                    }
                }
            }
        }
    }
    
    return scores[0] + scores[1] + scores[2];
}