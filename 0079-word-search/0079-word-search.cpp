class Solution {
public:
    bool isValid(int i, int j, vector<vector<char>> &board)
{
    if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size())
        return false;
    return true;
}

bool solve(int i, int j, int length, vector<vector<char>> &board, string &word)
{
    if (length == word.size())
        return true;
    if (!isValid(i, j, board) || board[i][j] == '$' || board[i][j] != word[length])
        return false;

    char ch = board[i][j];
    board[i][j] = '$';

    bool res = false;
    if (!res)
        res = solve(i + 1, j, length + 1, board, word);
    if (!res)
        res = solve(i - 1, j, length + 1, board, word);
    if (!res)
        res = solve(i, j + 1, length + 1, board, word);
    if (!res)
        res = solve(i, j - 1, length + 1, board, word);

    board[i][j] = ch;

    return res;
}

bool exist(vector<vector<char>> &board, string word)
{
    int m = board.size(), n = board[0].size();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] != word[0])
                continue;
            if (solve(i, j, 0, board, word))
                return true;
        }
    }
    return false;
}
};