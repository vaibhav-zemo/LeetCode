#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    int l = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < l - 2; i++)
    {
        for (int j = i + 1; j < l - 1; j++)
        {
            int left = target - nums[i] - nums[j];

            int m = j + 1, n = l - 1;
            while (m < n && n >= 0)
            {
                if (left == nums[m] + nums[n])
                {
                    ans.push_back({nums[i], nums[j], nums[m], nums[n]});
                    while (n != 0 && nums[n] == nums[n - 1])
                    {
                        n--;
                    }
                    n--;
                    while (m != l - 1 && nums[m] == nums[m + 1])
                    {
                        m++;
                    }
                    m++;
                }
                else if (left < nums[m] + nums[n])
                {
                    while (n != 0 && nums[n] == nums[n - 1])
                    {
                        n--;
                    }
                    n--;
                }
                else if (left > nums[m] + nums[n])
                {
                    while (m != l - 1 && nums[m] == nums[m + 1])
                    {
                        m++;
                    }
                    m++;
                }
            }
            while (j != l - 1 && nums[j] == nums[j + 1])
            {
                j++;
            }
        }
        while (i != l - 1 && nums[i] == nums[i + 1])
        {
            i++;
        }
    }
    return ans;
}

int main()
{

    return 0;
}