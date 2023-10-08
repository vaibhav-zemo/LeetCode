class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>> rows(9), cols(9), blocks(9);
        
        for (int io = 0; io < 9; io++) {
            for (int j = 0; j < 9; j++) {
                
                if (board[io][j] == '.') continue;
                
                int curr = board[io][j] - '0';
                if (rows[io].count(curr) || cols[j].count(curr) || blocks[(io/3)*3+j/3].count(curr)) 
                    return false;
                
                rows[io].insert(curr);
                cols[j].insert(curr);
                blocks[(io/3)*3+j/3].insert(curr);
            }
        }
        
        return true;
    }
};
