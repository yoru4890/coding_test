#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for(auto& e : str){
        if(e>='a' && e <='z'){e+=('A'-'a');}
        else if(e >='A' && e <='Z'){e+=('a'-'A');}
    }
    cout << str;
    return 0;
}