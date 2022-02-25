class Solution:
    def solveSudoku(self, board: List[List[str]]) -> None:
        n = len(board)
        
        def find():
            for i in range(n):
                for j in range(n):
                    if board[i][j] == '.': 
                        return i, j
            return -1
        
        def place(row, col, num):
            for i in range(n):
                if board[i][col] == num: 
                    return False
                
            for j in range(n):
                if board[row][j] == num: 
                    return False
            
            x, y = row // 3 * 3, col // 3 * 3
            for i in range(x, x + 3):
                for j in range(y, y + 3):
                    if board[i][j] == num: 
                        return False
            return True
        
        
        def solve():
            if find() == -1: return True
            x, y = find()
            
            nums = ["1", "2", "3", "4", "5", "6", "7", "8", "9"]
            for num in nums:
                if place(x, y, num): 
                    board[x][y] = num
                    if solve(): 
                        return True
                    board[x][y] = '.'
                
            return False
        
        solve()