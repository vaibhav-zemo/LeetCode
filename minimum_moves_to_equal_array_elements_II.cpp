#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int minMoves2(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        if (n & 1)
        {
            int ans = 0;
            for (int x : nums)
            {
                ans += abs(x - nums[n / 2]);
            }
            return ans;
        }
        else
        {
            int z = 0, y = 0;
            for (int x : nums)
            {
                z += abs(x - nums[n / 2]);
            }
            for (int x : nums)
            {
                y += abs(x - nums[n / 2 - 1]);
            }
            return min(z, y);
        }
    }
};

int main()
{

    return 0;
}