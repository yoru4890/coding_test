#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    int size{static_cast<int>(phone_number.size()-4)};
    for(int i=0; i<size;i++){
        phone_number[i] = '*';
    }
    return phone_number;
}