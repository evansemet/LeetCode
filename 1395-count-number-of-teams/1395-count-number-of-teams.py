class Solution:
    def numTeams(self, rating: List[int]) -> int:
        res = 0
        
        for j in range(1, len(rating) - 1):
            sl, bl, sr, br = 0, 0, 0, 0
            
            for i in range(j):
                if rating[i] < rating[j]:
                    sl += 1
                elif rating[i] > rating[j]:
                    bl += 1
                    
            for k in range(j + 1, len(rating)):
                if rating[k] < rating[j]:
                    sr += 1
                elif rating[k] > rating[j]:
                    br += 1
                    
            res += sl * br + bl * sr
            
        return res
                