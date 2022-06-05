#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    vector<vector<string>> ans;
    bool isValid(int i, int j, vector<vector<int>> &vis)
    {
        int n = vis.size();
        if (i < 0 || j < 0 || i >= n || j >= n)
        {
            return false;
        }

        for (int k = 0; k < n; k++)
        {
            if (vis[i][k] == 1 || vis[k][j] == 1)
            {
                return false;
            }
        }

        int cnt = 0;
        while (i + cnt < n && j + cnt < n)
        {
            if (vis[i + cnt][j + cnt] == 1)
            {
                return false;
            }
            cnt++;
        }

        cnt = 0;
        while (i - cnt >= 0 && j - cnt >= 0)
        {
            if (vis[i - cnt][j - cnt] == 1)
            {
                return false;
            }
            cnt++;
        }

        cnt = 0;
        while (i - cnt >= 0 && j + cnt < n)
        {
            if (vis[i - cnt][j + cnt] == 1)
            {
                return false;
            }
            cnt++;
        }

        cnt = 0;
        while (i + cnt < n && j - cnt >= 0)
        {
            if (vis[i + cnt][j - cnt] == 1)
            {
                return false;
            }
            cnt++;
        }

        return true;
    }

    void helper(int j, vector<vector<int>> &vis, vector<string> &vec)
    {
        int n = vis.size();
        if (j >= n)
        {
            ans.push_back(vec);
            return;
        }

        for (int k = 0; k < n; k++)
        {
            if (isValid(k, j, vis))
            {
                vis[k][j]++;
                vec[j][k] = 'Q';
                helper(j + 1, vis, vec);
                vis[k][j]--;
                vec[j][k] = '.';
            }
        }

        return;
    }

public:
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<int>> vis(n, vector<int>(n, 0));
        vector<string> vec;
        string st = "";
        for (int i = 0; i < n; i++)
        {
            st += '.';
        }

        for (int i = 0; i < n; i++)
        {
            vec.push_back(st);
        }

        helper(0, vis, vec);
        return ans;
    }
};

int main()
{

    return 0;
}