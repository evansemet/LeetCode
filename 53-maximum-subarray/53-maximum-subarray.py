class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        currSub, maxSub = nums[0], nums[0];
        for number in nums[1:]:
            currSub = max(number, currSub + number)
            maxSub = max(currSub, maxSub)
        return maxSub