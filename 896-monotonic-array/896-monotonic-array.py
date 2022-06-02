class Solution:
    def isMonotonic(self, nums: List[int]) -> bool:
        check = 0
        
        for i in range(len(nums) - 1):
            
            if check == 1 and nums[i + 1] < nums[i]:
                return False
            elif check == -1 and nums[i + 1] > nums[i]:
                return False
            
            if nums[i + 1] < nums[i]:
                check = -1
            elif nums[i + 1] > nums[i]:
                check = 1
                
        return True