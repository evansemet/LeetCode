class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        for i in range(1,len(s)):
            if s[:i] * int(len(s) // i) == s:
                return True
        return False