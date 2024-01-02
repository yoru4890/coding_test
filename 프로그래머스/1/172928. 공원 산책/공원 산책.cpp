#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    int w{static_cast<int>(park[0].size())}, h{static_cast<int>(park.size())};
    pair<int,int> start{-1,-1};
    stringstream ss;
    char direction{};
    int num{}, ni{}, nj{};
 
    for(int i{}; i<h; i++){
        if(start.first != -1){break;}
        for(int j{}; j<w; j++){
            if(park[i][j] == 'S'){
                start.first = i; start.second = j;
                break;
            }
        }
    }
    
    for(const auto& e : routes){
        bool isObstacle{};
        ss.clear();
        ss << e;
        ss >> direction >> num;
        ni = start.first; nj = start.second;
        switch (direction){
            case 'N':
                while(num--){
                    ni--;
                    if(ni>=0 && park[ni][nj] == 'X'){isObstacle = true; break;}
                }
                break;
            case 'S':
                while(num--){
                    ni++;
                    if(ni<h && park[ni][nj] == 'X'){isObstacle = true; break;}
                }
                break;
            case 'W':
                while(num--){
                    nj--;
                    if(nj>=0 && park[ni][nj] == 'X'){isObstacle = true; break;}
                }
                break;
            case 'E':
                while(num--){
                    nj++;
                    if(nj<w && park[ni][nj] == 'X'){isObstacle = true; break;}
                }
                break;
            default:
                break;
        }
        
        if(ni < 0 || ni >= h || nj < 0 || nj >= w || isObstacle){
            continue;
        }
        
        start = make_pair(ni,nj);
    }
    answer.emplace_back(start.first);
    answer.emplace_back(start.second);
    return answer;
}