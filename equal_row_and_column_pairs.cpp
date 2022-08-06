#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution
{
    bool check(int i, int j, int s, vector<vector<int>> &grid)
    {
        for (int k = 0; i < s; i++)
        {
            if (grid[i][k] != grid[k][j])
            {
                return false;
            }
        }
        return true;
    }

public:
    int equalPairs(vector<vector<int>> &grid)
    {
        int m = grid.size();
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (check(i, j, m, grid))
                {
                    ans++;
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