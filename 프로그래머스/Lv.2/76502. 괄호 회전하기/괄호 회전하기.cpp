#include <string>
#include <vector>
#include <stack>
using namespace std;

bool IsParenthesis(string& s, int index);

int solution(string s)
{
    int answer{};
    
    for(int i{}; i<s.size(); i++)
    {
        if(IsParenthesis(s,i))
        {
            answer++;
        }
    }
    
    return answer;
}

bool IsParenthesis(string& s, int index)
{
    stack<char> myStack;
    for(int i{index}; i<s.size(); i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            myStack.push(s[i]);
        }else
        {
            if(myStack.empty())
            {
                return false;
            }else
            {
                if(myStack.top() == '(' && s[i] == ')')
                {
                    myStack.pop();
                }else if(myStack.top() == '{' && s[i] == '}')
                {
                    myStack.pop();
                }else if(myStack.top() == '[' && s[i] == ']')
                {
                    myStack.pop();
                }
            }
        }
    }
    
    for(int i{}; i<index; i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            myStack.push(s[i]);
        }else
        {
            if(myStack.empty())
            {
                return false;
            }else
            {
                if(myStack.top() == '(' && s[i] == ')')
                {
                    myStack.pop();
                }else if(myStack.top() == '{' && s[i] == '}')
                {
                    myStack.pop();
                }else if(myStack.top() == '[' && s[i] == ']')
                {
                    myStack.pop();
                }
            }
        }
    }
    
    return myStack.empty();
}