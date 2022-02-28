class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        //check rows
        for (int i = 0; i < board.size(); ++i) {
            unordered_map<int, int> row;
            for (int j = 0; j < board[i].size(); ++j) {
                if (board[i][j] != '.') {
                    ++row[board[i][j]];
                    if (row[board[i][j]] > 1) return false;
                }
            }
        }
        
        //check cols
        for (int j = 0; j < board[0].size(); ++j) {
            unordered_map<int, int> col;
            for (int i = 0; i < board.size(); ++i) {
                if (board[i][j] != '.') {
                    ++col[board[i][j]];
                    if (col[board[i][j]] > 1) return false;
                }
            }
        }
        
        for (int row = 0; row < 9; row += 3) {
            for (int col = 0; col < 9; col += 3) {
                unordered_map<int, int> section;
                for (int i = row; i < row + 3; ++i) {
                    for (int j = col; j < col + 3; ++j) {
                        if (board[i][j] != '.') {
                            ++section[board[i][j]];
                            if (section[board[i][j]] > 1) return false;
                        }
                    }
                }
            }
        }
    
        return true;
    }
};