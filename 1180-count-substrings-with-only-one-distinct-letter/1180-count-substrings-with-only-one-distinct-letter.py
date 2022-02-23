class Solution:
    def countLetters(self, s: str) -> int:
        total, curr = 1, 1
        for i in range(1, len(s)):
            if s[i] == s[i - 1]:
                curr += 1
            else:
                curr = 1
            total += curr
        return total