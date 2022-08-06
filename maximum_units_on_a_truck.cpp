#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maximumUnits(vector<vector<int>> &boxTypes, int truckSize)
    {
        sort(boxTypes.begin(), boxTypes.end(), [](vector<int> a, vector<int> b)
             { return a[1] < b[1]; });

        int ans = 0;
        for (int i = boxTypes.size() - 1; i >= 0; i--)
        {
            if (boxTypes[i][0] <= truckSize)
            {
                ans += boxTypes[i][0] * boxTypes[i][1];
                truckSize -= boxTypes[i][0];
            }
            else
            {
                ans += (boxTypes[i][0] - truckSize) * boxTypes[i][1];
                return ans;
            }
        }
        return ans;
    }
};

// 2,5 4,7 3,9 5,10

int main()
{

    return 0;
}