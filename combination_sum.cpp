#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void helper(vector<int> nums, int i, int target, vector<vector<int>> &ans, vector<int> &temp)
{
    if (i == nums.size())
    {
        if (target == 0)
        {
            ans.push_back(temp);
        }
        return;
    }

    if (nums[i] <= target)
    {
        temp.push_back(nums[i]);
        helper(nums, i, target - nums[i], ans, temp);
        temp.pop_back();
    }
    helper(nums, i + 1, target, ans, temp);
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> temp;
    helper(candidates, 0, target, ans,temp);
    return ans;
}

int main()
{

    return 0;
}