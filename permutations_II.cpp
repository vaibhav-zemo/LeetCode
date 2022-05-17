#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

class Solution
{
    vector<vector<int>> ans;
    set<vector<int>> st;

public:
    void helper(vector<int> &nums, int i)
    {
        if (i == nums.size())
        {
            st.insert(nums);
            return;
        }
        for (int j = i; j < nums.size(); j++)
        {
            swap(nums[i], nums[j]);
            helper(nums, i + 1);
            swap(nums[i], nums[j]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        helper(nums, 0);
        for (auto it : st)
        {
            ans.push_back(it);
        }
        return ans;
    }
};

int main()
{

    return 0;
}