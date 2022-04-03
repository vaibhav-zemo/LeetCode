#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int subarraysDivByK(vector<int> &nums, int k)
{
    int currSum = 0, rem = 0;
    int ans = 0;
    unordered_map<int, int> map;

    for (int i = 0; i < nums.size(); i++)
    {
        currSum += nums[i];
        rem = currSum % k;
        if (rem < 0)
        {
            rem += k;
        }
        if (map.count(rem))
        {
            ans += map[rem];
        }

        map[rem]++;
    }
    return ans;
}

int main()
{

    return 0;
}