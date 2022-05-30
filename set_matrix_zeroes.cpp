#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    void helper(vector<vector<int>> &mxt, int m, int n, int x, int y)
    {
        for (int i = 0; i < m; i++)
        {
            mxt[i][y] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            mxt[x][i] = 0;
        }
    }

public:
    void setZeroes(vector<vector<int>> &matrix)
    {

        int m = matrix.size();
        int n = matrix[0].size();
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; i++)
            {
                if (matrix[i][j] == 0)
                {
                    helper(matrix, m, n, i, j);
                }
            }
        }
    }
};

int main()
{

    return 0;
}