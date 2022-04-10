#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countNegatives(vector<vector<int>> &grid)
{
    int ans = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        if(grid[i][0]<0){
            ans += grid[i].size();
            break;
        }
        for (int j = grid[i].size() - 1; j >= 0; j--)
        {
            if (grid[i][j] > 0)
            {
                break;
            }
            ans++;
        }
    }
    return ans;
}

int main()
{

    return 0;
}