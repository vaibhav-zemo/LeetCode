#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxScore(vector<int> &cardPoints, int k)
{
    int sum = 0;
    for (int x : cardPoints)
    {
        sum += x;
    }

    int ans = 0, window = 0;
    int n = cardPoints.size();

    if (n == k)
    {
        return sum;
    }

    for (int i = 0; i < n - k - 1; i++)
    {
        window += cardPoints[i];
    }

    for (int i = n - k - 1; i < n; i++)
    {
        window += cardPoints[i];
        ans = max(ans, sum-window);
        window -= cardPoints[i - (n - k - 1)];
    }

    return ans;
}

int main()
{

    return 0;
}