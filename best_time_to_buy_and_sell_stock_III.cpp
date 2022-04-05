#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    if (n == 0)
    {
        return 0;
    }

    vector<int> left(n), right(n);

    int leftMin = prices[0];
    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], prices[i] - leftMin);
        leftMin = min(leftMin, prices[i]);
    }

    int rightMax = prices[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = max(rightMax - prices[i], right[i + 1]);
        rightMax = max(rightMax, prices[i]);
    }

    int profit = right[0];
    for (int i = 1; i < n; i++)
    {
        profit = max(profit, right[i] + left[i - 1]);
    }

    return profit;
}

int main()
{

    return 0;
}