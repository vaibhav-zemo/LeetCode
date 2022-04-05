#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int fuc(vector<int> &nums, int k)
{
    map<int, int> map;
    int diff = 0, ans = 0;
    int j = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (map[nums[i]] == 0)
        {
            diff++;
        }
        map[nums[i]]++;

        if (diff <= k)
        {
            ans += (i - j + 1);
        }
        else
        {
            while (j < nums.size() && j <= i && diff > k)
            {
                map[nums[j]]--;
                if (map[nums[j]] == 0)
                {
                    diff--;
                }
                j++;
            }
            ans += (i - j + 1);
        }
    }
    return ans;
}

int subarraysWithKDistinct(vector<int> &nums, int k)
{
    return fuc(nums,k)-fuc(nums,k-1);
}

int main()
{

    return 0;
}