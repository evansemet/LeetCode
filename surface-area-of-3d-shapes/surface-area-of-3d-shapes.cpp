class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int TB(0), WE(0), EW(0), NS(0), SN(0);
        for (size_t i(0); i < grid.size(); ++i) {
            for (size_t j(0); j < grid.size(); ++j) {
                if (grid[i][j] != 0) {
                    TB += 2;
                }
                if (j == 0) {
                    WE += grid[i][j];
                } else {
                    WE += grid[i][j] > grid[i][j - 1] ? grid[i][j] - grid[i][j - 1]: 0;
                }
                if (i == 0) {
                    NS += grid[i][j];
                } else {
                    NS += grid[i][j] > grid[i - 1][j] ? grid[i][j] - grid[i - 1][j]: 0;
                }
                if (i != grid.size() - 1) {
                    EW += grid[i][j] > grid[i + 1][j] ? grid[i][j] - grid[i + 1][j] : 0;
                } else {
                    EW += grid[i][j];
                }
                if (j != grid.size() - 1) {
                    SN += grid[i][j] > grid[i][j + 1] ? grid[i][j] - grid[i][j + 1]: 0;
                } else {
                    SN += grid[i][j];
                }
            }
        }
        return TB + WE + EW + NS + SN;
    }
};