#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int ans = 0, prev = prices[0];
    for (int i = 0; i < prices.size() - 1; i++)
    {
        prev = min(prev, prices[i]);
        if (prev < prices[i])
        {
            ans = max(prices[i] - prev, ans);
        }
    }
    return ans;
}

int main()
{

    return 0;
}