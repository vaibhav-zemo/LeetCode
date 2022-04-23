#include <iostream>
#include <stack>
using namespace std;

class MyQueue
{
    stack<int> s1, s2;

public:
    MyQueue()
    {
    }

    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        if (s2.empty())
        {
            while (s1.size() > 1)
            {
                int top = s1.top();
                s2.push(top);
                s1.pop();
            }
            int ans = s1.top();
            s1.pop();
            return ans;
        }

        s2.pop();
    }

    int peek()
    {
        if (s2.empty())
        {
            while (s1.size() > 1)
            {
                int top = s1.top();
                s2.push(top);
                s1.pop();
            }
            int ans = s1.top();
            s2.push(ans);
            s1.pop();
            return ans;
        }
        return s2.top();
    }

    bool empty()
    {
        return (s1.empty() && s2.empty());
    }
};

int main()
{

    return 0;
}