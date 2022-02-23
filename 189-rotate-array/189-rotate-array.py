class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        newList = [0] * len(nums)
        for i in range(len(nums)):
            newList[(i + k) % len(nums)] = nums[i]
        nums[:] = newList
        