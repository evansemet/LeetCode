class Solution:
    def sumOddLengthSubarrays(self, arr: List[int]) -> int:
        res = 0
        for i in range(len(arr)):
            for j in range(i + 1, len(arr) + 1, 2):
                res += sum(arr[i : j])
        return res