#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

class MinStack
{
    stack<int> st;
    unordered_map<int, int> s;

public:
    MinStack()
    {
    }

    void push(int val)
    {
        st.push(val);
        s[val]++;
    }

    void pop()
    {
        int val = st.top();
        st.pop();

        int cnt = s[val];
        if (cnt == 1)
        {
            s.erase(val);
            return;
        }
        s[val]--;
    }

    int top()
    {
        return st.top();
    }

    int getMin()
    {
        return s.begin()->first;
    }
};

int main()
{

    return 0;
}