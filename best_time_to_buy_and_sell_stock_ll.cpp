#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int sum = 0;
    for (int i = 0; i < prices.size() - 2; i++)
    {
        if (prices[i] > prices[i + 1])
        {
            sum += prices[i + 1] - prices[i];
        }
    }
    return sum;
}

int main()
{

    return 0;
}