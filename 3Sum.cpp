#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    int l = nums.size();
    for (int i = 0; i < l; i++)
    {
        int j = i + 1, k = l - 1;
        while (j < l && j < k)
        {
            if (nums[j] + nums[k] == -nums[i])
            {
                ans.push_back({nums[i], nums[j], nums[k]});
                while (k != 0 && nums[k] == nums[k - 1])
                {
                    k--;
                }
                while (j != l-1 && nums[j] == nums[j + 1])
                {
                    j++;
                }
                j++, k--;
            }
            else if (nums[j] + nums[k] > -nums[i])
            {
                while (k != 0 && nums[k] == nums[k - 1])
                {
                    k--;
                }
                k--;
            }
            else
            {
                while (j != l-1 && nums[j] == nums[j + 1])
                {
                    j++;
                }
                j++;
            }
        }
        while (i!=l-1 && nums[i]==nums[i+1])
        {
            i++;
        }
        
    }
    for(auto v:ans){
        sort(v.begin(),v.end());
    }
    return ans;
}

int main()
{
    vector<int> v = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = threeSum(v);
    return 0;
}