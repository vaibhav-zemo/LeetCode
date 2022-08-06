#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{

    void helper(vector<vector<int>> &grid, int i, int j, int &temp)
    {
        int n = grid.size(), m = grid[0].size();
        if (i < 0 || i > n - 1 || j < 0 || j > m - 1 || grid[i][j] == 0)
        {
            return;
        }

        grid[i][j] = 0;
        temp++;
        helper(grid, i, j + 1, temp);
        helper(grid, i, j - 1, temp);
        helper(grid, i + 1, j, temp);
        helper(grid, i - 1, j, temp);
        return;
    }

public:
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size();
        int ans = 0;
        for (int i = 0; i <= n - 1; i++)
        {
            for (int j = 0; j <= m - 1; j++)
            {
                int temp = 0;
                if (grid[i][j] == 1)
                {

                    helper(grid, i, j, temp);
                    ans = max(ans, temp);
                }
            }
        }
        return ans;
    }
};

int main()
{

    return 0;
}