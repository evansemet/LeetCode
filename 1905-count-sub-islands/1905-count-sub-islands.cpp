class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int ROWS = grid1.size(), COLS = grid1[0].size(), count = 0;
        vector<vector<int>> visited(ROWS, vector<int>(COLS, 0));
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) {
                if (grid2[i][j] && !visited[i][j] && dfs(grid1, grid2, i, j, visited)) {
                    ++count;
                }
            }
        }
        return count;
    }
    
    bool dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int i, int j, vector<vector<int>>& visited) {
        int ROWS = grid1.size(), COLS = grid1[0].size();
        if (i < 0 || j < 0 || i == ROWS || j == COLS || !grid2[i][j] || visited[i][j]) {
            return true;
        }
        visited[i][j] = 1;
        bool result = grid1[i][j];
        result *= dfs(grid1, grid2, i + 1, j, visited);
        result *= dfs(grid1, grid2, i - 1, j, visited);
        result *= dfs(grid1, grid2, i, j + 1, visited);
        result *= dfs(grid1, grid2, i, j - 1, visited);
        return result;
    }
};