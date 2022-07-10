class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        largest = [float('-inf')] * k
        for num in nums:
            if num > largest[0]:
                largest[0] = num
                largest.sort()
        return largest[0]
        