#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class MyStack
{
private:
    queue<int> q1, q2;

public:
    MyStack()
    {
    }

    void push(int x)
    {
        if (q1.empty() && q2.empty())
        {
            q1.push(x);
        }
        else if (q1.empty())
        {
            q2.push(x);
        }
        else
        {
            q1.push(x);
        }
    }

    int pop()
    {
        if (q1.empty())
        {
            queue<int> temp = q1;
            q1 = q2;
            q2 = temp;
        }

        while (q1.size() > 1)
        {
            int front = q1.front();
            q2.push(front);
            q1.pop();
        }

        int ans = q1.front();
        q1.pop();
        return ans;
    }

    int top()
    {
        if (q1.empty())
        {
            queue<int> temp = q1;
            q1 = q2;
            q2 = temp;
        }

        while (q1.size() > 1)
        {
            int front = q1.front();
            q2.push(front);
            q1.pop();
        }

        int ans = q1.front();
        q2.push(ans);
        q1.pop();
        return ans;
    }

    bool empty()
    {
        return (q1.empty() && q2.empty());
    }
};

int main()
{

    return 0;
}