class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if (!mat.size() || r * c != mat.size() * mat[0].size()) return mat;
        vector<vector<int>> res(r, vector<int>(c));
        int row = 0, col = 0;
        for (int i = 0; i < mat.size(); ++i) {
            for (int j = 0; j < mat[i].size(); ++j) {
                res[row][col++] = mat[i][j];
                if (col == c) {
                    ++row;
                    col = 0;
                }
            }
        }
        return res;
    }
};