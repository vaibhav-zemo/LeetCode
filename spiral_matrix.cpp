#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int col = matrix[0].size();
    int row = matrix.size();
    vector<int> ans(row*col);
    int str_row = 0, str_col = 0, end_row = row - 1, end_col = col - 1;
    while (str_row <= end_row && str_col <= end_col )
    {
        for (int i = str_col; i <= end_col && ans.size()<=row*col; i++)
        {
            ans.push_back(matrix[str_row][i]);
        }

        str_row++;
        for (int i = str_row; i <= end_row && ans.size()<=row*col; i++)
        {
            ans.push_back(matrix[i][end_col]);
        }

        end_col--;
        for (int i = end_col; i >= str_col && ans.size()<=row*col; i--)
        {
            ans.push_back(matrix[end_row][i]);
        }

        end_row--;
        for (int i = end_row; i >= str_row && ans.size()<=row*col; i--)
        {
            ans.push_back(matrix[i][str_col]);
        }

        str_col++;
    }

    return ans;
}

int main()
{

    return 0;
}