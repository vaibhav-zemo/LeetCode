#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> maxSlidingWindow(vector<int> &nums, int k)
{
    deque<int> q;
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        if (!q.empty() && q.front() == i - k)
        {
            q.pop_front();
        }

        while (!q.empty() && nums[i] > nums[q.back()])
        {
            q.pop_back();
        }

        q.push_back(i);
        if (i >= k - 1)
        {
            ans.push_back(nums[q.front()]);
        }
    }
    return ans;
}

int main()
{

    return 0;
}