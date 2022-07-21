class Solution:
    def myPow(self, x: float, n: int) -> float:
        if n < 0:
            x = 1/x; n *= -1
        res = 1
        curr = x
        i = n
        while i > 0:
            if i % 2 == 1:
                res *= curr
            curr *= curr
            i //= 2
        return res