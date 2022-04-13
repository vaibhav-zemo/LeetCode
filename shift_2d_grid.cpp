#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> shiftGrid(vector<vector<int>> &grid, int k)
{
    int m = grid.size(), n = grid[0].size();
    vector<int> temp(m * n);
    int k = 0;
    for (vector<int> v : grid)
    {
        for (int x : v)
        {
            temp[k] = x;
            k++;
        }
    }

    vector<int> ans(m * n);
    for (int i = 0; i < m * n; i++)
    {
        ans[i] = (i - k + (m * n)) % (m * n);
    }

    k = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            grid[i][j] = ans[k];
            k++;
        }
    }

    return grid;
}

int main()
{

    return 0;
}