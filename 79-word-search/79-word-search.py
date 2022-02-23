class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        m, n = len(board), len(board[0])
        seen = set()
        
        def dfs(r, c, idx):
            if r < 0 or c < 0 or r >= m or c >= n \
            or (r, c) in seen or board[r][c] != word[idx]:
                return False
            
            if idx == len(word) - 1:
                return True
            
            seen.add((r, c))
            for dr, dc in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
                if dfs(r + dr, c + dc, idx + 1):
                    return True
                
            seen.remove((r, c))
            return False
        
        for r in range(m):
            for c in range(n):
                if dfs(r, c, 0):
                    return True
        
        return False
    
    
    
    