#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer{};
    int index{};
    int paint{section[index]};
    while(index < section.size()){
        answer++;
        paint+=m;
        while(paint>section[index]){
            index++;
            if(index >= section.size()){return answer;}
        }
        paint = section[index];
        
    }
    return answer;
}