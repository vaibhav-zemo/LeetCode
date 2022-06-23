#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maximumUniqueSubarray(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (int x : nums)
        {
            mp[x]++;
        }

        int ans = nums[0], temp = nums[0];
        int i = 0, j = 1;
        while (i < j && j < nums.size())
        {
            while (mp.count(nums[j]) && mp[nums[j]] != 0)
            {
                temp -= nums[i];
                i--;
            }
            temp += nums[j];
            ans = max(ans, temp);
            j++;
        }

        cout << ans << endl;
    }
};

int main()
{

    return 0;
}