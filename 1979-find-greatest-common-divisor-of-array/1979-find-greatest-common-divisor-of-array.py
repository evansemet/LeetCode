class Solution:
    def findGCD(self, nums: List[int]) -> int:
        sm, lg = float('inf'), float('-inf')
        for num in nums:
            sm = min(sm, num)
            lg = max(lg, num)
        
        def gcd(a, b):
            if b == 0: return a
            else: return gcd(b, a % b)
            
        return gcd(sm, lg)