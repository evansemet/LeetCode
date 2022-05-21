class Solution:
    def knightProbability(self, n: int, k: int, r: int, c: int) -> float:
        dp = [[0] * n for _ in range(n)]
        dp[r][c] = 1
        
        for _ in range(k):
            dp2 = [[0] * n for _ in range(n)]
            for r, row in enumerate(dp):
                for c, val in enumerate(row):
                    for dr, dc in ((2,1),(2,-1),(-2,1),(-2,-1),\
                                  (1,2),(1,-2),(-1,2),(-1,-2)):
                        if 0 <= r + dr < n and 0 <= c + dc < n:
                            dp2[r + dr][c + dc] += val / 8
                            
            dp = dp2
            
        return sum(map(sum, dp))