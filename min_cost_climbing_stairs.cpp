#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{

public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        int n = cost.size();
        vector<int> vec(n + 2);
        vec[n + 1] = 0, vec[n] = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            vec[i] = cost[i] + min(vec[i + 1], vec[i + 2]);
        }

        return min(vec[0],vec[1]);
    }
};

int main()
{

    return 0;
}