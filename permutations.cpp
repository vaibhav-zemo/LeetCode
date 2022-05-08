#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
    vector<vector<int>> ans;

public:
    void helper(vector<int> &nums, int i)
    {
        if (i == nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for (int j = i; j < nums.size(); j++)
        {
            swap(nums[i], nums[j]);
            helper(nums, i + 1);
            swap(nums[i], nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        helper(nums,0);
        return ans;
    }
};

int main()
{

    return 0;
}