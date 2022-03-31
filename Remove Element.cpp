#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        vector<int> ans(nums);
        int k = 0, j = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                k++;
                ans[j] = nums[i];
                j++;
            }
        }
        nums = ans;
        return k;
    }
};

int main()
{
    Solution A;
    vector<int> v = {3, 2, 2, 3};
    int ans = A.removeElement(v, 3);
    return 0;
}