#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxSubarraySumCircular(vector<int> &nums)
    {
        int mx = INT_MIN, cur = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            cur += nums[i];
            if (cur > mx)
            {
                mx = cur;
            }

            if (cur < 0)
            {
                cur = 0;
            }
        }

        int mn = INT_MAX;
        cur = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            cur += nums[i];
            if (mn > cur)
            {
                mn = cur;
            }

            if (cur > 0)
            {
                cur = 0;
            }
        }

        int sum = 0;
        for (int x : nums)
        {
            sum += x;
        }

        int ans = sum - mn;
        if (ans == 0)
        {
            return mx;
        }
        else
        {
            return max(ans, mx);
        }
    }
};

int main()
{

    return 0;
}