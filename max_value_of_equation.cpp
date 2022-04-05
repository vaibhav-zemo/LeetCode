#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMaxValueOfEquation(vector<vector<int>> &points, int k)
{
    int ans = INT_MIN;
    int i = 0, j = 1;
    while (j < points.size())
    {
        if (i == j)
        {
            j = i + 1;
        }
        if ((points[j][0] - points[i][0]) <= k)
        {
            int tmp = points[i][1] + points[j][1] + (points[j][0] - points[i][0]);
            ans = max(ans, tmp);
            j++;
        }
        else
        {
            i++;
        }
    }

    return ans;
}

int main()
{

    return 0;
}