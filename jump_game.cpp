#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canJump(vector<int> &nums)
{
    int currReach = 0, maxReach = -1;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (maxReach < nums[i] + i)
        {
            maxReach = nums[i] + i;
        }

        if (i == currReach)
        {
            if (currReach == maxReach)
            {
                return false;
            }
            currReach = maxReach;
        }
    }
    return true;
}

int main()
{

    return 0;
}