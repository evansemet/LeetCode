class Solution:
    def freqAlphabets(self, s: str) -> str:
        res = ""
        pointer = len(s) - 1
        while pointer >= 0:
            if s[pointer] == "#":
                res = chr(int(s[pointer - 2 : pointer]) + 96) + res
                pointer -= 3
            else:
                res = chr(int(s[pointer]) + 96) + res
                pointer -= 1
        return res
            