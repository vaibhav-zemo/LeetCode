#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int minprice = 10001, maxProfit = 0, l = prices.size(), m = 0, n = 0, p1 = 0;
    for (int i = 0; i < l; i++)
    {
        if (minprice > prices[i])
        {
            minprice = prices[i];
        }
        else
        {
            maxProfit = max(prices[i] - minprice, maxProfit);
        }
    }
    m = maxProfit;

    for (int i = 0; i < l - 1; i++)
    {
        if (prices[i + 1] > prices[i])
        {
            n = prices[i + 1] - prices[i];
            p1 = i;
            break;
        }
    }

    minprice = 10001, maxProfit = 0;
    for (int i = p1 + 2; i < l; i++)
    {
        if (minprice > prices[i])
        {
            minprice = prices[i];
        }
        else
        {
            maxProfit = max(prices[i] - minprice, maxProfit);
        }
    }

    n += maxProfit;

    return max(m, n);
}

int main()
{

    return 0;
}