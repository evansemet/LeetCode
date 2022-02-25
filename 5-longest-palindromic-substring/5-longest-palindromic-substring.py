class Solution:
    def longestPalindrome(self, s: str) -> str:
        
        def getFromi(s, l, r):
            while l >= 0 and r < len(s):
                if s[l] != s[r]: break
                l -= 1
                r += 1
            return l, r
        
        
        
        longest = [0, 1]
        for i in range(len(s)):
            odd = getFromi(s, i - 1, i + 1)
            even = getFromi(s, i - 1, i)
            curr = max(odd, even, key = lambda x : x[1] - x[0])
            longest = max(longest, curr, key = lambda x : x[1] - x[0])
        return s[longest[0] + 1 : longest[1]]