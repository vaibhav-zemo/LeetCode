#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    int ans;
    bool isValid(int row, int col, vector<vector<int>> &vis)
    {
        int n = vis.size();
        for (int i = 0; i < n; i++)
        {
            if (vis[row][i] == 1)
            {
                return false;
            }
            if (row - i >= 0 && col - i >= 0 && vis[row - i][col - i] == 1)
            {
                return false;
            }
            if (row + i < n && col + i < n && vis[row + i][col + i] == 1)
            {
                return false;
            }
            if (row - i >= 0 && col + i < n && vis[row - i][col + i] == 1)
            {
                return false;
            }
            if (row + i < n && col - i >= 0 && vis[row + i][col - i] == 1)
            {
                return false;
            }
        }
        return true;
    }

    void helper(int col, vector<vector<int>> &vis)
    {
        int n = vis.size();
        if (col >= n)
        {
            ans++;
            return;
        }

        for (int i = 0; i < n; i++)
        {
            if (isValid(i, col, vis))
            {
                vis[i][col]++;
                helper(col + 1, vis);
                vis[i][col]--;
            }
        }

        return;
    }

public:
    int totalNQueens(int n)
    {
        ans = 0;
        vector<vector<int>> vis(n, vector<int>(n, 0));
        helper(0,vis);
        return ans;
    }
};

int main()
{

    return 0;
}