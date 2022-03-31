#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int minprice = 10001;
    int maxprofit = -1;
    for (int i = 0; i < prices.size(); i++)
    {
        if (minprice < prices[i])
        {
            minprice = prices[i];
        }
        else
        {
            maxprofit = max(prices[i] - minprice, maxprofit);
        }
    }

    return maxprofit;
}

int main()
{

    return 0;
}