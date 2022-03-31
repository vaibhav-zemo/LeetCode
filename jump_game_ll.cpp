#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int jump(vector<int> &nums)
{
    int ans = 0, currReach = 0, maxReach = -1;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (i + nums[i] > maxReach)
        {
            maxReach = i + nums[i];
        }

        if (i == currReach)
        {
            ans++;
            currReach = maxReach;
        }
    }

    return ans;
}

int main()
{

    return 0;
}