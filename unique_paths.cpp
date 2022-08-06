#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        vector<vector<int>> mp(m, vector<int>(n));
        for (int i = 0; i < n - 1; i++)
        {
            mp[m - 1][i] = 1;
        }

        for (int i = 0; i < m - 1; i++)
        {
            mp[i][n - 1] = 1;
        }

        for (int i = m - 2; i >= 0; i--)
        {
            for (int j = n - 2; j >= 0; i--)
            {
                mp[i][j] = mp[i + 1][j] + mp[i][j + 1];
            }
        }

        return mp[0][0];
    }
};

int main()
{

    return 0;
}