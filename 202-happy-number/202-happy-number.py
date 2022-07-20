class Solution:
    def isHappy(self, n: int) -> bool:
        seen = []
        
        def next(n):
            x = sum(int(dig)**2 for dig in str(n))
            if x == 1:
                return True
            elif x in seen:
                return False
            else:
                seen.append(x)
                return next(x)
        
        return next(n)