#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

bool isPossible(ll mid, vector<int> nums, int days)
{
    int total = 0;
    int cnt = 1;
    bool ans = true;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > mid)
        {
            ans = false;
            
        }
        if (total + nums[i] <= mid)
        {
            total += nums[i];
        }
        else
        {
            total = nums[i];
            cnt++;
        }
    }
    if (!ans)
    {
        return false;
    }
    return cnt <= days;
}

int shipWithinDays(vector<int> &weights, int days)
{
    ll l = 1, r = 500 * 5 * 10000;
    while (l < r)
    {
        ll mid = (r - l) / 2 + l;

        if (isPossible(mid, weights, days))
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    return (int)l;
}

int main()
{

    return 0;
}