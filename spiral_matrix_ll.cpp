#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generateMatrix(int n)
{
    vector<vector<int>> matrix(n);
    for (int i = 0; i < n; i++)
    {
        matrix[i].resize(n);
    }

    int k = 1;
    int row_s = 0, row_e = n - 1, col_s = 0, col_e = n - 1;
    while (row_s <= row_e && col_s <= col_e)
    {

        for (int i = col_s; i <= col_e; i++)
        {
            matrix[row_s][i] = k;
            k++;
        }

        row_s++;

        for (int i = row_s; i <= row_e; i++)
        {
            matrix[i][col_e] = k;
            k++;
        }

        col_e--;

        for (int i = col_e; i >= col_s; i--)
        {
            matrix[row_e][i] = k;
            k++;
        }

        row_e--;

        for (int i = row_e; i >= row_s; i--)
        {
            matrix[i][col_s] = k;
            k++;
        }

        col_s++;
    }

    vector<vector<int>> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[i].resize(n);
        for (int j = 0; j < n; j++)
        {
            ans[i][j] = matrix[i][j];
        }
    }

    return ans;
}

int main()
{

    return 0;
}