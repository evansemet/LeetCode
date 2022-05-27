class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
        res, l, r = 0, 0, len(mat) - 1
        
        for row in mat:
            res, l, r = res + row[l] + row[r], l + 1, r - 1
        
        if len(mat) % 2 == 1:
            res -= mat[len(mat) // 2][len(mat) // 2]
            
        return res