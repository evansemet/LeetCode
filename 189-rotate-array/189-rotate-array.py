class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        copy = [0] * len(nums)
        for i in range(len(nums)):
            copy[(i + k) % len(nums)] = nums[i]
        nums[:] = copy
        