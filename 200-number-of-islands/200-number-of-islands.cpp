class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j] == '1') {
                    ++count;
                    explore(grid, i, j);
                }
            }
        }
        return count;
    }
    
    void explore(vector<vector<char>> &grid, int i, int j) {
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size()) {
            return;
        } else if (grid[i][j] == '0') {
            return;
        } else {
            grid[i][j] = '0';
            explore(grid, i - 1, j);
            explore(grid, i + 1, j);
            explore(grid, i, j - 1);
            explore(grid, i, j + 1);
        }
    }
};