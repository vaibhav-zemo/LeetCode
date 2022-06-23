#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
    int helper(vector<int> &heights, int i, int b, int l)
    {
        if (i == heights.size() || (b == 0 && l == 0))
        {
            return 0;
        }

        int ans = 0, x = 0, y = 0;
        if (i + 1 < heights.size() && heights[i + 1] <= heights[i])
        {
            ans = helper(heights, i + 1, b, l) + 1;

            return ans;
        }
        else
        {
            x = helper(heights, i + 1, b, l - 1) + 1;
            if (i + 1 < heights.size())
            {
                y = helper(heights, i + 1, b - (heights[i + 1] - heights[i]), l) + 1;
            }
        }

        return max(ans, x, y);
    }

public:
    int furthestBuilding(vector<int> &heights, int bricks, int ladders)
    {
        return helper(heights,0,bricks,ladders);
    }
};

int main()
{

    return 0;
}