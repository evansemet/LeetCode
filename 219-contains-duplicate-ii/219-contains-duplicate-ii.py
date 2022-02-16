class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        hashset = {}
        for i in range(len(nums)):
            if nums[i] in hashset and i - hashset[nums[i]] <= k:
                return True
            hashset[nums[i]] = i
        return False