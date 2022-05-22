#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
    vector<int> dp;
    int helper(vector<int> &coins, int amount)
    {
        int ans = 10001;
        if (amount == 0)
        {
            return 0;
        }
        if (dp[amount] != -1)
        {
            return dp[amount];
        }

        for (int i = 0; i < coins.size(); i++)
        {
            if (amount - coins[i] >= 0)
            {
                ans = min(ans, helper(coins, amount - coins[i]) + 1);
            }
        }

        dp[amount] = ans;
        return ans;
    }

public:
    int coinChange(vector<int> &coins, int amount)
    {
        vector<int> dp(amount + 1);
        for (int i = 0; i < coins.size(); i++)
        {
            dp[coins[i]]++;
        }

        int temp = coins[0];
        while (temp < amount)
        {
            for (int j = 0; j < coins.size(); j++)
            {
                if (temp + coins[j] <= amount)
                {
                    dp[coins[j]]++;
                }
            }
        }

        return dp[amount];
    }
};

int main()
{

    return 0;
}