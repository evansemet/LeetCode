# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def firstBadVersion(self, n: int) -> int:
        l, r = 1, n
        while l <= r:
            m = l + (r - l) // 2
            if m == 1 and isBadVersion(m):
                return 1
            elif isBadVersion(m) and not isBadVersion(m - 1):
                return m
            elif isBadVersion(m):
                r = m - 1
            else:
                l = m + 1
        return -1
        