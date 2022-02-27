class Solution:
    def canJump(self, nums: List[int]) -> bool:
        last = len(nums) - 1
        for i in reversed(range(0, len(nums))):
            if i + nums[i] >= last: last = i
        return last == 0