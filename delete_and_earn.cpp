#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution
{

public:
    int deleteAndEarn(vector<int> &nums)
    {
        int n = *max_element(nums.begin(), nums.end());
        vector<int> freq(n + 1,0);
        for (int x : nums)
            freq[x] += x;

        vector<int> dp(n + 1);
        dp[0] = freq[0];
        dp[1] = max(freq[0], freq[1]);
        for (int i = 2; i <= n; i++)
        {
            dp[i] = max(freq[i] + dp[i - 2], dp[i - 1]);
        }

        return max(dp[n - 1], dp[n]);
    }
};

int main()
{

    return 0;
}