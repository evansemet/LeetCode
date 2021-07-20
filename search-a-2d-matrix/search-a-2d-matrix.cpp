class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.size() < 2) {
            for (int i(0); i < matrix[0].size(); ++i) {
                if (matrix[0][i] == target) {
                    return true;
                }
            }
            return false;
        } else {
            for (int j(1); j < matrix.size(); ++j) {
                if (matrix[j][0] > target) {
                    for (int k(0); k < matrix[j - 1].size(); ++k) {
                        if (matrix[j - 1][k] == target) {
                            return true;
                        }
                    }
                    return false;
                }
            }
            for (int last(0); last < matrix[matrix.size() - 1].size(); ++last) {
                if (matrix[matrix.size() - 1][last] == target) {
                    return true;
                }
            }
            return false;
        }
    }
};