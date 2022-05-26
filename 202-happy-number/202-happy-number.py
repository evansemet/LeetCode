class Solution:
    def isHappy(self, n: int) -> bool:
        seen = []
        n = str(n)
        while n != "1":
            nxt = 0
            for c in n:
                nxt += int(c) ** 2
            n = str(nxt)
            if n in seen:
                return False
            seen.append(n)
        return True