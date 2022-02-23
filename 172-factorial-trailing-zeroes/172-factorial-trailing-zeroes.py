class Solution:
    def trailingZeroes(self, n: int) -> int:
        count, curr = 0, 5
        while (n >= curr):
            count += n // curr
            curr *= 5
        return count