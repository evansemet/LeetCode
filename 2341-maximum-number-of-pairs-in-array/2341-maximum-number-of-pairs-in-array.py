class Solution:
    def numberOfPairs(self, nums: List[int]) -> List[int]:
        leftover = sum(v % 2 for v in Counter(nums).values())
        pairs = (len(nums) - leftover) // 2
        return [pairs, leftover]