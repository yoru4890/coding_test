#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for(const auto& e : str){
        cout << e<<'\n';
    }
    return 0;
}