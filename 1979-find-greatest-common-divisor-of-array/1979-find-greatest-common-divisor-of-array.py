class Solution:
    def findGCD(self, nums: List[int]) -> int:
        sm, lg = float('inf'), float('-inf')
        for num in nums:
            sm = min(sm, num)
            lg = max(lg, num)
        
        def gcd(a, b):
            if a == 0: return b
            elif b == 0 or a == b: return a
            elif a > b: return gcd(a - b, b)
            else: return gcd(a, b - a)
            
        return gcd(sm, lg)