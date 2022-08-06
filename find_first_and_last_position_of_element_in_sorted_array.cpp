#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int n = nums.size();
        int it = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        if (it >= n || (it < n && nums[it] != target))
        {
            return {-1, -1};
        }
        int ll = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        return {it, ll - 1};
    }
};

int main()
{

    return 0;
}