class Solution:
    def rob(self, nums: List[int]) -> int:
        if len(nums) == 0: return 0
        if len(nums) == 1: return nums[0]
        def reg(nums):
            one, two = 0, 0
            for house in nums:
                temp = one
                one = max(house + two, one)
                two = temp
            return one
        return max(reg(nums[:-1]), reg(nums[1:]))