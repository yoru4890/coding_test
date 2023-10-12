#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    stringstream ss;
    ss.str(polynomial);
    string term, oper, answer;
    int x{}, num{};
    ss >> term;
    if(term[term.size()-1] == 'x'){
        if(term == "x"){
            x++;
        }else{
            string temp{term.substr(0,term.size()-1)};
            x+= stoi(temp);
        }
    }else{
        num += stoi(term);
    }
    while(ss >> oper >> term){
        if(term[term.size()-1] == 'x'){
            if(term == "x"){
                x++;
            }else{
                string temp{term.substr(0,term.size()-1)};
                x+= stoi(temp);
            }
        }else{
                num += stoi(term);
        }
    }
    
    if(x){
        if(x != 1){
           answer += to_string(x); 
        }
        answer += 'x';
        if(num){
            answer += " + ";
            answer += to_string(num);
        }
    }else{
        answer += to_string(num);
    }
    
    return answer;
}