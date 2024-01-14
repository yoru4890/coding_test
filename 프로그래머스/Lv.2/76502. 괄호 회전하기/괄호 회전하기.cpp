#include <string>
#include <vector>
#include <stack>
#include <unordered_map>

using namespace std;

int solution(string s) {
    int answer{};
    vector<int> parenthesisCount(4);
    unordered_map<char, char> parenthesis;
    unordered_map<char, int> parenthesisIndex;
    parenthesis['('] = ')';
    parenthesis['['] = ']';
    parenthesis['{'] = '}';
    parenthesisIndex['('] = parenthesisIndex[')'] = 1;
    parenthesisIndex['['] = parenthesisIndex[']'] = 2;
    parenthesisIndex['{'] = parenthesisIndex['}'] = 3;
    for(int i{}; i<s.size(); i++)
    {
        stack<char> myStack;
        bool bCant{};
        for(int j{i}; j<s.size(); j++)
        {
            if(myStack.empty())
            {
                if(!parenthesis[s[j]])
                {
                    bCant = true;
                    break;
                }else
                {
                    myStack.push(s[j]);
                    parenthesisCount[parenthesisIndex[s[j]]]++;
                }
            }else
            {
                if(parenthesis[s[j]])
                {
                    myStack.push(s[j]);
                    parenthesisCount[parenthesisIndex[s[j]]]++;
                }else
                {
                    if(parenthesis[myStack.top()] == s[j])
                    {
                        myStack.pop();
                        parenthesisCount[parenthesisIndex[s[j]]]--;
                    }else
                    {
                        myStack.push(s[j]);
                        parenthesisCount[parenthesisIndex[s[j]]]--;
                        if(parenthesisCount[parenthesisIndex[s[j]]] < 0)
                        {
                            bCant = true;
                            break;
                        }
                    }
                }
            }
        }
        
        if(bCant)
        {
            continue;
        }
        
        for(int j{}; j<i; j++)
        {
            if(myStack.empty())
            {
                if(!parenthesis[s[j]])
                {
                    bCant = true;
                    break;
                }else
                {
                    myStack.push(s[j]);
                    parenthesisCount[parenthesisIndex[s[j]]]++;
                }
            }else
            {
                if(parenthesis[s[j]])
                {
                    myStack.push(s[j]);
                    parenthesisCount[parenthesisIndex[s[j]]]++;
                }else
                {
                    if(parenthesis[myStack.top()] == s[j])
                    {
                        myStack.pop();
                        parenthesisCount[parenthesisIndex[s[j]]]--;
                    }else
                    {
                        myStack.push(s[j]);
                        parenthesisCount[parenthesisIndex[s[j]]]--;
                        if(parenthesisCount[parenthesisIndex[s[j]]] < 0)
                        {
                            bCant = true;
                            break;
                        }
                    }
                }
            }
        }
        
        if(bCant)
        {
            continue;
        }
        
        if(myStack.empty())
        {
            answer++;
        }
    }
    return answer;
}