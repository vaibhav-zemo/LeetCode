#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class KthLargest
{
private:
    priority_queue<int, vector<int>, greater<int>> pq;
    int k;

public:
    KthLargest(int k, vector<int> &nums)
    {
        this->k = k;
        for (int x : nums)
        {
            pq.push(x);
            if (pq.size() > k)
            {
                pq.pop();
            }
        }
    }

    int add(int val)
    {
        pq.push(val);
        if (pq.size()>k)
        {
            pq.pop();
        }
        return pq.top();
    }
};

int main()
{

    return 0;
}