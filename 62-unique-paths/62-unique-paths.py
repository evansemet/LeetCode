class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        def fact(num: int) -> int:
            result = 1
            for i in range(2, num + 1):
                result *= i
            return result
        return int(fact(m + n - 2) / (fact(m - 1) * fact(n - 1)))
        
        
    
        
        
        