
#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;
class Solution
{
public:
    int maximumScore(int a, int b, int c)
    {
        int count = 0;
        priority_queue<int> q;
        q.push(a);
        q.push(b);
        q.push(c);
        while (q.size() > 1)
        {
            int top1 = q.top();
            q.pop();
            int top2 = q.top();
            q.pop();
            count++;
            if (top1 - 1 > 0)
            {
                q.push(top1 - 1);
            }
            if (top2 - 1 > 0)
            {
                q.push(top2 - 1);
            }
        }
        return count;
    }
};