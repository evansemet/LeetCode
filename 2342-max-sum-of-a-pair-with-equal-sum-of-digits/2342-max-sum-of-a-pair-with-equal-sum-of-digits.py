class Solution:
    def maximumSum(self, nums: List[int]) -> int:
        a = sorted([(sum(map(int, str(x))), x) for x in nums])
        ans = -1
        for i in range(1, len(a)):
            if a[i][0] == a[i - 1][0]:
                ans = max(ans, a[i][1] + a[i - 1][1])
        return ans