class Solution:
    def countSubIslands(self, grid1: List[List[int]], grid2: List[List[int]]) -> int:
        ROWS, COLS = len(grid1), len(grid1[0])
        visited = set()
        
        def dfs(r, c):
            if (r < 0 or c < 0 or r == ROWS or c == COLS or 
                grid2[r][c] == 0 or (r, c) in visited):
                return True
            
            visited.add((r, c))
            result = True
            
            if grid1[r][c] == 0:
                result = False
                
            result = dfs(r + 1, c) and result
            result = dfs(r - 1, c) and result
            result = dfs(r, c + 1) and result
            result = dfs(r, c - 1) and result
            
            return result
        
        count = 0
        for r in range(ROWS):
            for c in range(COLS):
                if grid2[r][c] and (r, c) not in visited and dfs(r, c):
                    count += 1
                    
        return count