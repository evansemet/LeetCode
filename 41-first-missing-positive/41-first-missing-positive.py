class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        seen = [0] * (len(nums) + 1)
        for num in nums:
            if num > 0 and num <= len(nums):
                seen[num - 1] = 1
        for idx, val in enumerate(seen):
            if val == 0:
                return idx + 1
        return 1
        