#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
    int ans;
    void helper(vector<int> nums, int target)
    {
        if (target == 0)
        {
            ans++;
            return;
        }
        else if (target < 0)
        {
            return;
        }

        for (auto x : nums)
        {
            helper(nums, target - x);
        }
    }

public:
    int combinationSum4(vector<int> &nums, int target)
    {
        ans = 0;
        for (int x : nums)
        {
            helper(nums, x);
        }
        return ans;
    }
};

int main()
{

    return 0;
}