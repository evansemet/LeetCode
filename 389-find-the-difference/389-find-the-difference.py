class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        counter_s = Counter(s)
        for c in t:
            if c not in counter_s or counter_s[c] == 0:
                return c
            else:
                counter_s[c] -= 1
        return ""