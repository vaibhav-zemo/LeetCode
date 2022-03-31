#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')' && !st.empty()   && st.top() == '(')
        {
            st.pop();
        }
        else if (s[i] == '}' && !st.empty()  && st.top() == '{')
        {
            st.pop();
        }
        else if (s[i] == ']' && !st.empty()  && st.top() == '[')
        {
            st.pop();
        }
        else
        {
            return false;
        } 
    }
    if (st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    return 0;
}