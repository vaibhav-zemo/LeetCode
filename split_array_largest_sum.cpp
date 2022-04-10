#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int isPossible(vector<int> nums, int mid)
{
    int total = 0;
    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (total + nums[i] <= mid)
        {
            total += nums[i];
        }
        else
        {
            count++;
            total = nums[i];
        }
    }
    count++;

    return count;
}

int splitArray(vector<int> &nums, int m)
{
    int maxi = -1, sum = 0;
    for (int x : nums)
    {
        maxi = max(maxi, x);
        sum += x;
    }

    int l = maxi, r = sum;
    int ans;
    while (l <= r)
    {
        int mid = (r - l) / 2 + l;

        int count = isPossible(nums, mid);
        if (count <= m)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
}

int main()
{

    return 0;
}