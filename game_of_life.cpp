#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSafe(int row, int col, int i, int j)
{
    if (i < 0 || i >= row || j < 0 || j >= col)
    {
        return false;
    }
    return true;
}

void gameOfLife(vector<vector<int>> &board)
{

    int row = board.size();
    int col = board[0].size();
    int **cpy = new int *[row];
    for (int i = 0; i < row; i++)
    {
        cpy[i] = new int[col];
        for (int j = 0; j < col; j++)
        {
            cpy[i][j] = board[i][j];
        }
    }

    int dx[] = {1, -1, 0, 0, 1, -1, 1, -1};
    int dy[] = {0, 0, 1, -1, 1, -1, -1, 1};
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int liveCount = 0;
            for (int k = 0; k < 8; k++)
            {
                if (isSafe(row, col, dx[k] + i, dy[k] + j) && cpy[i + dx[k]][j + dy[k]] == 1)
                {
                    liveCount++;
                }
            }

            if (cpy[i][j] == 0 && liveCount == 3)
            {
                board[i][j] = 1;
            }
            else if (cpy[i][j] == 1 && (liveCount < 2 && liveCount > 3))
            {
                board[i][j] = 0;
            }
        }
    }
}

int main()
{

    return 0;
}