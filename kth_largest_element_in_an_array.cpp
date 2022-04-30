#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        sort(nums.begin(),nums.end());
        priority_queue<int, vector<int>, greater<int>> pq;
        pq.push(nums[0]);
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > pq.top())
            {
                if (pq.size() == k)
                {
                    pq.pop();
                }
                pq.push(nums[i]);
            }
        }

        return pq.top();
    }
};

int main()
{

    return 0;
}