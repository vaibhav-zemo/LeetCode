#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int threeSumClosest(vector<int> &nums, int target)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int closesum = nums[0] + nums[1] + nums[nums.size() - 1];
    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1, k = n - 1;
        while (j < n && j < k)
        {
            int total = nums[i] + nums[j] + nums[k];
            if (total > target)
            {
                k--;
            }
            else if (total < target)
            {
                j++;
            }
            else
            {
                return target;
            }

            if ((abs(total - target)) < (abs(closesum - target)))
            {
                closesum = total;
            }
        }
    }
    return closesum;
}

int main()
{
    vector<int> v = {0, 0, 0};
    cout << threeSumClosest(v, 1);

    return 0;
}