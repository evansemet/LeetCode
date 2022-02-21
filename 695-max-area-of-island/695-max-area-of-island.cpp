class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int largest = 0;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j] == 1) {
                    largest = max(largest, search(grid, i , j));
                }
            }
        }
        return largest;
    }
    
    
    int search(vector<vector<int>>& grid, int i , int j) {
        if (i >= 0 && j >= 0 && i < grid.size() && j < grid[0].size()) {
            if (grid[i][j] == 1) {
                grid[i][j] = 0;
                return 1 + search(grid, i + 1, j) + search(grid, i - 1, j) +
                    search(grid, i, j + 1) + search(grid, i, j - 1);
            }
        }
        return 0;
    }
};