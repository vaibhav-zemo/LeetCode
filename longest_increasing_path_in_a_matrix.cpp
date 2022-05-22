#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
    bool isvalid(int m, int n, int size1, int size2)
    {
        if (m < 0 || m >= size1 || n < 0 || n >= size2)
        {
            return false;
        }
        return true;
    }

    int helper(vector<vector<int>> &matrix, int m, int n, vector<vector<int>> &dp)
    {
        if (dp[m][n] > 0)
        {
            return dp[m][n];
        }
        int ans = 0;
        int size1 = matrix.size();
        int size2 = matrix[0].size();

        int x[] = {1, -1, 0, 0};
        int y[] = {0, 0, 1, -1};

        for (int i = 0; i < 4; i++)
        {
            if (isvalid(m + x[i], n + y[i], size1, size2))
            {
                if (matrix[m][n] < matrix[m + x[i]][n + y[i]])
                {
                    ans = max(ans, helper(matrix, m + x[i], n + y[i], dp));
                }
            }
        }

        dp[m][n] = ans + 1;
        return ans + 1;
    }

public:
    int longestIncreasingPath(vector<vector<int>> &matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();

        int ans = 0;
        vector<vector<int>> dp(m, vector<int>(n));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int a = helper(matrix, i, j, dp);
                ans = max(a, ans);
            }
        }

        return ans;
    }
};

int main()
{

    return 0;
}