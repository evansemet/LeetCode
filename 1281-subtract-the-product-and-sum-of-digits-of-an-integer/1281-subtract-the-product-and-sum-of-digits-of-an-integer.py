class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        prod, add, = 1, 0
        n = str(n)
        for num in n:
            prod *= int(num)
            add += int(num)
        return prod - add