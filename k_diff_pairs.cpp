#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findPairs(vector<int> &nums, int k)
{
    int i = 0, j = i + 1, ans = 0;
    sort(nums.begin(), nums.end());
    while (j < nums.size() && i < j)
    {
        if (nums[j] - nums[i] == k)
        {
            ans++;
            while (i != nums.size() - 1 && nums[i] == nums[i + 1])
                i++;
            while (j != nums.size() - 1 && nums[j] == nums[j + 1])
                j++;
            i++, j++;
        }
        else if (nums[j] - nums[i] < k)
        {
            j++;
        }
        else
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