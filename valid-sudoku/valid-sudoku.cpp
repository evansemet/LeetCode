class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool x(true);
        for (int i(0); i < board.size(); ++i) {
            for (int j(0); j < board[i].size(); ++j) {
                if (board[i][j] != '.') {
                    x = help(board, i, j);
                }
                if (!x) {
                    return false;
                }
            }
        }
        return true;
    }
    
    
    bool help(vector<vector<char>>& board, int a, int b) {
        int rowSect(a / 3 * 3), colSect(b / 3 * 3) , count(0);
        char num(board[a][b]);
        for (int i(rowSect); i < rowSect + 3; ++i) {
            for (int j(colSect); j < colSect + 3; ++j) {
                if (board[i][j] == num) {
                    ++count;
                }
                if (count > 1) {
                    return false;
                }
            }
        }
        for (int k(0); k < board.size(); ++k) {
            if (board[a][k] == num) {
                ++count;
            }
            if (board[k][b] == num) {
                ++count;
            }
            if (count > 3) {
                return false;
            }
        }
        return true;
    }
};