#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();

    for (int i = 0; i < row - 1; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col / 2; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][col - 1 - j];
            matrix[i][col - 1 - j] = temp;
        }
    }
}

int main()
{

    return 0;
}