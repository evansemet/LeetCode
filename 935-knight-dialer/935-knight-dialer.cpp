class Solution:
    def knightDialer(self, n: int) -> int:
        arr = [1] * 10
        for _ in range(n - 1):
            dp = [0] * 10
            dp[0] = arr[4] + arr[6]
            dp[1] = arr[6] + arr[8]
            dp[2] = arr[7] + arr[9]
            dp[3] = arr[4] + arr[8]
            dp[4] = arr[0] + arr[3] + arr[9]
            dp[6] = arr[0] + arr[1] + arr[7]
            dp[7] = arr[2] + arr[6]
            dp[8] = arr[1] + arr[3]
            dp[9] = arr[2] + arr[4]
            arr = dp
        return sum(arr) % (10 ** 9 + 7)