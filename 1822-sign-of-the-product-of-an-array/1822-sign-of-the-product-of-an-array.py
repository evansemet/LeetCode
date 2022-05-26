class Solution:
    def arraySign(self, nums: List[int]) -> int:
        negs = 0
        for num in nums:
            if num < 0:
                negs += 1
            elif num == 0:
                return 0
        if negs % 2 == 1:
            return -1
        else:
            return 1