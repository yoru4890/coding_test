#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string temp;
    for(auto& c : new_id){
        if(c>='A' && c<='Z'){c+=('a'-'A');}
    }
    
    for(const auto& c : new_id){
        if((c>='a' && c<='z') ||(c >='0' && c<='9') ||c =='-' || c=='_' || c=='.'){temp +=c;}
    }
    new_id = temp;
    temp.clear();
    
    for(const auto& c : new_id){
        if(c == '.' && temp.back() == c){continue;}
        temp += c;
    }
    new_id = temp;
    
    if(new_id.front() == '.'){
        new_id.erase(new_id.begin());
    }
    if(new_id.back() == '.'){
        new_id.pop_back();
    }
    
    if(new_id.empty()){
        new_id+='a';
    }
    
    if(new_id.size() >=16){
        new_id = new_id.substr(0,15);
        if(new_id.back() == '.'){
            new_id.pop_back();
        }
    }
    
    while(new_id.size() < 3){
        new_id+=new_id.back();
    }
    
    return new_id;
}