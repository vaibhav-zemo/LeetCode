#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isRight(vector<vector<char>> board, int **check, char ch, int i, int j)
{
    int row = board.size();
    int col = board[0].size();
    if (i >= row || j >= col || i < 0 || j < 0 || check[i][j] || board[i][j] != ch)
    {
        return false;
    }
    return true;
}

bool isPresent(vector<vector<char>> board, int **check, string word, int i, int j)
{
    int row = board.size();
    int col = board[0].size();
    if (word.size() == 0)
    {
        return true;
    }
    
    if (isRight(board, check, word[0], i + 1, j))
    {
        check[i+1][j] = 1;
        if (isPresent(board, check, word.substr(1), i + 1, j))
        {
            return true;
        }
        check[i+1][j] = 0;
    }
    else if (isRight(board, check, word[0], i - 1, j))
    {
        check[i-1][j] = 1;
        if (isPresent(board, check, word.substr(1), i - 1, j))
        {
            return true;
        }
        check[i-1][j] = 0;
    }
    else if (isRight(board, check, word[0], i, j + 1))
    {
        check[i][j+1] = 1;
        if (isPresent(board, check, word.substr(1), i, j + 1))
        {
            return true;
        }
        check[i][j+1] = 0;
    }
    else if (isRight(board, check, word[0], i, j - 1))
    {

        check[i][j-1] = 1;
        if (isPresent(board, check, word.substr(1), i, j - 1))
        {
            return true;
        }
        check[i][j-1] = 0;
    }
    return false;
}

bool exist(vector<vector<char>> &board, string word)
{
    int row = board.size();
    int col = board[0].size();
    int ch = word[0];
    int m, n;

    int **check = new int *[row];
    for (int d = 0; d < row; d++)
    {
        check[d] = new int[col];
        for (int n = 0; n < col; n++)
        {
            check[d][n] = 0;
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (board[i][j] == ch)
            {
                check[i][j] = 1;
                if (isPresent(board, check, word.substr(1), i, j))
                {
                    return true;
                }
                check[i][j] = 0;
            }
        }
    }

    return false;
}

int main()
{

    return 0;
}