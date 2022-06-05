#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        vector<vector<int>> ans;
        if (n < 4)
        {
            return ans;
        }

        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                int p = j + 1, q = n - 1;
                while (p < n && p < q)
                {
                    int x = nums[i] + nums[j] + nums[p] + nums[q];
                    if (x == target)
                    {
                        vector<int> temp = {nums[i], nums[j], nums[p], nums[q]};
                        ans.push_back(temp);
                        while (q > 0 && nums[q] == nums[q - 1])
                        {
                            q--;
                        }
                        while (p < n - 1 && nums[p] == nums[p + 1])
                        {
                            p++;
                        }
                        p++;
                        q--;
                    }
                    else if (x < target)
                    {
                        while (p < n - 1 && nums[p] == nums[p + 1])
                        {
                            p++;
                        }
                        p++;
                    }
                    else
                    {
                        while (q > 0 && nums[q] == nums[q - 1])
                        {
                            q--;
                        }
                        q--;
                    }
                }
                while (j < l - 1 && nums[j] == nums[j + 1])
                {
                    j++;
                }
            }
            while (i < l - 1 && nums[i] == nums[i + 1])
            {
                i++;
            }
        }

        return ans;
    }
};

int main()
{

    return 0;
}