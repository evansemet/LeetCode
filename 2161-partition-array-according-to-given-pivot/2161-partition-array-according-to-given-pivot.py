class Solution:
    def pivotArray(self, nums: List[int], pivot: int) -> List[int]:
        less = list(filter(lambda x: x < pivot, nums))
        greater = list(filter(lambda x: x > pivot, nums))
        num_pivots = len(nums) - len(less) - len(greater)
        return less + [pivot] * num_pivots + greater