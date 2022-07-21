class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        for num in nums:
            cur = abs(num)
            if nums[cur] < 0:
                duplicate = cur
            nums[cur] *= -1
            
        for num in nums:
            num = abs(num)
        
        return duplicate