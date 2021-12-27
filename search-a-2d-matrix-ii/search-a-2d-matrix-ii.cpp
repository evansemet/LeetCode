class Solution {
public:
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m(matrix.size()), n(matrix[0].size()), i(0), j(n - 1);
        while (i < m && j >= 0) {
            if (target < matrix[i][j]) --j;
            else if (target > matrix[i][j]) ++i;
            else return true;
        }
        return false;
    }
};