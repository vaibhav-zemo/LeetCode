#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int lastStoneWeight(vector<int> &stones)
{
    if (stones.size()==1)
    {
        return stones[0];
    }
    
    priority_queue<int> pq;
    for (int x : stones)
    {
        pq.push(x);
    }

    while (pq.size() > 1)
    {
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();

        if (x != y)
        {
            pq.push(abs(x - y));
        }
    }

    if (pq.size()==1)
    {
        return pq.top();
    }
    return 0;
}

int main()
{
    
    return 0;
}